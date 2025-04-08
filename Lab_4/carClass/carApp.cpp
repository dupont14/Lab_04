#include <iostream>
#include <string> 
#include <sstream>

#include "car.h" 

using namespace std;

int main()
{
  //makes
  string make1 = "Ford";
  string make2 = "Lamborghini";
  string make3 = "Ferrari";
  string make4 = "Fiat";
  string make5 = "Honda";
  
  //models
  string model1 = "Bronco";
  string model2 = "LM002";
  string model3 = "Enzo";
  string model4 = "Panda";
  string model5 = "Civic";
  
  
  Car Car1(make1, model1, 567408);
  Car Car2(make2, model2, 889098);
  Car Car3(make3, model3, 555008);
  Car Car4(make4, model4, 569968);
  Car Car5(make5, model5, 555788);
  
  cout << "Brand: "<< Car1.getBrand() << " " << "Model: " << Car1.getModel()  << " " <<  "Plate: "<< Car1.getPlate() <<endl;
  
  cout << "Brand: "<< Car2.getBrand() << " " << "Model: " << Car2.getModel()  << " " <<  "Plate: " << Car2.getPlate() <<endl;
  
  cout << "Brand: "<< Car3.getBrand() << " " << "Model: " << Car3.getModel()  << " " <<  "Plate: "<< Car3.getPlate() <<endl;
  
  cout << "Brand: "<< Car4.getBrand() << " " << "Model: " << Car4.getModel()  << " " <<  "Plate: "<< Car4.getPlate() <<endl;
  
  cout << "Brand: "<< Car5.getBrand() << " " << "Model: " << Car5.getModel()  << " " <<  "Plate: "<< Car5.getPlate() <<endl;
}

