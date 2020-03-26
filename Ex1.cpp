#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  int i, j, k = 1, count = 100, numb1, numb2;
  float n = 0, perc;

  srand((unsigned) time(0));
  
  for (i = 1; i <= 4; i++) {
    for (j = 1; j <= count; j++) {
      numb1 = (rand() % 6) + 1;
      numb2 = (rand() % 6) + 1;
      if (numb1 == 6 && numb2 == 6) n++;
    }
    
    perc = (n/count) * 100;
    count *= 10;
    n = 0;

    cout << "Percentage of winning No." << i << ": " << perc << " %" << endl;
  }
}