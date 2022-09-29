#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int selection (int day, int month);
int Monthss (string input, int month);
int days(int day);

int main()
{
  
int month;
int day; 
int People;
string input;
cin >> People;


  
for (int i = 0; i < People; i++)
  {
  input = Monthss (input, month);
  cout << endl;
  day = days(day);
  cout << endl;
    
  selection(day, month);
  }
}




///////////////////////////////////
       // Enter Day function
///////////////////////////////////
int days(int day)
{
cout <<"Enter your day" << endl;
cin >> day;
cout <<"You entered " << day << endl;
return day;
}


///////////////////////////////////
        //Enter Month function
///////////////////////////////////
int Monthss (string input, int month)
{
cout << "Enter your month" << endl;
  cin >> input;
  
if (input == "Jan"){
  month = 1;
  }
  else if (input == "Feb"){
  month = 2;
  }
  else if (input == "Mar"){
  month = 3;
  }    
  else if (input == "Apr"){
    month =4;
  }
  else if (input == "May"){
    month =5;
  }
  else if (input == "Jun"){
    month =6;
  }
  else if (input == "Jul"){
    month =7;
  }
  else if (input == "Aug"){
    month =8;
  }
  else if (input == "Sep"){
    month =9;
  }
  else if (input == "Oct"){
    month =10;
  }
  else if (input == "Nov"){
    month =11;
  }
  else if (input == "Dec"){
    month =12;
  }
  cout << "responded with " << month <<endl;
  return month;
}






/////////////////////////////////////////////////
            //Switch function
/////////////////////////////////////////////////
int selection (int &day, int &month)
{
switch (month)
{
  case 1:
  if ((day < 21) && (month = 1))
  cout << "Capricorn" << endl;
  else
  cout << "Aqurious" << endl;
  break;

  case 2:
  if ((day < 20) && (month = 2))
  cout << "Aqurious" << endl;
  else
  cout << "Pisces" << endl; 
  break;

  case 3:
  if ((day < 21) && (month = 3))
  cout << "Pisces" << endl;
  else
  cout << "Aries" << endl;
  break;

  case 4:
  if ((day < 21) && (month = 4))
  cout << "Aries" << endl;
  else
  cout << "Taurus" << endl;
  break;

  case 5:
  if ((day < 21) && (month = 5))
  cout << "Taurus" << endl;
  else
  cout << "Gemini" << endl;
  break;

  case 6:
  if ((day < 22) && (month = 6))
  cout << "Gemini" << endl;
  else
  cout << "Cancer" << endl;
  break;

  case 7:
  if ((day < 23) && (month = 7))
  cout << "Cancer" << endl;
  else
  cout << "Leo" << endl;
  break;
  
  case 8:
  if ((day < 23) && (month = 8))
  cout << "Leo" << endl;
  else
  cout << "Virgo" << endl;
  break;

  case 9:
  if ((day < 22) && (month = 9))
  cout << "Virgo" << endl;
  else
  cout << "Libra" << endl;
  break;

  case 10:
  if ((day < 23) && (month = 10))
  cout << "Libra" << endl;
  else
  cout << "Scorpio" << endl;
  break;

  case 11:
  if ((day < 23) && (month = 11))
  cout << "Scorpio" << endl;
  else
  cout << "Sagittarious" << endl;
  break;

  case 12:
  if ((day < 22) && (month = 12))
  cout << "Sagitarious" << endl;
  else
  cout << "Capricorn" << endl;
  break;
  
  
}
return month;
}


/*
if (input == "Jan"){
  month = 1;
  }
  else if (input == "Feb"){
  month = 2;
  }
  else if (input == "Mar"){
  month = 3;
  }    
  else if (input == "Apr"){
    month =4;
  }
  else if (input == "May"){
    month =5;
  }
  else if (input == "Jun"){
    month =6;
  }
  else if (input == "Jul"){
    month =7;
  }
  else if (input == "Aug"){
    month =8;
  }
  else if (input == "Sep"){
    month =9;
  }
  else if (input == "Oct"){
    month =10;
  }
  else if (input == "Nov"){
    month =11;
  }
  else if (input == "Dec"){
    month =12;
  }
*/