#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {

    string pil = "<--- Pilih Salah Satu --->";
    string thnx = "<--=== Terimakasih Telah Menggunakan Program Ini ===-->";
    int opt1, opt2, opt3;
    const double pi = 3.14159265359;
    vector<double> numbers;
    double num, result;

    cout << "<--=== Featured Calculator ===-->" << endl;
    cout << "Apa yang ingin anda lakukan?" << endl;
    cout << "1. Operasi bilangan" << endl;
    cout << "2. Rumus Bangun Datar" << endl;
    cin >> opt1;

    if (opt1 == 1) {
        cout << "Pilih Operasi:" << endl;
        cout << "1. Penjumlahan (+)" << endl;
        cout << "2. Pengurangan (-)" << endl;
        cout << "3. Perkalian (*)" << endl;
        cout << "4. Pembagian (/)" << endl;
        cout << "5. Akar Kuadrat (√)" << endl;
        cout << "6. Pangkat" << endl;
        cout << "7. Sin (sin)" << endl;
        cout << "8. Cos (cos)" << endl;
        cout << "9. Tan (tan)" << endl;
        cin >> opt2;


        if (opt2 >= 1 && opt2 <= 4) {
            cout << "Masukkan angka (ketik '=' untuk melihat hasil): ";
            while (cin >> num && num != '=') {
                numbers.push_back(num);
            }
        } else {
            cout << "Enter a single number: ";
            cin >> num;
        }

        switch (opt2) {
            case 1:
                result = 0;
                for (double n : numbers) result += n;
                cout << "" << endl;
                cout << thnx;
                break;
            case 2:
                result = numbers[0];
                for (size_t i = 1; i < numbers.size(); i++) result -= numbers[i];
                cout << "" << endl;
                cout << thnx;
                break;
            case 3:
                result = 1;
                for (double n : numbers) result *= n;
                cout << "" << endl;
                cout << thnx;
                break;
            case 4:
                result = numbers[0];
                for (size_t i = 1; i < numbers.size(); i++) {
                    if (numbers[i] == 0) {
                        cout << "Error: Division by zero!" << endl;
                        return 1;
                    }
                    result /= numbers[i];
                }
                cout << "" << endl;
                cout << thnx;
                break;
            case 5:
                result = (num >= 0) ? sqrt(num) : (cout << "Error: Cannot calculate square root of negative number!" << endl, 0);
                cout << "" << endl;
                cout << thnx;
                break;
            case 6:
                double exp;
                cout << "Enter exponent: ";
                cin >> exp;
                result = pow(num, exp);
                cout << "" << endl;
                cout << thnx;
                break;
            case 7: 
                result = sin(num * pi / 180); 
                cout << "" << endl;
                cout << thnx;
                break;
            case 8: 
                result = cos(num * pi / 180); 
                cout << "" << endl;
                cout << thnx;
                break;
            case 9: 
                result = tan(num * pi / 180); 
                cout << "" << endl;
                cout << thnx;
                break;
            default: cout << "Invalid option!" << endl; 
            return 1;
        }

        cout << "Result: " << result << endl;
    }else if (opt1 == 2) {
        cout << "<=== Choose Formula ===>" << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Segitiga" << endl;
        cout << "4. Jajargenjang" << endl;
        cout << "5. Lingkaran" << endl;
        cout << "6. Layang-Layang" << endl;
        cout << "7. Trapesium" << endl;
        cout << "8. Belah Ketupat" << endl;
        cin >> opt2;

        switch (opt2) {
            case 1:
                double s;
                cout << pil << endl;
                cout << "1. Keliling" << endl;
                cout << "2. Luas" << endl;
                cin >> opt3;
                    if (opt3 == 1) {
                        cout << "masukkan sisi: ";
                        cin >> s;
                        cout << "Keliling Persegi tersebut adalah: " << s * 4;
                        cout << "" << endl;
                        cout << thnx;
                        break;
                    } else if (opt3 == 2) {
                        cout << "masukkan sisi: ";
                        cin >> s;
                        cout << "Luas Persegi tersebut adalah: " << s * s;
                        cout << "" << endl;
                        cout << thnx;
                        break;
                    }
            case 2: 
                double panjang, lebar;
                cout << pil << endl;
                cout << "1. Keliling" << endl;
                cout << "2. Luas" << endl;
                cin >> opt3;
                    if (opt3 == 1) {
                        cout << "Masukkan panjang: ";
                        cin >> panjang;
                        cout << "Masukkan lebar: ";
                        cin >> lebar;
                        cout << "Keliling Persegi Panjang tersebut adalah: " << 2*(panjang + lebar);
                        cout << "" << endl;
                        cout << thnx;
                        break;
                    } else if (opt3 == 2) {
                        cout << "Masukkan panjang: ";
                        cin >> panjang;
                        cout << "Masukkan lebar: ";
                        cin >> lebar;
                        cout << "Luas Persegi Panjang tersebut adalah: " << panjang * lebar;
                        cout << "" << endl;
                        cout << thnx;
                        break;
                    }


        }
    }
    return 0;
}
