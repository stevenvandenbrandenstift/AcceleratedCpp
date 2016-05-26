#include <iostream>

using namespace std;

int main(){

	cout << "Give me 2 different numbers (divided by a space): ";

	int first, second;
	cin >> first >> second;

	if (first < second)
		cout << second << " is larger then " << first << endl;
	else
		cout << first << " is larger then " << second << endl;

}
