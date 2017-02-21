//Created By: Tony Hubbell
 //Created On: 2/7/2017
 //I am making an algorithm to define the temp based on wind chill
#include <iostream> 
#include <cmath>
 using namespace std; 
 
 int main() 
 { 
     double oldWindChill;
     double newWindChill;
     int currentTemp;
     int windSpeed;
     double diffrence;
     
     cin >> currentTemp;
     cin >> windSpeed;
     oldWindChill = 0.081 * (3.71 * sqrt(windSpeed) + 5.81 - 0.25 * windSpeed) * (currentTemp - 91.4) + 91.4;
     newWindChill = 35.74 + 0.6215 * currentTemp -35.75 * pow(windSpeed, 0.16) + 0.4275 * currentTemp * pow(windSpeed, 0.16);
     diffrence = fabs(oldWindChill - newWindChill);
     
     
     cout << "wind speed: " << windSpeed << endl;
     cout << "old " << oldWindChill << endl;
     cout << "new " << newWindChill << endl;
     cout << "diffrence of the two wind chills: " << diffrence << endl;
     return 0;
 }