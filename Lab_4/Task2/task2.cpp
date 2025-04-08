#include <iostream>
#include <fstream>
#include <string>
#include <ostream>
#include <cstring>
#include <sstream>

using namespace std;



int main(int argc, char *argv[])  
{
struct Credentials 
  {
    std::string personName;
    std::string phoneNumber;
    std::string lastName;
  };
  
Credentials credentials[10];
std::ifstream inputFile;

inputFile.open("task2.txt");
if(!inputFile.is_open())
  {
	std::cout << "file cant open" << std::endl;
  }

int i = 0;
char delim[] = " ";
std::string line;


while(std::getline(inputFile,line))
  {
  std::stringstream ss(line);
  ss >> credentials[i].personName >> credentials[i].lastName >> credentials[i].phoneNumber;  
  i++;
  } 
  
for(int j = 0; j < i; j++)
  {
  std::cout << credentials[j].personName << " " << credentials[j].lastName << std::endl;
  std::cout << credentials[j].phoneNumber << std::endl;
  } 
  
     
//
  inputFile.close();
  return 0;
  
}
