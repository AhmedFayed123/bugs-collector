#include<iostream>
using namespace std;
int main() {
	int x, total = 0;
	for (int i = 1; i <= 7; i++) {
		cout << "enter the bugs you collect in the " << i << "th day" << endl;
		cin >> x;
		total += x;
	}
	cout << "the total is :" << total << endl;
	return 0;
}