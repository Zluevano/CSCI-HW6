#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;


////////////////
int takeInt(double x);
double takeDouble(double x);
void check (int num1, double num2, double num3);
////////////////
int main()
{
char choice;
double input;
int User;
bool ValidPick = false;
double x;

cout << "Please enter an integer or a double number:" << endl;
cin >> input;

  cout << "Enter A for a integer, B or C for a double." << endl;
  cin >> choice;

if (choice == 'A')
  cout << takeInt(input) << endl;
else if ((choice == 'B') || (choice == 'C'))
  cout << takeDouble(input) << endl;
  }
  




//////////
void check (int num1, double num2, double num3)
{

  
}

//////////
int takeInt(double x)
{
x = static_cast<int>(x);
return x;
}
//////////
double takeDouble(double x)
{
x = static_cast<double>(x);
return x;
  
}

////////////////
/*
double check (double x, char selection)
{
char S;
switch (S)
  {
    case (0):
    case (1):
      S = static_cast<int>(x);
      break;
    
    case (2):
      S = static_cast<double>(x);
      break;
    
    case (3):
      S = static_cast<double>(x);
      break;
    }
return x;
  } 
*/