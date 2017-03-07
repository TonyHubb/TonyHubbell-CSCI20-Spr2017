//Created By: Tony Hubbell
 //Created On: 3/7/2017
 //display 5 diffrent books from user input using classes
#include <iostream> 
#include <cstdlib>
#include <string>
 using namespace std; 
 
 
 class BookInfo {
   private:     
   int CopyRightYear;
   string BookAuthor;
   string BookTitle;
   
   public: 
   int SetCopyRightYear(int year);
   int GetCopyRightYear();
   
   string SetBookAuthor(string name);
   int GetBookAuthor();
   
   string SetBookTitle(string title);
   int GetBookTitle();
   
};
 int BookInfo::SetCopyRightYear(int year) 
 {
CopyRightYear = year;
   return CopyRightYear;
}

string BookInfo::SetBookAuthor(string name) 
{
BookAuthor = name;
   return BookAuthor;
}

string BookInfo::SetBookTitle(string title) 
{
   BookTitle = title;
   return BookTitle;
}
 
 
 int main() 
 { 
BookInfo Book1;
BookInfo Book2;
BookInfo Book3;
BookInfo Book4;
BookInfo Book5;

Book1.GetCopyRightYear();
Book1.GetBookAuthor();
Book1.GetBookTitle();


 }