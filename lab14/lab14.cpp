//Created By: Tony Hubbell
 //Created On: 2/7/2017
 // My coin machine at a 10.9% tax rate the coin machine takes in an input of coins and outputsyour returned money
 
 #include <iostream> 
 using namespace std; 
 
 int main() 
 { 
   float tax = 0.109;
   int totalCents = 0;
   int coins = 0;           // Starter Variables
   
   cin >> coins;
   totalCents = coins;
   cout << "You put in " << endl; 
   cout << totalCents / 25 << " Quarters" << endl; //finding total quarters 
        totalCents = totalCents % 25;
   cout << totalCents / 10 << " dimes" << endl; // finding total dimes
        totalCents = totalCents % 10;
   cout << totalCents / 5 << " Nickles" << endl; // finding total nickels
        totalCents = totalCents % 5;
   cout << totalCents << " Pennies" << endl; // finding total pennies
   
         coins = coins - (coins * tax); // finding the money output after tax
   cout << "You got back $" << coins * 0.01 << " after tax from the machine." << endl;
  
     return 0;
 }