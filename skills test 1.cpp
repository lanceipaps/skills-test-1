#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  double income, hours;
  cout << "Enter Income per hour: ";
  cin >> income;
  cout << income <<" Dollars" << endl;
  
  cout << "Enter working hours: ";
  cin >> hours;
  cout << hours <<" hours" << endl;
  
  cout << "Total income: " << income*hours <<" Dollars" << endl;
  cout << "Net income: " << (income*hours)-(income*hours)*(.14) <<" Dollars" << endl;
  cout <<"Money you spend on clothes and other accessories: " << ((income*hours)-(income*hours)*(.14))*0.1 <<" Dollars"<< endl;
  cout <<"Money you spend on school supplies: " << ((income*hours)-(income*hours)*(.14))*0.01 <<" Dollars"<< endl;
  cout <<"Money you spend on savings bonds: " << ((income*hours)-(income*hours)*(.14))*0.25 <<" Dollars"<< endl;
  cout <<"Money your parents spend to buy additional saving bonds for you: " << (((income*hours)-(income*hours)*(.14)-((income*hours)-(income*hours)*(.14))*0.1-(income*hours)-(income*hours)*(.14))*0.25)*-0.5 <<" Dollars"<< endl;

  
  _getch();
return 0;
}