#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
  double x=0, y=0, piEstimate=0;
  int nIN=0;
  int N;
  cin >> N;
  for (int i=0; i<N; ++i) {

    x = (double)rand()/(double)RAND_MAX;
    y = (double)rand()/(double)RAND_MAX;
    
    if (x*x + y*y <= 1.0)  ++nIN;
  }

  piEstimate = 4*(double)nIN/(double)N;
  cout << piEstimate << endl;

}