// This program calculates the cost of an item given the base cost and tax percentage

#include <iostream>

using namespace std;

float addTax(float taxRate, float cost){
  float taxAmount = (taxRate / 100) * cost; // calculating the tax amount
  cost = taxAmount + cost; // adding tax to base cost for net cost
  return cost;
}

int main(int argc, char **argv){

  float testTaxPercent = 8.5;   // testing the function
  float testCost = 12.50;
  cout << addTax(testTaxPercent, testCost) << endl;

  return 0;
}
