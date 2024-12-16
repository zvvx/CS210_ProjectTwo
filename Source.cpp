/*
 * CS210_ProjectTwo
 *
 *  Date: 11-27-2024
 *  Author: Amelia Hettrick
 */

#include <iostream>
#include <iomanip>
#include "Investment.h"
#include "CalculateInterest.h"
//Includes Header Files

using namespace std;

int main() {
	//Variable Initialization
	double iniInv;
	double monDep;
	double annInt;
	int yrs;
	Investment userInvestment;
	CalculateInterest c;

	//Prompts and gets user input
	cout << "********* Data Input *********" << endl;
	cout << "Initial Investment Amount:";
	cin >> iniInv;
	cout << "Monthly Deposit:";
	cin >> monDep;
	cout << "Annual Interest (as a %):";
	cin >> annInt;
	cout << "Number of years:";
	cin >> yrs;
	cout << endl;

	//Saves user input
	//Calls Investment Class and uses setters
	userInvestment.SetInitialInvestment(iniInv);
	userInvestment.SetMonthlyDeposit(monDep);
	userInvestment.SetAnnualInterest(annInt);
	userInvestment.SetNumYears(yrs);

	//Calculates and prints investment projections
	//Calls CalculateInterest Class and uses Investment Class getters
	c.calculateWithMD(userInvestment.GetInitialInvestment(), userInvestment.GetMonthlyDeposit(), userInvestment.GetAnnualInterest(), userInvestment.GetNumYears());
	cout << endl;
	c.calculateWithoutMD(userInvestment.GetInitialInvestment(), userInvestment.GetAnnualInterest(), userInvestment.GetNumYears());
	
	return 0;
}