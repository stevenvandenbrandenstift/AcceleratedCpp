#include <iostream>
#include <ios>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::setprecision;
using std::endl;
using std::streamsize;
using std::sort;
using std::vector;

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

	double x;
	vector<double> homework;
	while(cin >> x){
		homework.push_back(x);
	}

	streamsize prec = cout.precision();

	vector<double>::size_type size = homework.size();

	if(size == 0){
		cout << endl << "No homework grades entered, try again" <<endl;
		return 1;
	}
 	sort(homework.begin(), homework.end());

	vector<double>::size_type mid = size/2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid-1])/2 : homework[mid];

	cout << "Your final grade is " << setprecision(3) <<
	0.2 * midterm + 0.4 *finalterm +0.4 *median << setprecision(prec) << endl;

	return 0;

}
