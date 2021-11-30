#include<iostream>
using namespace std;
int main() {
	int height, width,sp=1;
	cout << "Enter height :";
	cin >> height;
	cout << "Enter width :";
	cin >> width;
	for (int i = 1; i <= height; i++) {
		for (int k = height - 1; k >= i; k--)
			cout << " ";
		for (int j = 1; j <= width; j++) {
			cout << "*";
		}
		cout << endl;
	}
}