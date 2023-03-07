#include <iostream>
using namespace std;

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char b[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    cout << "Dia chi 3 phan tu lien tiep cua mang a: ";
    for(int i=0; i<=7; i++){
        cout << &a[i] << ", ";
    }
    cout << endl;


    cout << "Dia chi 3 phan tu lien tiep cua mang b: ";
    for(int i=0; i<=7; i++){
        cout << (void*)&b[i] << ", ";
    }
    cout << endl;

    // Nhận xét: các địa chỉ được in ra đều cách nhau chính xác 4 byte với kiểu int và 1 byte với kiểu char.

    return 0;
}

