//Created By: Tony Hubbell
//Created On: 2/16/2017
 // assignment 1.0 finding the income based on hourly income
 
 /* struct the persons name persons hourly
 wage persons amount of hours other
 variables $130 for health insurance 17% in taxes 
 input persons wage and name then multiply by their hours to get their gross pay
 then subtract 130 and then subtract 17% by multiplying by .83 to get 
 take home pay output << a wage slip with name, hours, rate, gross pay, and net pay (after taxes). */
 
 #include <iostream> 
 #include <string>
 using namespace std; 
 
 struct worker {
     double wage;
     string name;
     int hoursWorked;
 };
 
 int main() 
 { 
     double tax = 0.83;
     int insurance = 130;
     double grossPay;
     double netPay;
     
     worker subject;
     cout << "Your name: ";
     cin >> subject.name;
     cout << "Hours worked: ";
     cin >> subject.hoursWorked;
     cout << "Hourly wage: ";
     cin >> subject.wage;
     grossPay = subject.hoursWorked * subject.wage;
     cout << "Gross pay: " << grossPay << endl;
     netPay = (grossPay - insurance) * tax;
     cout << "Net pay: " << netPay << endl;
 
     return 0;
 }