#include <iostream>
#include <fstream>
#include <string>
#include <ostream>

using namespace std;



int main(int argc, char *argv[])  
{
struct Credentials 
  {
    std::string personName;
    std::string phoneNumber;
  };
  
Credentials credentials[5];
std::ifstream inputFile;

inputFile.open("task1.txt");
if(!inputFile.is_open())
  {
	std::cout << "file cant open" << std::endl;
  }
int i = 0;	
int j = 0;
std::string line;
while(std::getline(inputFile,line))
  {
  if (i/2 == 1)
    {
    credentials[i].phoneNumber = line;
    i++;
    }
  else
    {
    credentials[i].personName = line;
    }
  

  
  }   
  for (int j = 0; j < i; j++)
  {
  std::cout <<  credentials[i].personName << std::endl;
  std::cout <<  credentials[i].phoneNumber << std::endl;
  }
  inputFile.close();
  return 0;
  
}
