#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

string substitute(string text, unordered_map<char, char> mapping) {
    string result = "";
    for (char c : text) {
        if (mapping.count(c)) {  
            result += mapping[c];  
        } else {
            result += c;  
        }
    }
    return result;
}

int main() {
    while(true) {
    unordered_map<char, char> encryptMap = {
        {'a', 'm'}, {'b', 'n'}, {'c', 'o'}, {'d', 'p'}, {'e', 'q'},
        {'f', 'r'}, {'g', 's'}, {'h', 't'}, {'i', 'u'}, {'j', 'v'},
        {'k', 'w'}, {'l', 'x'}, {'m', 'y'}, {'n', 'z'}, {'o', 'a'},
        {'p', 'b'}, {'q', 'c'}, {'r', 'd'}, {'s', 'e'}, {'t', 'f'},
        {'u', 'g'}, {'v', 'h'}, {'w', 'i'}, {'x', 'j'}, {'y', 'k'}, {'z', 'l'}
    };

    unordered_map<char, char> decryptMap;
    for (auto pair : encryptMap) {
        decryptMap[pair.second] = pair.first;
    }

    int choice;
    cout << "Pilih mode:\n";
    cout << "1. Enkripsi\n";
    cout << "2. Dekripsi\n";
    cout << "Masukkan pilihan (1/2): ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        string text;
        cout << "Masukkan teks untuk dienkripsi: ";
        getline(cin, text);

        string encrypted = substitute(text, encryptMap);
        cout << "Teks terenkripsi: " << encrypted << endl;
    } 
    else if (choice == 2) {
        string text;
        cout << "Masukkan teks untuk didekripsi: ";
        getline(cin, text);

        string decrypted = substitute(text, decryptMap);
        cout << "Teks terdekripsi: " << decrypted << endl;
    } 
    else {
        cout << "Pilihan tidak valid. Silakan pilih 1 atau 2." << endl;
    }

    }
    return 0;
}
