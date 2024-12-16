#include <iostream>
#include <iomanip>
#include "PrintHeader.h"
#include "CalculateInterest.h"

using namespace std;

//Defines method for calculating with monthly deposit
void CalculateInterest::calculateWithMD(double intialInvestment, double monthlyDeposit, double annualInterest, int numYears) {
	PrintHeader h;
	cout << "   Balance And Interest With Monthly Deposit" << endl;
	h.printHeader(); //Calls printHeader to print Year, Year End Balance, and Year End Earned Interest above data
	//Local variable initialization
	double openingAmount = intialInvestment;
	double total;
	double monthlyInterestAmount;
	double yearlyInterestAmount;
	double closingBalance;
	cout << setprecision(2) << fixed; //Fixed to 2 decimal point places
	for (int currYear = 1; currYear <= numYears; ++currYear) { //Loop for number of years set by user
		yearlyInterestAmount = 0; //Resets yearlyInterestAmount to 0
		for (int m = 0; m < 12; ++m) { //Loop for 12 months a year
			total = openingAmount + monthlyDeposit; //Determines total $ amount that interest should be applied to
			monthlyInterestAmount = total * ((annualInterest / 100) / 12); //Calculates the current months interest $ amount
			yearlyInterestAmount = yearlyInterestAmount + monthlyInterestAmount; //Running total of $ interest amount for the year
			closingBalance = total + monthlyInterestAmount; //Closing balance calculation for end of month
			openingAmount = closingBalance; //Opening amount set to previous closing balance
		}
		cout << currYear << "           $" << closingBalance << "           $" << yearlyInterestAmount << endl; //Printing of data for year
	}
}

//Defines method for calculating without monthly deposit
//Same as calculating with monthly deposit but with monthlyDeposit variable removed
void CalculateInterest::calculateWithoutMD(double intialInvestment, double annualInterest, int numYears) {
	PrintHeader h;
	cout << "   Balance And Interest Without Monthly Deposit" << endl;
	h.printHeader();
	double openingAmount = intialInvestment;
	double total;
	double monthlyInterestAmount;
	double yearlyInterestAmount;
	double closingBalance;
	cout << setprecision(2) << fixed;
	for (int currYear = 1; currYear <= numYears; ++currYear) {
		yearlyInterestAmount = 0;
		for (int m = 0; m < 12; ++m) {
			total = openingAmount; //No monthlyDeposit variable added to total
			monthlyInterestAmount = total * ((annualInterest / 100) / 12);
			yearlyInterestAmount = yearlyInterestAmount + monthlyInterestAmount;
			closingBalance = total + monthlyInterestAmount;
			openingAmount = closingBalance;
		}
		cout << currYear << "           $" << closingBalance << "           $" << yearlyInterestAmount << endl;
	}
}
