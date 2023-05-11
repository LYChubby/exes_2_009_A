#include <iostream>
using namespace std;

int ft[5];
int n;
int i;

void input() {

	while (true) {

		cout << "Enter The Number of Element In The Array : ";
		cin >> n;
		if ((n > 0) && (n <= 5))
			break;
		else
			cout << "\nElement Array Should Have Minimum 1 and Maximum 5 Elements.\n\n";
	}

	cout << "\n--------------------\n";
	cout << "Enter Array Elements \n";
	cout << "-------------------- \n";

	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << "> ";
		cin >> ft[i];
	}
}

void BinarySearch() {

	int lowerbound, upperbound, mid;

		cout << "\nEnter The Element You Want To Search : ";
		int item;
		cin >> item;

		lowerbound = 0;
		upperbound = n - 1;
		mid = (lowerbound + upperbound) / 2;

			for (i = 0; i < n; i++) {

				if (ft[mid] == item) {
					cout << "\n" << item << "\t" << "Found" << endl;
					break;
				}
				else {
					if (item < ft[mid]) {
						upperbound = mid - 1;
					}

					if (item > ft[mid]) {
						lowerbound = mid + 1;
					}

					if (lowerbound <= upperbound) {
						mid = (lowerbound + upperbound) / 2;
					}
				}
			}

			if (i == n) {
				cout << "\n" << item << "\t" << "Not Found" << endl;
			}
		
}

int main() {
	input();
	BinarySearch();
}