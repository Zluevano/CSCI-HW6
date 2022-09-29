#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int selection (int day, char month);
//int selection(char Jan, char Feb, char Mar, char Apr, char May, char June, char July, char Aug, char Sep, char Oct, char Nov, char Dec);


int main()
{
  
int People;
char Jan = 1;
char Feb = 2;
char Mar = 3;
char Apr = 4;
char May = 5;
char June = 6;
char July = 7;
char Aug = 8;
char Sep = 9;
char Oct = 10;
char Nov = 11;
char Dec = 12;

int month;
int day;
  
cin >> People;

  
for (int i = 0; i < People; i++)
  {
//  char month;
    
  cout << "Enter your month" << endl;
  cin >> month;
  cout << endl;
  cout << "Enter your Day" << endl;
  cin >> day;
  cout << endl;

  selection(day, month); 

//cout << result;
  }
}


///////// Variable
int selection (int day, char month)
{
char Result;
char Jan = 1;
char Feb = 2;
char Mar = 3;
char Apr = 4;
char May = 5;
char June = 6;
char July = 7;
char Aug = 8;
char Sep = 9;
char Oct = 10;
char Nov = 11;
char Dec = 12;
  
//char month;  
//int day;
  
switch (month)
{
  case 0:
  case 1:
  if ((day < 22) && (month = 12))
  cout << "Sagitarious" << endl;
  else
  cout << "Capricorn" << endl;
  break;
  
  case 2:
  if ((day < 20) && (month = 1))
  cout << "Capricorn" << endl;
  else
  cout << "Aqurious" << endl;
  break;

  case 3:
  if ((day < 19) && (month = 2))
  cout << "Aqurious" << endl;
  else
  cout << "Pisces" << endl; 
  break;

  case 4:
  if ((day < 21) && (month = 3))
  cout << "Pisces" << endl;
  else
  cout << "Aries" << endl;
  break;

  case 5:
  if ((day < 20) && (month = 4))
  cout << "Aries" << endl;
  else
  cout << "Taurus" << endl;
  break;

  case 6:
  if ((day < 21) && (month = 5))
  cout << "Taurus" << endl;
  else
  cout << "Gemini" << endl;
  break;

  case 7:
  if ((day < 21) && (month = 6))
  cout << "Gemini" << endl;
  else
  cout << "Cancer" << endl;
  break;

  case 8:
  if ((day < 23) && (month = 7))
  cout << "Cancer" << endl;
  else
  cout << "Leo" << endl;
  break;
  
  case 9:
  if ((day < 23) && (month = 8))
  cout << "Leo" << endl;
  else
  cout << "Virgo" << endl;
  break;

  case 10:
  if ((day < 23) && (month = 9))
  cout << "Virgo" << endl;
  else
  cout << "Libra" << endl;
  break;

  case 11:
  if ((day < 23) && (month = 10))
  cout << "Libra" << endl;
  else
  cout << "Scorpio" << endl;
  break;

  case 12:
  if ((day < 22) && (month = 11))
  cout << "Scorpio" << endl;
  else
  cout << "Sagittarious" << endl;
  break;
  
  
  
}
return Result;
}
