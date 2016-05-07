/***************************************************************************************************
PROGRAM : College_tution.cpp
PURPOSE : It will calculate the total tuition of the 5years' college education along with
	  that the yearly tuition, which increases for
	  total five years consecutively. For this reason, it will take the value of initial tution,
	  and the yearly rate of tution increase in percentage  as inputs,
	  and will show the output calculating the desired result.
Coder : Mosfiqur Rahman (mr986@drexel.edu)
Last Modified : 19th January, 2016.
***************************************************************************************************/

#include <iostream> // for input and output
#include <iomanip> // for using formatting

using namespace std; //for standard library functions, like- cout, etc.

int main ()
{
	//It will set the field-width for output
	const short FIELD_WIDTH = 2;

	//It will ask for the value of initial tuition as input, and will store it in the variable tuition.
	cout << "Please, enter the initial tuition amount in dollars: ";
	long tuition;
	cin >> tuition;

	//It will change the value of tuition from dollars to cents by muliplying 100
	tuition = tuition * 100;

	//It will ask for the value of the rate in percentage of yearly tuition increase, and will store it
	//in the variable percentage.
	cout << "Please, enter the percentage of yearly tuition increase: ";
	double percentage;
	cin >> percentage;

	//It will convert value of the tutuion increase rate from percentage to proper calculation format
	percentage = 1 + (percentage/100);

	//It will sett up a variable named total_tuition, which will store the sum of tutions in consecutive years
	long total_tuition = 0;

	//It will print the first year's tuition
	cout << endl << "The first year's tution is: " << endl
	<< (tuition / 100) << " dollars " << setfill ('0')
	<< setw (FIELD_WIDTH) << (tuition % 100) << " cents." << endl;

	//It will calculate the second year's tuition, add it with the previous value of total_tuition
	// and will store the new value in total_tution.
	total_tuition += tuition;
	tuition *= percentage;

	//It will print the second year's tuition
	cout << endl << "The second year's tution is: " << endl
	<< (tuition / 100) << " dollars " << setfill ('0')
	<< setw (FIELD_WIDTH) << (tuition % 100) << " cents." << endl;

	//It will calculate the third year's tuition, add it with the previous value of total_tuition
	// and will store the new value in total_tution.
	total_tuition += tuition;
	tuition *= percentage;

	//It will print the third year's tuition
	cout << endl << "The third year's tution is: " << endl
	<< (tuition / 100) << " dollars " << setfill ('0')
	<< setw (FIELD_WIDTH) << (tuition % 100) << " cents." << endl;

	//It will calculate the forth year's tuition, add it with the previous value of total_tuition
	// and will store the new value in total_tution.
	total_tuition += tuition;
	tuition *= percentage;

	//It will print the forth year's tuition
	cout << endl << "The forth year's tution is: " << endl
	<< (tuition / 100) << " dollars " << setfill ('0')
	<< setw (FIELD_WIDTH) << (tuition % 100) << " cents." << endl;

	//It will calculate the fifth year's tuition, add it with the previous value of total_tuition
	// and will store the new value in total_tution.
	total_tuition += tuition;
	tuition *= percentage;

	//It will print the fifth year's tuition
	cout << endl << "The fifth year's tution is: " << endl
	<< (tuition / 100) << " dollars " << setfill ('0')
	<< setw (FIELD_WIDTH) << (tuition % 100) << " cents." << endl;

	//It will add the fifth  year's tuition with the total_tution, and will store the new value in total_tution.
	total_tuition += tuition;

	//It will print the total tuition
	cout << endl << "The total tuition of five years' is: " << endl
	<< (total_tuition / 100) << " dollars " << setfill ('0')
	<< setw (FIELD_WIDTH) << (total_tuition % 100) << " cents." << endl << endl;

	return 0;
}
