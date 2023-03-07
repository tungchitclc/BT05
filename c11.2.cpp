#include <iostream>
#include <math.h>

using namespace std;

int Hebinsangder(int binaryNum) {
    int res = 0, i = 0, rem = 0;
    while (binaryNum != 0) {
        rem = binaryNum % 10;
        binaryNum /= 10;
        res += rem * pow(2, i);
        ++i;
    }
    return res;
}

int main() {
    int a;
    cout << "Nhap so nhi phan can chuyen doi: ";
    cin >> a;
    cout << Hebinsangder(a) << endl;
    return 0;
    }
