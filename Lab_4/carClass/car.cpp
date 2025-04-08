#include <iostream>
#include <string>
#include <sstream>
#include <unistd.h>
#include <fstream>
#include "car.h"





Car::Car(string brand, string model, int plateNumber)
{
  Brand = brand;
  Model = model;
  PlateNumber = plateNumber;
}

string Car::getModel()
{  
  return Model;
}  

string Car::getBrand()
{
  return Brand;
}

string Car::getGear()
{
  return Gear;
}

int Car::getPlate()
{
  return PlateNumber;
}

void Car::setGear(string gear)
{
  Gear = gear; 
}


Car::~Car()
{

}


