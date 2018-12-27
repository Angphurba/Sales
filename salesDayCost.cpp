// Calculates total sales 
// author @Angphurba

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

double salesDayCost(int numberParameter, double priceParameter); //FUNCTION DECLARATION
																 //Computers the total cost, including 3% sales tax,
																 //on numberParameter items at a cost of priceParameter each.

int main()
{
	string ending("We did it!\n\n");
	double price, bill;
	int number;
	char choice;
	char choice2;

	do
	{
		cout << "Enter the number of items purchased: ";
		cin >> number;
		cout << "Enter the price per item $";
		cin >> price;

		bill = salesDayCost(number, price); //FUNCTION CALL

		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << number << " items at "
			<< "$" << price << " each.\n"
			<< "Sales day cost, including tax, is $" << bill
			<< endl;
		cout << "Do you want to run again? "
			<< "Enter a 'Y' for Yes or 'N' for No." << endl;
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');

	cout << endl;
	cout << ending;


	cout << "Do you want to start a special sales day calculations? "
		<< "Enter a 'Y' for Yes or 'N' for No." << endl;
	cin >> choice;

	if (choice == 'Y' || choice == 'y')
	{
		do
		{
			cout << "Enter the number of items purchased: ";
			cin >> number;
			cout << "Enter the price per item $";
			cin >> price;

			bill = salesDayCost(number, price); //FUNCTION CALL

			cout.setf(ios::fixed);
			cout.setf(ios::showpoint);
			cout.precision(2);
			cout << number << " items at "
				<< "$" << price << " each.\n"
				<< "Special sales day cost, including tax, is $" << bill
				<< endl;
			cout << "Do you want to run again? "
				<< "Enter a 'Y' for Yes or 'N' for No." << endl;
			cin >> choice;
		} while (choice == 'Y' || choice == 'y');
	}

	else
	{
		cout << "Have a good day." << endl;
	}


	system("pause");
	return 0;
}

double salesDayCost(int numberParameter, double priceParameter) //FUNCTION HEAD
{
	const double TAXRATE = 0.03; //3% sales tax		FUNCTION BODY
	double subtotal;							  //FUNCTION BODY
												  //ALL OF THIS IS FUNCTION DEFINITON
	subtotal = priceParameter * numberParameter;  //FUNCTION BODY
	return (subtotal + subtotal*TAXRATE);		  //FUNCTION BODY
}

