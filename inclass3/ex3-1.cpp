#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main() {
  vector<int> output;
  string a, b;
  cout << "Enter numerator: (an integer > 0)" << endl;
  cin >> a;
  cout << "Enter denominator: (an interger > 0)" << endl;
  cin >> b;
  int num = atoi(a.c_str());
  int dnm = atoi(b.c_str());
  if (num == 0 || dnm == 0){
    if(a == "0" || b == "0") {
      cout << "Any Zero is NOT accept!!!" << endl;
      return 0;
    }
    else {
      cout << "Value Error!!!" << endl;
      return 0;
    }
  }
  else if(num < 0 || dnm < 0) {
    cout << "Please check the input to be positive!" << endl;
    return 0;
  }
  else if(a.find(".") != a.npos || b.find(".") != b.npos) {
    cout << "Value Error!!!" << endl;
  }
  cout << "numerator n, denominator d = " << num << ", " << dnm << endl;

  while(dnm != 0) {
    int q = num / dnm;
    int r = num % dnm;
    num = dnm;
    dnm = r;
    output.push_back(q);
  }
  cout << "Continued fraction : [";
  for (int i=0; i<output.size(); ++i) {
    if(i == output.size()-1) cout << output[i] << ']' << endl;
    else cout << output[i] << ' ';
  }
  return 0;
}