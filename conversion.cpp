// This program takes input from the user of a length in feet + inches, then converts and prints the total length in both meters and centimeters, then loops this until the user types "exit"

#include <iostream>

using namespace std;

int inputLength(float& lengthFeet, float& lengthInches){  // function to take input from the user
  string userEntry = "0.0";
  cout << "Type exit to quit or enter the amount of feet:" << endl;
  cin >> userEntry;
  if (userEntry == "exit"){   // return -1 so that an if statement later can check to quit the program
    return -1;
  }
  lengthFeet = stof(userEntry);
  cout << "Enter the amount of inches:" << endl;
  cin >> userEntry;
  lengthInches = stof(userEntry);
  return 0;
}

void calcMetricLength(float& lengthFeet, float& lengthInches){ // function to convert feet and inches into meters and centimeters
  lengthFeet = lengthFeet + (lengthInches / 12); // converting the entire length to feet for easier conversion
  float lengthMeters = 0.3048 * lengthFeet;
  float lengthCentimeters = 100 * lengthMeters;
  lengthFeet = lengthMeters;
  lengthInches = lengthCentimeters;
}

void printLengthInfo(float lengthMeters, float lengthCentimeters){ // this function prints the info about the new lengths to the console
  cout << "The converted metric length:" << endl;
  cout << "Total length in Meters: " << lengthMeters << endl;
  cout << "Total length in Centimeters: " << lengthCentimeters << endl;
}

void conversionLoop(){ // this function creates a loop that calls the functions to take in input, print the new lengths, and quit when "exit" is typed
  while(true){
    int quitStatus;
    float longLength;
    float shortLength;
    quitStatus = inputLength(longLength, shortLength);
    if (quitStatus == -1){  // checking whether to exit the program
      break;
    }
    calcMetricLength(longLength, shortLength);
    printLengthInfo(longLength, shortLength);
  }
}

int main(int argc, char **argv){
  conversionLoop();
  return 0;
}
