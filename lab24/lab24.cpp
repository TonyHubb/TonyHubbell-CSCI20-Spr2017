//Created By: Tony Hubbell
//Created On: 2/28/2017
 // user picks the numbers for a ramdom number generator as well as a swap function that switches the users inputed numbers
 
 #include <iostream> 
 #include <string>
 #include <cstdlib>
 using namespace std; 
 
  int num1 = 0;  // declaring variables for swap and random number generator
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    double Kg;
    double pounds;
   
 
 void swap(int num1, int num2, int& num3, int& num4) //swap the 2 inputed numbers
 {
     num4 = num1;  // giving new names
     num3 = num2;
 };

  int randomNumber(int num1, int num2, int& num3, int& num4)
 {
     swap(num1, num2, num3, num4); // calls the swaped numbers
      srand(time(0)); // starts the random number generator
    int random = rand() % (num4 - num3) + num4; // random number between 1 and 100
   return random;
 };
 
 void PoundsToKg(int num1, int num2, int& num3, int& num4)
 {
    Kg = (random * 45) / 100;
     
 }
 
 void KgToPounds(int num1, int num2, int& num3, int& num4)
 {
    pounds = Kg / 0.45;
     
 }
 
 int main() 
 { 
    
    cout << "Pick a small number and then a larger one for your range of where you want your random number to appear" << endl;
     cin >> num1 >> num2;
  randomNumber(num1, num2, num3, num4); 
  cout << "random number: " << randomNumber;
     return 0;
 }