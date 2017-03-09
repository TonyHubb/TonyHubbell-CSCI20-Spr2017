//Created By: Tony Hubbell
 //Created On: 3/9/2017
 //This program will run the Temperature Converter Class
#include <iostream> 
#include <cstdlib>
#include <string>
 using namespace std; 
 
 
 class TemperatureConverter {
    public:
    TemperatureConverter() {
        Kelvin_ = 0;
    }
    TemperatureConverter(double k) {
        Kelvin_ = k;
    }
    void SetTempFromKelvin(double k) {
        Kelvin_ = k;
    }
    double GetTempFromKelvin() {
        return Kelvin_;
    }
    void SetTempFromCelsius(double c) {
        Kelvin_ = c;
        Kelvin_ = c + 273.15;
    }
    double GetTempFromCelsius() {
        return Kelvin_;
    }
    void SetTempAsCelsius(double k) {
         Kelvin_ = k;
       Kelvin_ = k - 273.15;
    }
    double GetTempAsCelsius() {
        return Kelvin_;
    }
    void SetTempFromFahrenheit(double F) {
        Kelvin_ = F;
        Kelvin_ = (5 * (F -32)/9) + 273.15;
    }
    double GetTempFromFahrenheit() {
        return Kelvin_;
    }
    void SetTempAsFahrenheit(double c) {
        Kelvin_ = c;
       Kelvin_ = ((c * 9) / 5 + 32);
    }
    double GetTempAsFahrenheit() {
        return Kelvin_;
    }
    void PrintTemperatures() {
       GetTempFromKelvin();
        GetTempFromCelsius();
       GetTempFromFahrenheit();
    }
    private:
    double Kelvin_;
 
 };
 int main() 
 { 
  TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;

 }