#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


////////////////
void check (int num1, double num2, double num3);

double AbsFunt (double x);

double mult (double num4, double num5);

int SqrIt (int num6);
////////////////
int main()
{
int num1;
double num2, num3;
double num4, num5;
double num6, num7;
cin >> num1 >> num2 >> num3;
  
check (num1, num2, num3);

cout << endl;
  
cout << "Abs Function with precision 2" << endl;
cout << setprecision(2) << fixed << AbsFunt(num2) << endl << setprecision(4) << fixed;

  
cout << endl;
  
cout << "Now testing variable mult, Enter num 4 and num 5: " << endl;
cin >> num4 >> num5;
mult (num4, num5);

cout << endl;
  
cout << "Now testing variable SqrIt, enter num 6: "<< endl;
cin >> num6;
SqrIt (num6);
  
}

//Repeat Function
void check (int num1, double num2, double num3)
{
cout << "The value of integer 1 is " << num1 << endl;
cout << "The value of double 2 is " << num2 << endl;
cout << "The value of double 3 is " << num3 << endl;
}

// Absolute Function
double AbsFunt (double x)
{
 if (x <= 0)
  x = -x;
 else
   x = x;
return static_cast<double>(x);
}

// Multiply Function
double mult (double num4, double num5)
{
double mult;
cout << setprecision(4) << fixed;
cout << "floating point of num 4 is " << num4 << endl;
cout << "floating point of num 5 is " << num5 << endl;
cout << endl;
cout << "The multiplication of these two is " << num4 * num5 << endl;
return mult;
}

//Square integer function
int SqrIt (int num6)
{
int SqrIt;
cout << "The int of num 6 is " << num6 << endl;
cout << "The squared of the int is " << num6 * num6 << endl;
return SqrIt;
}