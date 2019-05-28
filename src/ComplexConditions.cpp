/*
 * ComplexConditions.cpp
 *
 *  Created on: 28 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

/*
 *  == equality test operator
 *  != not equal to
 *  < less than
 *  > greater than
 *  <= less than or equal to
 *  >= greater than or equal to
 */


int main()
{
	int value1 = 7;
	int value2 = 4;

	if(value1 < 8)
	{
		cout << "Condition 1: true" << endl;
	}
	else
	{
		cout << "Condition 1: false" << endl;
	}

	if(value1 == 7 && value2 <= 5)
	{
		cout << "Condition 2: true" << endl;
	}
	else
	{
		cout << "Condition 2: false" << endl;
	}

	if(value1 >= 6 || value2 == 5)
	{
		cout << "Condition 2: true" << endl;
	}
	else
	{
		cout << "Condition 2: false" << endl;
	}


	// Complex conditionals can be simplified into single booleans for use in logic statements.
	bool conditional = (value1 == 7 && value2 <= 5) || (value2 >= 3);

	if(conditional)
	{
		cout << "Conditional bool is true " << endl;
	}
	else
	{
		cout << "Conditional bool is false" << endl;
	}


	return 0;
}


