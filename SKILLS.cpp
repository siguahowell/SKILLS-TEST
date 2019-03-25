#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double payRate; 
	double grossIncome; 
	double netIncome;
	double schoolAmount; 
	double bondsAmount;
    	double clothesAmount;
	double parentsBondsAmount; 
	double hoursWorked;
    
    const double TaxRate = 0.14;
    const double ClothesPercentageOfIncome = 0.10;
    const double SchooPercentageOfIncome = 0.01;
    const double SavingBonds = 0.25;
    const double ParentsContribution = 0.50;
    
    cout << "How many hours did you work:"<<endl;
    cin >> hoursWorked;
    
    cout << "What was the hourly rate:"<<"$"<<endl;
    cin >> payRate;
    
    grossIncome = hoursWorked * payRate;
    netIncome = grossIncome *= TaxRate;
    clothesAmount = netIncome * ClothesPercentageOfIncome;
    schoolAmount = netIncome * SchooPercentageOfIncome;
    netIncome -= (clothesAmount + schoolAmount);
    bondsAmount = netIncome * SavingBonds;
    parentsBondsAmount = bondsAmount * ParentsContribution;
    
    cout << fixed << showpoint << setprecision(2);
	cout<< "============================================= \n";    
    cout << "Gross Income: $" << grossIncome << endl;
    cout<< "============================================= \n";   
    cout << "Net Income: $" << netIncome << endl;
	cout<< "============================================= \n";       
    cout << "Clothes & Accessories: $" << clothesAmount << endl;
	cout<< "============================================= \n";       
    cout << "School Supplies: $" << schoolAmount << endl;
	cout<< "============================================= \n";       
    cout << "Savings Bonds: $" << bondsAmount << endl;
	cout<< "============================================= \n";       
    cout << "Parents Bonds Co-Contribution: $" <<parentsBondsAmount << endl;
	cout<< "============================================= \n";       
    
    _getch();
    return 0;
}
