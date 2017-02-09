//Created By: Tony Hubbell
//Created On: 2/9/2017
 // Mad Lib project about the all amazing knight
 
 #include <iostream> 
 #include <string>
 using namespace std; 
 
 int main() 
 { 
  string animal;
  int number;
  string vegie;        // variables being inisalized for the mad libs
  string verb;
  int years;
  string noun;
  
  animal = "pigeon";
  number = 9000;
  vegie = "potato"; //declairing variables 
  verb = "jump";
  years = 69;
  noun = "James";
  
  cout << "There once was a brave knight that went to fight an extremely dangerous " << animal << " The two of them fought tooth and nail for " << number << " days. After this time they both died by being hit in the head by a " << vegie << ". Because the epic battle took so long, nobody really cared any more, so they just " << verb << " over them everyday because it was to much of a hassle to do anything else. This kept going on for " << years << " until a witch was passing through and saw the two lying there dead. The witch decided to put a curse on the town until they cleaned up after the battle that happened so long ago. The witch cursed them by making them all have to lick a " << noun << " every day until the bodies were moved. So just in case you were wondering how long it took for the bodies to be moved you should know that they never were." << endl;
     return 0;
 }