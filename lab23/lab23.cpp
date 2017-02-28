//Created By: Tony Hubbell
//Created On: 2/28/2017
 // user picks the numbers for a ramdom number generator as well as a swap function that switches the users inputed numbers
 
 #include <iostream> 
 #include <string>
 #include <cstdlib>
 using namespace std; 
 
 
 void swap(int num1, int num2, int& num3, int& num4) //swap the 2 inputed numbers
 {
     num4 = num1;  // giving new names
     num3 = num2;
 };

  void randomNumber(int num1, int num2, int& num3, int& num4)
 {
     swap(num1, num2, num3, num4); // calls the swaped numbers
      srand(time(0)); // starts the random number generator
    int random = rand() % num3 + num4; // random number between 1 and 100
    cout << "This is your new super amazing and all so fantastic random number: " << random << "\n"; 
 };
 
 
 int main() 
 { 
     int num1 = 0;  // declaring variables for swap and random number generator
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    cin >> num1 >> num2;
  randomNumber(num1, num2, num3, num4); 
     return 0;
 }