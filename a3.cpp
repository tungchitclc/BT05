#include <iostream>

using namespace std;

// Ham truyen tham tri
void passByValue(int x) {
    cout << "Dia chi cua x trong passByValue: " << &x << endl;
}

// Ham truyen tham chieu
void passByReference(int& x) {
    cout << "Dia chi cua x trong passByReference: " << &x << endl;
}

int main() {
    int num;
    cin >> num;
    cout << "Dia chi cua num trong main: " << &num << endl;
    passByValue(num);
    passByReference(num);

    return 0;
}

// Cau tra loi: Khi truyền tham trị, đối số và tham trị là hai biến độc lập có địa chỉ khác nhau, còn khi truyền tham biến, đối số và tham biến chính là một biến.
