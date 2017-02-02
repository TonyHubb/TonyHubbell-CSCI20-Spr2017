//Created By: Tony Hubbell
 //Created On: 2/2/2017
 // My population prediction for the United States
 
 #include <iostream> 
 using namespace std; 
 
 int main() 
 { 
    int popYear2017 = 326625791; // the current amount of people in the US
    int addPopPerYear = 1*4*60*24*365; //The average amount of new people in the US each year
    int choosenYear = 0; // the year that the user picks
    int outputYearPop = 0; 
    int endPop = 0;
    int currentYear = 2017;
     cout << "Pick a number of years in the future that you want to see the population of the US for." << endl;
     cin >> choosenYear; //prompt the user to chhose a number for amount of years ahead
     
     outputYearPop = choosenYear * addPopPerYear;
     endPop = outputYearPop + popYear2017;
     choosenYear += currentYear;
     cout<< "In the year " << choosenYear << " , the population is expected to be " << endPop << " in the United States." << endl;
     
     return 0;
 }