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
            cout << "Masukkan Angka: ";
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
                        cout << "Error: Bilangan tak terdefinisi!" << endl;
                        return 1;
                    }
                    result /= numbers[i];
                }
                cout << "" << endl;
                cout << thnx;
                break;
            case 5:
                result = (num >= 0) ? sqrt(num) : (cout << "Error: bilangan negatif!" << endl, 0);
                cout << "" << endl;
                cout << thnx;
                break;
            case 6:
                int exp;
                cout << "Masukkan Exponen: ";
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
            default: cout << "Opsi tidak valid!" << endl; 
            return 1;
        }
        cout << "Hasil: " << result << endl;

    }else if (opt1 == 2) {
        cout << "<=== Choose Formula ===>" << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Segitiga" << endl;
        cout << "4. Lingkaran" << endl;
        cout << "5. Jajargenjang" << endl;
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
            case 3:
                int optS;
                double s1, s2, s3;
                double alas, tinggi;
                cout << pil << endl;
                cout << "1. Keliling" << endl;
                cout << "2. Luas" << endl;
                cin >> opt3;
                    if (opt3 == 1) {
                        cout << "Pilih Segitiga" << endl;
                        cout << "1. Segitiga Sama Sisi" << endl;
                        cout << "2. Segitiga Sama Kaki" << endl;
                        cout << "3. Segitiga Sembarang" << endl;
                        cin >> optS;
                        if (optS == 1) {
                            cout << "Masukkan panjang sisi: ";
                            cin >> s1;
                            cout << "Keliling Segitiga tersebut adalah: " << s1 * 3;
                            cout << "" << endl;
                            cout << thnx;
                            break;
                        } else if (optS == 2 && optS == 3) {
                            cout << "Masukkan panjang sisi1: ";
                            cin >> s1;
                            cout << "Masukkan panjang sisi2: ";
                            cin >> s2;
                            cout << "Masukkan panjang sisi3: ";
                            cin >> s3;
                            cout << "Keliling Segitiga tersebut adalah: " << s1 + s2 + s3;
                            cout << "" << endl;
                            cout << thnx;
                            break;
                        } else {
                            cout << "Pilihan tidak sesuai!!";
                        }
                    } else if (opt3 == 2) {
                        cout << "Pilih Segitiga" << endl;
                        cout << "1. Segitiga Sama Sisi" << endl;
                        cout << "2. Segitiga Sama Kaki" << endl;
                        cout << "3. Segitiga Sembarang" << endl;
                        cin >> optS;
                        if (optS == 1 && optS == 2) {
                            cout << "Masukkan Alas: ";
                            cin >> alas;
                            cout << "Masukkan Tinggi: ";
                            cin >> tinggi;
                            cout << "Luas Segitiga tersebut adalah: " << 1/2 * alas * tinggi;
                            cout << "" << endl;
                            cout << thnx;
                            break;
                        } else if (optS == 3) {
                            cout << "Masukkan panjang sisi1: ";
                            cin >> s1;
                            cout << "Masukkan panjang sisi2: ";
                            cin >> s2;
                            cout << "Masukkan panjang sisi3: ";
                            cin >> s3;
                            double s = (s1 + s2 + s3) / 2; 
                            double hasilS = sqrt(s * (s - s1) * (s - s2) * (s - s3));
                            cout << "Luas Segitiga tersebut adalah: " << hasilS;
                            cout << "" << endl;
                            cout << thnx;
                            break;
                        } else {
                            cout << "Pilihan tidak sesuai!!";
                        }
                    }
            case 4: 
                double d;
                double r;
                cout << pil << endl;
                cout << "1. Keliling" << endl;
                cout << "2. Luas" << endl;
                cin >> opt3;
                    if (opt3 == 1) {
                        cout << "Note: beri nilai '-' pada elemen yang tidak digunakan!" << endl;
                        cout << "Masukkan diameter: ";
                        cin >> d;
                        cout << "Masukkan jari-jari: ";
                        cin >> r;
                        r = d/2;
                        cout << "Keliling Lingkaran tersebut adalah: " << 2*pi*r;
                        cout << "" << endl;
                        cout << thnx;
                        break;
                    } else if (opt3 == 2) {
                        cout << "Note: beri nilai '-' pada elemen yang tidak digunakan!" << endl;
                        cout << "Masukkan Jari-jari: ";
                        cin >> r;
                        cout << "Masukkan diameter: ";
                        cin >> d;
                        r = d/2;
                        cout << "Luas Lingkaran tersebut adalah: " << pi*r*r;
                        cout << "" << endl;
                        cout << thnx;
                        break;
                    }
            default: cout << "Maaf kami belum menyediakan fitur yang anda inginkan...";
            return 1;
        }   
    } else {
        cout << "Mohon maaf, data tidak valid...";
    }
    return 0;
}