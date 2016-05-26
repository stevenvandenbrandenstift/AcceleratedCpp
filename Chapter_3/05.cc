#include <iostream>
#include <string>

using namespace std;

int main(){

	int size;

	cout << "Give me size of objects: ";
	cin >> size;

	cout << endl;
	for(int i = 0; i < size; i++){
		cout << string(size, '*') << endl;
	}

	cout << endl;
	for(int i = 0; i < size; i++){
		cout << string(size * 2, '*') << endl;
	}
	cout << endl;
	for(int i = 0; i < size; i++){
		cout << string(i, '*') << endl;
	}

}
