/*
 *  Question1.cpp
 *
 *  Name:           [ BASSEY, ODUDU ESIT]
 *  Department:     [ COMPUTER SCIENCE]
 *  Matric. No:     [ PDS/2013/0154 ]
 *
 * a program that reads an integer 
 * and determines and prints whether it’s odd or even.
 *
 */
 
 #include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int ODDY;
	
	cout << "Enter integer: ";
	cin >> ODDY;
	
	if (ODDY % 2 == 0)
	cout << "The integer is even: ";
	if (ODDY % 2 == 1)
	cout << "The integer is odd: ";
	
	return 0;
	system("PAUSE");
	return 'EXIT_SUCCESS';
}
