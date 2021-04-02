#include <iostream>

using namespace std;


int main(){

string name;
char initial;
unsigned short age;
bool isAdult;
unsigned int zipcode;
float wage;
unsigned short daysWorked;
unsigned short hoursWorkedPerDay[7];
const float Tax = 0.1f;
unsigned short totalHours = 0;
double grossIncome;
double netIncome;



cout << "Enter first name: ";
cin >> name;

cout << "Enter initial: ";
cin >> initial;

cout << "Enter age: ";
cin >> age;
if (age >= 18) {
	isAdult = true;
}
else {
	isAdult = false;
}

cout << "Enter zipcode: ";
cin >> zipcode;

cout << "Enter wage: ";
cin >> wage;

cout << "Enter days worked: ";
cin >> daysWorked;


for (int i = 0; i < daysWorked; i++)
{
	cout << "Enter hours worked for day" << i + 1 << ": ";
	cin >> hoursWorkedPerDay[i];
	totalHours += hoursWorkedPerDay[i];

}

cout << name << " worked " << totalHours << " hours at $" << wage << " an hour." << endl;

grossIncome = wage * totalHours;
netIncome = grossIncome - (grossIncome * Tax);

	cout << "Total gross Income: " << grossIncome << endl;

	cout << "Total net income: " << netIncome << endl;
}












