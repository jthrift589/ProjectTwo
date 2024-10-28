//Jerica Thrift Project 2

#include <iostream>
#include <iomanip>
#include "BankingApp.h"

using namespace std;


//setters and getters
void BankingApp::SetInitialInvestment(double initialInvestment)
{
	initial_Investment = initialInvestment;
}

double BankingApp::GetInitialInvestment()
{
	return initial_Investment;
}

void BankingApp::SetMonthlyDeposit(double monthlyDeposit)
{
	monthly_Deposit = monthlyDeposit;
}

double BankingApp::GetMonthlyDeposit()
{
	return monthly_Deposit;
}

void BankingApp::SetAnnualInterest(double annualInterest)
{
	annual_Interest = annualInterest;
}

double BankingApp::GetAnnualInterest()
{
	return annual_Interest;
}

void BankingApp::SetNumYears(int numYears)
{
	num_Years = numYears; 
}

int BankingApp::GetNumYears()
{
	return num_Years;
}

double BankingApp::balancewithdeposits(double initialInvestment, double monthlyDeposit, double annualInterest, int numYears)
{
	//Display screen header
	cout << "     Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "===============================================================" << endl;
	cout << "  Year        Year End Balance      Year End Earned Interest" << endl;
	cout << "---------------------------------------------------------------" << endl;

	total_Balance = initialInvestment;
	

	for (int i = 1; i <= numYears; i++) {
		annual_Interest_withDeposits = 0;
		for (int j = 0; j < 12; j++) {
			annual_Interest = (total_Balance + monthlyDeposit) * ((annualInterest / 100) / 12);
			annual_Interest_withDeposits = annual_Interest_withDeposits + annual_Interest;
			total_Balance = total_Balance + monthlyDeposit + annual_Interest;
			
		}
		cout << "     " << i << "             $" << fixed << setprecision(2) << total_Balance << "            $" << annual_Interest_withDeposits << endl;
		//unable to determine error with interest calculation loop. output is coninuously just for first month despite calculations within loop
	}


	return total_Balance;  
}

double BankingApp::balancewithoutdeposits(double initialInvestment, double annualInterest, int numYears)
{
		total_Balance = initialInvestment;

		//Display screen header
		cout << "     Balance and Interest Without Additional Monthly Deposits" << endl;
		cout << "===============================================================" << endl;
		cout << "  Year        Year End Balance       Year End Earned Interest" << endl;
		cout << "---------------------------------------------------------------" << endl;

		
		for (int i = 1; i <= numYears; i++) {
			annual_Interest = ((total_Balance) * (annualInterest / 100));
			total_Balance = total_Balance + annual_Interest;
			cout << "     " << i << "             $" << fixed << setprecision(2) << total_Balance << "            $" << annual_Interest << endl;

		}

		return total_Balance;
}
