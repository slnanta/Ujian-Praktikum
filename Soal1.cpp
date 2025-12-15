#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "Masukan bilangan : ";
    cin >> bilangan;

    if (bilangan % 2 == 0) {
        cout << "Genap" << endl;
    }
    else {
        cout << "Ganjil" << endl;
    }

    if (bilangan > 10) {
        cout << "di atas 10";
    }
    else {
        cout << "di bawah 10";
    }

    return 0;
}
