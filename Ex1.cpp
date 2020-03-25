#include <iostream>
using namespace std;

int main() {
  int i, j, k = 1, count = 100;
  float n = 0, perc;

  for (i = 1; i <= 4; i++) {
    for (j = 1; j <= count; j++) {
      if (j%25 == 0) n++;
    }
    
    perc = (n/count) * 100;
    count *= 10;
    n = 0;

    cout << "Percentage of winning No." << i << ": " << perc << " %" << endl;
  }
}