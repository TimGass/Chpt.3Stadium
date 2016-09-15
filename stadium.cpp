/*
 *Program Description:A program that will calculates the total
 *Source Code:stadium.cpp
 *Programmer:Timothy A. Gass
 *Date:09/15/16
*/

#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
  const int CLASSACOST = 15;
  const int CLASSBCOST = 12;
  const int CLASSCCOST = 9;
  double income;

  int classASold, classBSold, classCSold;

  cout << "Enter ticket sales--> (A B C) " << endl;
  cin >> classASold >> classBSold >> classCSold;
  income = CLASSACOST * classASold + CLASSBCOST * classBSold
  + CLASSCCOST * classCSold;
  cout << fixed << setprecision(2);
  cout << "income for stadium: $" << income << endl;
  cout << "Press enter to exit." << endl;
  cin.get();
  cin.get();
  return 0;
}
