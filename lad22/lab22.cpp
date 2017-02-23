//Created By: Tony Hubbell
 //Created On: 2/7/2017
 //generates a number between 1 and 100 randoness
#include <iostream> 
#include <cstdlib>
 using namespace std; 
 
 int main() 
 { 
    srand(time(0)); 
    int random = rand() % 100 + 1; 
    cout << "This is your new super amazing and all so fantastic random number: " << random << "\n"; 
     return 0;
 }