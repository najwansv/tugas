#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void introduction();
string greeting();

// Beginning of MAIN program.

int main()
{

// Displays the introduction.

	introduction();

// Declaring the variables.

	string	contact_first, contact_last, contact_address, contact_city;
	string	contact_state, contact_zip, contact_phone, f_i, l_i;
	string	full_address, full_name;

	string name;
	char menu_option;

	name = greeting();

// Displays the menu options.

	for (int i = 0; i <= 1; i++)
		getchar();
	
	char run_again;
	do
	{

	system("cls");

	cout << "****************************************************" << endl;
	cout << "************  F I N A L  P R O G R A M  ************" << endl;
	cout << "****************************************************" << endl;
	cout << "*                                                  *" << endl;
	cout << "* PROGRAM          DESCRIPTION                     *" << endl;
	cout << "* ------------------------------------------------ *" << endl;
	cout << "*                                                  *" << endl;
	cout << "*   1              Calculate Sales Tax             *" << endl;
	cout << "*                                                  *" << endl;
	cout << "*   2              Create Customer Contact Card    *" << endl;
	cout << "*                                                  *" << endl;
	cout << "*   3              Balance a Checkbook             *" << endl;
	cout << "*                                                  *" << endl;
	cout << "*   4              Display Trip Mileage Report     *" << endl;
	cout << "*                                                  *" << endl;
	cout << "*   0              EXIT                            *" << endl;
	cout << "*                                                  *" << endl;
	cout << "* ------------------------------------------------ *" << endl;
	cout << "*                                                  *" << endl;
	cout << "****************************************************" << endl;

	cout << '\n' << "Please enter your selection: ";
	cin >> menu_option;

	cin.clear();
	cin.sync();

	switch(menu_option)
	{
	case '1':
		cout << "TEST 1";
		return(0);
		break;

	case '2':
		do
		{
		cin.clear();
		cin.sync();
		system("cls");
		cout << "***************************************************" << endl;
		cout << "***** C U S T O M E R  C O N T A C T  C A R D *****" << endl;
		cout << "***************************************************" << endl;

		cout << endl << "First Name             : ";
		getline(cin, contact_first);
		cout << endl << "Last Name              : ";
		getline(cin, contact_last);
		cout << endl << "Street Address         : ";
		getline(cin, contact_address);
		cout << endl << "City                   : ";
		getline(cin, contact_city);
		cout << endl << "State (ABBREVIATE)     : ";
		getline(cin, contact_state);
		cout << endl << "Zip Code               : ";
		getline(cin, contact_zip);
		cout << endl << "Phone Number           : ";
		getline(cin, contact_phone);
		cout << endl;

		system("cls");
		f_i = contact_first.substr (0,1);
		l_i = contact_last.substr (0,1);
		full_name = contact_first + " " + contact_last;
		full_address = contact_city + ", " + contact_state + " " + contact_zip;

		cout << "*****************************************************" << endl;
		cout << "***********"<<setw(15)<<f_i<<" "<<l_i<<setw(25)<<"************" << endl;
		cout << "*****************************************************" << endl;
		cout << "***********   " << endl;
		cout << "***********   " << full_name << endl;
		cout << "***********   " << contact_address << endl;
		cout << "***********   " << full_address << endl;
		cout << "***********   " << contact_phone << endl;
		cout << "***********   " << endl;
		cout << "*****************************************************" << endl << endl;
		cout << "Do you want to enter another contact record? (Y/N): ";
		cin >> run_again;
		}
		while (run_again == 'Y');

		break;

	case '3':
		cout << "TEST 3";

		break;

	case '4':
		cout << "TEST 4";

		break;

	case '0':

		break;

	default:
		system("cls");
		cout << "************************************************" << endl;
		cout << "*****    I N V A L I D  R E S P O N S E    *****" << endl;
		cout << "************************************************" << endl;
		cout << '\n' << "Do you want to return to the main menu? (Y/N): ";
		cin >> run_again;
		break;
	}
	}
while (run_again == 'Y');
return (0);
}