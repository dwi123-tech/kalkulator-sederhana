#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double num1, num2;
    int opt;
    double pi = 3.14159265358979;

    
while(true) 
{
    
    cout << "<--===KALKULATOR SEDERHANA===-->" << endl;
    cout << "Silakan masukkan operasi yang anda inginkan!" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Pangkat Kuadrat" << endl;
    cout << "6. Akar Kuadrat" << endl;
    cout << "7. sinus" << endl;
    cout << "8. cosinus" << endl;
    cout << "9. tangen" << endl;
    cout << "10. keluar" << endl;
    
    cout<<"gunakan nomor untuk memilih: ";
    cin >> opt;

    if (opt >= 7 && opt <= 9) {
        cout << "Masukkan angka sudut dalam derajat: ";
        cin >> num1;
        double radian = num1*(pi/180.0);

        switch (opt) { 
            case 7 : 
                cout << "sin(" << num1 << "°) = " << sin(radian) << endl; 
                break;
            case 8 :
                cout << "cos(" << num1 << "°) = " << cos(radian) << endl;
                break;
            case 9 :
                if (num1 == 0) {
                    cout << "tan tidak terdefinisikan";
                }else {
                cout << "tan(" << num1 << "°) = " << tan(radian) << endl; 
                }
                break;
        }    
    }

    if (opt == 6) {
        cout << "Masukkan angka: ";
        cin >> num1;
    } else if (opt != 10) {
        cout << "Masukkan angka pertama: ";
        cin >> num1;
        cout << "Masukkan angka kedua: ";
        cin >> num2;
    } else if (opt == 10) {
        cout<<"<--===TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM INI===-->";
        break;
    }


    switch (opt) {
        case 1:
            cout << "Hasil: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Hasil: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Hasil: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Hasil: " << num1 / num2 << endl;
            } else {
                cout << "maaf hasil tak dapat didefinisikan..." << endl;
            }
            break;
        case 5:
            cout << "Hasil: " << pow(num1, num2) << endl;
            break;
        case 6:
            if (num1 >= 0) {
                cout << "Hasil: " << sqrt(num1) << endl;
            } else {
                cout << "Error: maaf tidak dapat diproses" << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid!!" << endl;
    }
}
    return 0;
}
 