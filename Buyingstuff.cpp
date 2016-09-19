/// The structures of this code is completely same as the one shown on the example file on VS2015
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "***************************************\n"
		<< "* Welcome to Chocolate Restaurant     *" << "\n"
		<< "* ----------------------------------- *\n"
		<< "***************************************\n"
		<< "Fingers ............................... $2.25\n"
		<< "Drops ................................. $1.85\n"
		<< "Peppermints ........................... $0.75\n"
		<< "Bears ................................. $3.75\n"
		<< "Kisses ................................ $0.50\n\n"

		<< "How many fingers? ";
	double fingers, drops, peppermints, bears, kisses;
	cin >> fingers;

	cout << "How many drops? ";
	cin >> drops;

	cout << "How many peppermints? ";
	cin >> peppermints;

	cout << "How many bears? ";
	cin >> bears;

	cout << "How many kisses? ";
	cin >> kisses;

	double total;
	total = ((fingers * 2.25 + drops * 1.85 + peppermints * 0.75 + bears * 3.75 + kisses * 0.5) * 1.0975);
	cout.precision(4); /// took four significant num

	cout << "Your ordered " << fingers << " fingers, " << drops << " drops, " << peppermints << " peppermints, ";
	cout << bears << " bears, and " << kisses << " kisses. ";
	cout << "The total for this order is $" << total;
	cout << " including tax."; << endl /// Too long and have to break them into different line

	return 0;
}
