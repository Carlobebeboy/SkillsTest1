#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
    double payrateperhour;
	double numberofhours;
	
	cout << "Pay rate for an hour" << " " << "Number of hours worked each week" << endl;
	cout << " " << endl;

	cout << "Pay rate for an hour: " << "   ";
	cin >> payrateperhour;
	cout << "Payrate for an hour: " << "    " << payrateperhour << "dollars" << endl; 

	cout <<"Number of hours: " << "   ";
	cin >> numberofhours;
	cout<< "Number of hours: " << "    " << numberofhours << "hours" << endl;

	cout << "A. Income before paid tax: " << payrateperhour * numberofhours << "  " << "dollars" << endl;
	cout << " " << "Income after paid tax: " << (payrateperhour * numberofhours) - ((payrateperhour*numberofhours) * 0.14) << "  " << "dollars" << endl;

	cout << " " << endl;

	cout << "B. Money you spend on clothes and other accessories: " << "  ";
	cout << "  " << endl;
	cout << "           "<< ((payrateperhour * numberofhours) - ((payrateperhour*numberofhours) * 0.14)) - ((payrateperhour * numberofhours) - ((payrateperhour*numberofhours) * 0.14)*0.10) << "  " << "dollars" << endl;

	cout << "  " << endl;

	cout << "C. The money you spend on school supplies: " << "  ";	cout << "  " << endl;	cout << "          "<< (payrateperhour * numberofhours) - ((payrateperhour*numberofhours) * 0.14) - ((payrateperhour * numberofhours) - ((payrateperhour*numberofhours) * 0.14)*0.01) << "  " << "dollars" << endl;	cout << "D. The money you spend to buy savings bonds: " << "  ";	cout << "  " << endl;	cout << "          "<< (payrateperhour * numberofhours) - ((payrateperhour*numberofhours) * 0.14) - ((payrateperhour * numberofhours) - ((payrateperhour*numberofhours) * 0.14)*0.25) << "  " << "dollars" << endl;	cout << "E.The money your parents spend to buy additional savings bonds for you: " << "  ";	cout << "  " << endl;	cout << "          "<< (payrateperhour * numberofhours) - ((payrateperhour*numberofhours) * 0.14) - ((payrateperhour * numberofhours) - ((payrateperhour*numberofhours) * 0.14)*0.25) - 0.50 << "  " << "dollars" <<endl;		
	_getch();
	return 0;
}