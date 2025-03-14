#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {

    string pil = "\n <--- Pilih Salah Satu --->";
    string thnx = "<--=== Terimakasih Telah Menggunakan Program Ini ===--> \n";
    int opt1, opt2, opt3, pilbil;
    const double pi = 3.14159265359;
    vector<double> numbers;
    double num, result;
    
    while (true) {

    cout << "<--=== Featured Calculator ===-->" << endl;
    cout << "Apa yang ingin anda lakukan?" << endl;
    cout << "1. Operasi bilangan" << endl;
    cout << "2. Rumus Bangun Datar" << endl;
    cout << "3. Keluar" << endl;
    cin >> opt1;

    if (opt1 == 3) {
        break;
    }

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
        cout << "10. Kembali (<--)" << endl;
        cin >> opt2;

        if (opt2 == 10) {
            continue;
        }


        switch (opt2) {
            case 1:
                cout << "<=-- Anda Memilih Penjumlahan --=>" << endl;
                break;
            case 2:
                cout << "<=-- Anda Memilih Pengurangan --=>" << endl;
                break;
            case 3:
                cout << "<=-- Anda Memilih Perkalian --=>" << endl;
                break;
            case 4:
                cout << "<=-- Anda Memilih Pembagian --=>" << endl;
                break;
            case 5:
                cout << "<=-- Anda Memilih Akar Kuadrat --=>" << endl;
                break;
            case 6:
                cout << "<=-- Anda Memilih Exponen --=>" << endl;
                break;
            case 7:
                cout << "<=-- Anda Memilih Sin Trigonometri --=>" << endl;
                break;
            case 8:
                cout << "<=-- Anda Memilih Cos Trigonometri --=>" << endl;
                break;
            case 9:
                cout << "<=-- Anda Memilih Tan Trigonometri --=>" << endl;
                break;
            default:
                cout << "Error: Fitur belum ditemukan";
        }

        if (opt2 >= 1 && opt2 <= 4) {
            cout << "Berapa bilangan yang ingin anda gunakan untuk operasi? ";
            cin >> pilbil;        
            for(int i = 0; i < pilbil; i++) {
                cout << "Masukkan angka ke " << (i+1) << ": ";
                cin >> num;
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
                break;
            case 2:
                result = numbers[0];
                for (size_t i = 1; i < numbers.size(); i++) result -= numbers[i];
                break;
            case 3:
                result = 1;
                for (double n : numbers) result *= n;
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
                break;
            case 5:
                result = (num >= 0) ? sqrt(num) : (cout << "Error: bilangan negatif!" << endl, 0);
                break;
            case 6:
                int exp;
                cout << "Masukkan Exponen: ";
                cin >> exp;
                result = pow(num, exp);
                break;
            case 7: 
                result = sin(num * pi / 180); 
                break;
            case 8: 
                result = cos(num * pi / 180); 
                break;
            case 9: 
                result = tan(num * pi / 180); 
                break;
            default: cout << "Opsi tidak valid!" << endl; 
            return 1;
        }
        cout << "Hasilnya adalah: " << result << endl;

    }else if (opt1 == 2) {
        cout << "<=== Pilih Bangun Datar ===>" << endl;
        cout << "1. Persegi" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Segitiga" << endl;
        cout << "4. Lingkaran" << endl;
        cout << "5. Jajargenjang" << endl;
        cout << "6. Layang-Layang" << endl;
        cout << "7. Trapesium" << endl;
        cout << "8. Belah Ketupat" << endl;
        cout << "9. Kembali" << endl;
        cin >> opt2;

        
        if (opt2 == 9) {
            continue;
        }
        switch (opt2) {
            double p1, p2, p3, p4, d1, d2;
            double b, p, l, d, r, s1, s2, s3, s4, a, t;
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
                cout << pil << endl;
                cout << "1. Keliling" << endl;
                cout << "2. Luas" << endl;
                cin >> opt3;
                    if (opt3 == 1) {
                        cout << "Masukkan panjang: ";
                        cin >> p;
                        cout << "Masukkan lebar: ";
                        cin >> l;
                        cout << "Keliling Persegi Panjang tersebut adalah: " << 2*(p + l);
                        cout << endl;
                        cout << thnx;
                        break;
                    } else if (opt3 == 2) {
                        cout << "Masukkan panjang: ";
                        cin >> p;
                        cout << "Masukkan lebar: ";
                        cin >> l;
                        cout << "Luas Persegi Panjang tersebut adalah: " << p*l;
                        cout << endl;
                        cout << thnx;
                        break;
                    }
            case 3:
                int optS;
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
                            cin >> a;
                            cout << "Masukkan Tinggi: ";
                            cin >> t;
                            cout << "Luas Segitiga tersebut adalah: " << 1/2 * a * t;
                            cout << endl;
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
                        cout << endl;
                        cout << thnx;
                        break;
                    } else if (opt3 == 2) {
                        cout << "Note: beri nilai '-' pada elemen yang tidak digunakan!" << endl;
                        cout << "Masukkan diameter: ";
                        cin >> d;
                        cout << "Masukkan jari-jari: ";
                        cin >> r;
                        r = d/2;
                        cout << "Luas Lingkaran tersebut adalah: " << pi*r*r;
                        cout << endl;
                        cout << thnx;
                        break;
                    }
            case 5:
                cout << pil << endl;
                cout << "1. Keliling" << endl;
                cout << "2. Luas" << endl;
                cin >> opt3;
                    if (opt3 == 1) {
                        cout << "Masukkan panjang: ";
                        cin >> p;
                        cout << "Masukkan lebar";
                        cin >> l;
                        cout << "Keliling Jajargenjang tersebut adalah: " << 2*(p+l);
                        cout << endl;
                        cout << thnx;
                        break;
                    } else if (opt3 == 2) {
                        cout << "Masukkan panjang: ";
                        cin >> p;
                        cout << "Masukkan lebar";
                        cin >> l;
                        cout << "Luas Jajargenjang tersebut adalah: " << p*l;
                        cout << endl;
                        cout << thnx;
                        break;
                    }
            case 6:
                cout << pil << endl;
                cout << "1. Keliling" << endl;
                cout << "2. Luas" << endl;
                cin >> opt3;
                    if (opt3 == 1) {
                        cout << "Masukkan sisi 1: ";
                        cin >> p1;
                        cout << "Masukkan sisi 2: ";
                        cin >> p2;
                        cout << "Masukkan sisi 3: ";
                        cin >> p3;
                        cout << "Masukkan sisi 4: ";
                        cin >> p4;
                        cout << "Keliling Layang-Layang tersebut adalah: " << p1+p2+p3+p4;
                        cout << endl;
                        cout << thnx;
                        break;
                    } else if (opt3 == 2) {
                        cout << "Masukkan diagonal 1: ";
                        cin >> d1;
                        cout << "Masukkan diagonal 2:";
                        cin >> d2;
                        cout << "Luas Layang-Layang tersebut adalah: " << 0.5*d1*d2;
                        cout << endl;
                        cout << thnx;
                        break;
                    }
            case 7:
                cout << pil << endl;
                cout << "1. Keliling" << endl;
                cout << "2. Luas" << endl;
                cin >> opt3;
                    if (opt3 == 1 ) {
                        cout << "Masukkan sisi 1: ";
                        cin >> s1;
                        cout << "Masukkan sisi 2: ";
                        cin >> s2;
                        cout << "Masukkan sisi 3: ";
                        cin >> s3;
                        cout << "Masukkan sisi 4: ";
                        cin >> s4;
                        cout << "Keliling Trapesium tersebut adalah: " << s1+s2+s3+s4;
                        cout << endl;
                        cout << thnx;
                        break;
                    } else if (opt3 == 2) {
                        cout << "Masukkan sisi a: ";
                        cin >> a;
                        cout << "Masukkan sisi b: ";
                        cin >> b;
                        cout << "Masukkan tinggi: ";
                        cin >> t;
                        cout << "Luas Trapesium tersebut adalah: " << 0.5*(a+b)*t;
                        cout << endl;
                        cout << thnx;
                        break;
                    }
            case 8:
                cout << pil << endl;
                cout << "1. Keliling" << endl;
                cout << "2. Luas" << endl;
                cin >> opt3;
                    if (opt3 == 1) {
                        cout << "Masukkan panjang sisi: ";
                        cin >> s1;
                        cout << "Keliling Belah Ketupat tersebut adalah: " << 4*s1;
                        cout << endl;
                        cout << thnx;
                        break;
                    }else if (opt3 == 2) {
                        cout << "Masukkan diagonal 1: ";
                        cin >> d1;
                        cout << "Masukkan diagonal 2: ";
                        cin >> d2;
                        cout << "Luas Belah Ketupat tersebut adalah: " << 0.5*d1*d2;
                        cout << endl;
                        cout << thnx;
                        break;
                    }
            default: cout << "Maaf kami belum menyediakan fitur yang anda inginkan...";
            return 1;
        }   
    } else {
        cout << "Mohon maaf, data tidak valid...";
    }
    }
    return 0;
}