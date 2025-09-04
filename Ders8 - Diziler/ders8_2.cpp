/* 

int dizi[boyut][boyut2];                 Çok boyutlu dizi tanımlama

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>
#include <limits>
using namespace std;





void pozitifSayiGirisi(int &sayi) {
    while (true) {
        cin >> sayi;
        if (cin.fail()) {
            cout << "Gecersiz giris! Lutfen sayi girin." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        else if (sayi < 0) {
            cout << "Lütfen pozifit bir sayı giriniz" << endl;
            continue;
        }
        
        else {
            break;
        }
    }
}



int main() {
int dizi[3][3];
int dizi2[3][3];



for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << "\n1. Dizinin " << i+1 << ". satirinin " << j+1 << ". elemanini giriniz: ";
        pozitifSayiGirisi(dizi[i][j]);
    }
}



for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << "\n2. Dizinin " << i+1 << ". satirinin " << j+1 << ". elemanini giriniz: ";
        pozitifSayiGirisi(dizi2[i][j]);
    }
}



for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << dizi[i][j] + dizi2[i][j] << " ";
    }
    cout << endl;
}

return 0;
}