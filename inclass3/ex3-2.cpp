#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main() {
  cout << "Enter 0 to stop input" << endl;
  vector<int> fracAry;
  string input;
  while(1) {
    cin >> input;
    if(input == "0") break;
    int a = atoi(input.c_str());
    if(input.find(".") != input.npos || a == 0) {
      cout << "Check your input value !" << endl;
    }
    else if ( a < 0) {
      cout << "Check your input to be positive !" << endl;
    }
    else {
      fracAry.push_back(a);
    }
  }
  
  int n = fracAry.size();
  int dnm = fracAry[n-1], r = 1;
  for (int i=n-2; i>-1; --i) {
    fracAry[i] = fracAry[i+1] * fracAry[i] + r;
    r = fracAry[i+1];
  }
  cout << "The numerator is : " << fracAry[0] <<endl;
  cout << "The denominator is : "<< fracAry[1] << endl;


  return 0;
}