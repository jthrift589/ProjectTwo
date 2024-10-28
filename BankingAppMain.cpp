//Jerica Thrift Project 2

#include <iostream>
#include <iomanip>
#include <string>
#include "BankingApp.h"

using namespace std;

double initialInvestment;
double monthlyDeposit;
double annualInterest;
int numYears;
char userInput = 'y';
BankingApp InvestmentCalculations;

void displayScreen();


int main() {
	while (userInput != 'q') {
		displayScreen();

		InvestmentCalculations.balancewithoutdeposits(InvestmentCalculations.GetInitialInvestment(), InvestmentCalculations.GetAnnualInterest(), InvestmentCalculations.GetNumYears());
		InvestmentCalculations.balancewithdeposits(InvestmentCalculations.GetInitialInvestment(), InvestmentCalculations.GetMonthlyDeposit(), InvestmentCalculations.GetAnnualInterest(), InvestmentCalculations.GetNumYears());


		cout << "Press any key to pull another report or q to quit." << endl;
		cin >> userInput;
	}
	return 0;
}
//Display screen and get user input 
void displayScreen() {
	cout << "***********************************" << endl;
	cout << "*********** Data Input ************" << endl;
	cout << "Intial Investment Amount: " << endl;
	cin >> initialInvestment;
	while (initialInvestment < 0) {
		cout << "Invalid entry. Please enter Initial Investment Amount:" << endl;
		cin >> initialInvestment;
	}
	InvestmentCalculations.SetInitialInvestment(initialInvestment);
	cout << "Monthly Deposit: " << endl;
	cin >> monthlyDeposit;
	while (monthlyDeposit < 0) {
		cout << "Invalid entry. Please enter monthly deposit amount:" << endl;
		cin >> monthlyDeposit;
	}
	InvestmentCalculations.SetMonthlyDeposit(monthlyDeposit);
	cout << "Annual Interest: " << endl;
	cin >> annualInterest;
	while (annualInterest < 0) {
		cout << "Invalid entry. Please enter annual interest rate:" << endl;
		cin >> annualInterest;
	}
	InvestmentCalculations.SetAnnualInterest(annualInterest);
	cout << "Number of years: " << endl;
	cin >> numYears;
	while (numYears < 0) {
		cout << "Invalid entry. Please enter number of years: " << endl;
		cin >> numYears;
	}
	InvestmentCalculations.SetNumYears(numYears);

	cout << "Press any key to continue" << endl;
}
