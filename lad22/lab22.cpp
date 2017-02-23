//Created By: Tony Hubbell
 //Created On: 2/7/2017
 //generates a number between 1 and 100 randoness
#include <iostream> 
#include <cstdlib>
 using namespace std; 
 
 int randomNumber()
 {
      srand(time(0)); // starts the random number generator
    int random = rand() % 100 + 1; // random number between 1 and 100
    cout << "This is your new super amazing and all so fantastic random number: " << random << "\n"; 
 }
 
 int main() 
 { 
   randomNumber();
     return 0;
 }