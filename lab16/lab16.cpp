//Created By: Tony Hubbell
//Created On: 2/16/2017
 // 
 
 #include <iostream> 
 #include <string>
 using namespace std; 
 
 struct monster {
    string Name;
    string Head;
    string Eyes;
    string Ears;
    string Nose;
    string Mouth;
 };
 
 
 int main() 
 { 
     
     cout << "Your options are Spritem, Vegitas, Wackus, or none. please input your monsters name and then one for each of these for head, eyes, ears, nose, and mouth" << endl;
     
     // first monster 
     cout << "Monster 1" << endl;
     monster monster1;
     cout << "Name: ";
     cin >> monster1.Name;
     cout << "Head: ";
     cin >> monster1.Head;
     cout << "Eyes: ";
     cin >> monster1.Eyes;
     cout << "Ears: ";
     cin >> monster1.Ears;
     cout << "Nose: ";
     cin >> monster1.Nose;
     cout << "Mouth ";
     cin >> monster1.Mouth;
     
     // second monster
     cout << "Monster 2" << endl;
          monster monster2;
     cout << "Name: ";
     cin >> monster2.Name;
     cout << "Head: ";
     cin >> monster2.Head;
     cout << "Eyes: ";
     cin >> monster2.Eyes;
     cout << "Ears: ";
     cin >> monster2.Ears;
     cout << "Nose: ";
     cin >> monster2.Nose;
     cout << "Mouth ";
     cin >> monster2.Mouth;
     
     // Third monster
     cout << "Monster 3" << endl;
     monster monster3;
     monster3.Name = "Bob";
     monster3.Head = "Spritem";
     monster3.Eyes = "Spritem";
     monster3.Ears = "Spritem";
     monster3.Nose = "Spritem";
     monster3.Mouth = "Spritem";
     cout << "Name: " << monster3.Name << endl;
     cout << "Head: " << monster3.Head << endl;
     cout << "Eyes: " << monster3.Eyes << endl;
     cout << "Ears: " << monster3.Ears << endl;
     cout << "Nose: " << monster3.Nose << endl;
     cout << "Mouth: " << monster3.Mouth << endl;
     
       // Fourth monster
       cout << "Monster 4" << endl;
     monster monster4;
     monster4.Name = "Bill";
     monster4.Head = "Wackus";
     monster4.Eyes = "Wackus";
     monster4.Ears = "Wackus";
     monster4.Nose = "Wackus";
     monster4.Mouth = "Wackus";
     cout << "Name: " << monster4.Name << endl;
     cout << "Head: " << monster4.Head << endl;
     cout << "Eyes: " << monster4.Eyes << endl;
     cout << "Ears: " << monster4.Ears << endl;
     cout << "Nose: " << monster4.Nose << endl;
     cout << "Mouth: " << monster4.Mouth << endl;
     
     return 0;
 }