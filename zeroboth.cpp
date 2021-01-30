// This program contains a function to set two integers to zero

#include <iostream>

using namespace std;

void zeroBoth(int& num1, int& num2){
  num1 = 0;
  num2 = 0;
}

int main(int argc, char **argv){

  int testNum1 = 5;   // testing the function
  int testNum2 = -88;
  zeroBoth(testNum1, testNum2);
  cout << testNum1 << endl;
  cout << testNum2 << endl;

  return 0;
}
