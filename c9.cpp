#include<iostream>
#include <math.h>
#include <ctime>

using namespace std;

int random_number(int N) {
    srand(time(nullptr)); // khởi tạo bộ sinh số ngẫu nhiên
    return rand() % N; // trả về một số ngẫu nhiên nhỏ hơn N
}


int main()
{
    int N;
    cin >> N;
    cout << random_number(N);
    return 0;
}
