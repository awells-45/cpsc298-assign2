#include <iostream>

using namespace std;

int main(int argc, char **argv){
  int numberArray[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1}; // initializing the array values to -1 so that only the values added by the command line parameters (nonnegative) will be printed

  if(argc > 10){ // making sure that the for loop below doesn't reach out of bounds of the array
    argc = 10;
  }

  for(int i = 1; i < argc; ++i){ // interating through the inputs to add to the array
    int inputNum = atoi(argv[i]);
    if(inputNum >= 0){   // only allowing the input to go into the array if nonnegative
      numberArray[(i - 1)] = inputNum;
    }
  }

  for(int i = 0; i < 10; ++i){    // interating through the array and printing to the console
    if (numberArray[i] >= 0){     // only printing the array values added by the user (nonnegative)
      cout << numberArray[i] << endl;
    }
  }

  return 0;
}
