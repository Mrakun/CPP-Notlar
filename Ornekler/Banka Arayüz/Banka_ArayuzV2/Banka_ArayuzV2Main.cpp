// Terminalde .\Banka yazdığınızda çalıştırılacak kod
// Bu kod, Banka_ArayuzV2Arayuz.h dosyasındaki
// fonksiyonları kullanarak basit bir banka arayüzü sağlar.
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include "Banka_ArayuzV2Arayuz.h"
using namespace std;



int main() {
int secim;
int bakiye = 0;

while (true) {
cout << "\nANA MENU\n";
cout << "1 - Bakiye Görüntüle\n";
cout << "2 - Para Yatir\n";
cout << "3 - Para Cek\n";
cout << "4 - Cikis\n";
cout << "\nSeciminiz: ";
cin >> secim;
if (cin.fail() || secim < 1 || secim > 4) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\nLütfen geçerli bir değer girin!" << endl;
    continue;
}

switch(secim) {
    case 1:
        BakiyeGoruntule(bakiye);
        break;
    case 2: ParaYatir(bakiye); break;
    case 3: ParaCek(bakiye); break;
    case 4: Cikis(); return 0;
} 

}

}