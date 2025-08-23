/*
							     Diziler

	 int dizi[boyut];                    Sabit boyutlu dizi tanımlama

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>
#include <limits>
using namespace std;

int main() {
int dizi[5];

for (int i = 1; i <= 5; i++) {
    cout << "Dizinin " << i << ". elemanini giriniz: ";
    cin >> dizi[i];
    }

    while (true) {
        int secim;
        
        cout << "\nGoruntulemek istediginiz elemani seciniz (1-5 arasinda ve 0 ile cikis yapabilirsiniz): ";
        cin >> secim;
        
        if (cin.fail()) {
            cout << "Gecersiz secim! Lutfen sayi girin." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (secim == 0) {
            cout << "Programdan Cikiliyor." << endl;
            break;
        }
        else if (secim < 1 || secim > 5) {
            cout << "Gecersiz secim! Lutfen 1 ile 5 arasinda bir sayi girin." << endl;
            continue;
        }

        cout << "Dizinin " << secim << ". elemani: " << dizi[secim] << endl;
    }

return 0;
}