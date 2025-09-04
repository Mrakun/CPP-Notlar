#include <iostream>
#include <limits>
using namespace std;

int main() {
    int dizi1[3];
    int dizi2[5];
    int dizitoplam[8];

    for (int i = 0; i < 3; i++) {
        cout << "1. Dizinin " << i+1 << ". elemanini giriniz: ";
        cin >> dizi1[i];
        if (cin.fail()) {
            cout << "\n" << "Gecersiz giris! Lutfen sayi girin." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            i--;
        }
        
        else if (dizi1[i] < 0) {
            cout << "\n" << "Lutfen pozitif bir sayi girin." << endl;
            i--;
        }
        
        cout << endl;
    }


    for (int i = 0; i < 5; i++) {
        cout << "2. Dizinin " << i+1 << ". elemanini giriniz: ";
        cin >> dizi2[i];
        if (cin.fail()) {
            cout << "\n" << "Gecersiz giris! Lutfen sayi girin." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            i--;
        }

        else if (dizi2[i] < 0) {
            cout << "\n" << "Lutfen pozitif bir sayi girin." << endl;
            i--;
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        dizitoplam[i] = dizi1[i];
    }
    
    for (int i = 0; i < 5; i++) {
        dizitoplam[i + 3] = dizi2[i];
    }


    cout << "\n" << "Toplam Dizi: ";
    for (int i = 0; i < 8; i++) {
        cout << dizitoplam[i] << " ";
    }
    cout << endl;

    return 0;
}