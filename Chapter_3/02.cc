#include <iostream>
#include <string>

using namespace std;


int main()
{
	cout << "Give me your name: ";
	string name;

	cin >> name;

	const string greeting = "Hello, " + name + "!";

	const int pad_x = 2;
	const int pad_y = pad_x + 1;

	const int rows = pad_y * 2 + 3;

	const string::size_type cols = greeting.size() + pad_x * 2 + 2;

	cout << endl;

	for(int r = 0; r != rows; ++r){

		string::size_type c = 0;
		while(c != cols){
			if (r == pad_y + 1 && c == pad_x + 1){
				cout << greeting;
				c += greeting.size();
			} else {
				if(r == 0 || r == rows - 1 || c == 0 || c == cols -1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
		cout << endl;
	}


	return 0;
}
