#include <string>

#include <iostream>

using namespace std;
class Car {

  private:
  string Brand;
  string Model;
  int PlateNumber;
  string Gear;
  public: 
  //getters
  Car(string brand, string model, int plateNumber);
  string getBrand();
  string getModel();
  string getGear();
  int getPlate();
  
  //setters
  void setGear(string gear);
  
  //destructor
  ~Car();
};
