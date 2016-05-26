#include <iostream>
#include <ios>
#include <iomanip>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::setprecision;
using std::endl;
using std::streamsize;

int main()
{
	cout << "please give your name: ";

	string name;

	cin >> name;

	cout << "Hello, " << name << "!" << endl;

	cout << "Please enter your midterm and final grades: ";

	double midterm, finalterm;
	cin >> midterm >> finalterm;

	cout << "Enter all homework grades: ";

	double x, count, sum;
	sum = 0;
	count = 0;
	while(cin >> x){
		++count;

		sum += x;
	}

	streamsize prec = cout.precision();

	cout << "Your final grade is " << setprecision(3) <<
	0.2 * midterm + 0.4 *finalterm +0.4 *sum/count << setprecision(prec) << endl;

	return 0;

}
