#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> numbers;
    double num, result;
    int totalNumbers;

    cout << "Berapa bilangan yang ingin Anda gunakan untuk operasi? ";
    cin >> totalNumbers;

    for (int i = 0; i < totalNumbers; i++) {
        cout << "Masukkan angka ke-" << (i + 1) << ": ";
        cin >> num;
        numbers.push_back(num);
    }

    cout << "Angka yang dimasukkan: ";
    for (double n : numbers) {
        cout << n << " ";
        result += n;
    }
    cout << endl;
    cout << "Hasilnya adalah: " << result;

    return 0;
}
