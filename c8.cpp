#include <iostream>
#include <math.h>
using namespace std;

int lamTron(double num) { // Ý 1: Sử dụng hàm ceil/floor
   int num_int = (int)num;
   if(num - num_int < 0.5)
      return floor(num);
   else
      return ceil(num);
}

int rnd(double x) { // Ý 2: Không sử dụng hàm ceil/floor
    return round(x);
}


int main() {
   double num;
   cin >> num;
   cout << rnd(num) << endl;
   return 0;
}
