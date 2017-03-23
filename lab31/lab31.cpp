//Created By: Tony Hubbell
 //Created On: 3/23/2017
 //This program will run the Temperature Converter Class
#include <iostream> 
#include <cstdlib>
#include <string>
 using namespace std; 
 
 double dumbPhone = 0;  // Device charge – free for dumb phone, $5 for smart phone, $10 tablet
 double smartPhone = 5;
 double tablet = 10;
 double UnlimitedTandT = 30;  //Monthly charge – $30 for unlimited talk and text
 double unlimitedData = 75;  // Unlimited data – $75 for unlimited talk, text and data
 double extraGB = 1.5; // up to 10 GB and $1.50 for each GB after that
 double perDataCharge1 = 5;  /* Pay per data charge - $5 for the first GB of data 
 and $0.75 for each GB or portion there of up to 5 GB.
 $1.50 for each GB or portion there of up to 15 GB.  
 $3 for each GB after that.*/
 double perDataCharge5 = 0.75;
 double perDataCharge15 = 1.5;
 double perDataChargeEnd = 3;
 double corperateDiscount = 0.1;  // Corporate Discount – 10% discount for corporate customers
 double familyDiscount = 3;  // Family Plan Discount - $3 per phone line over 2.
 
 int main() 
 { 
     int numPhone = 0;
     double totalPrice = 0;
     int numDumb = 0;
     int numSmart = 0;
     int numTablet = 0;
     
   cout << "How many phones?" << endl;
   cin >> numPhone;
   
   if (numPhone >= 2) {
       totalPrice = (numPhone * familyDiscount) - 6;
       numPhone = numPhone - 2;
   }
   
   cout << "How many dumb phones?" << endl;
   cin >> numDumb;
   cout << "How many smart phones?" << endl;
   cin >> numSmart;
   cout << "How many tablets?" << endl;
   cin >> numTablet;
   
   if (numDumb >= 1) {
       totalPrice = totalPrice + (numDumb * dumbPhone);
   }
   if (numSmart >= 1) {
       totalPrice = totalPrice + (numSmart * smartPhone);
   }
   if (numTablet >= 1) {
       totalPrice = totalPrice + (numTablet * tablet);
   }
   
   
   cout << "Your total is... " << totalPrice;
     return 0;
 }