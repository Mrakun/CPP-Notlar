#include <iostream>
#include <limits>
using namespace std;

int main() {

int a;
int bakiye = 0;
int ekbakiye = 0;

while (true) {
        cout << "\nANA MENU\n";
        cout << "1 - Bakiye Görüntüle\n";
        cout << "2 - Para Yatir\n";
        cout << "3 - Para Cek\n";
        cout << "4 - Cikis\n";
        
        cout << "Seciminiz: ";
        cin >> a;

if (cin.fail()) {
    cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout << "Lütfen geçerli bir değer girin!\n" << endl;
continue;
}

switch(a) {
case (1):
cout << "\nBakiyeniz: " << bakiye << endl;
break;

case (2):
cout << "\nYatırmak istediğiniz bakiyeyi girin: ";
cin >> ekbakiye;
if (cin.fail() || ekbakiye <= 0) {
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout << "Gecersiz miktar!\n";
}
else {
    bakiye += ekbakiye;
cout << "\nYeni bakiyeniz: " << bakiye <<endl;
}
break;

case (3):
cout << "\nÇekmek istediğiniz tutarı giriniz: ";
cin >> ekbakiye;
if (cin.fail() || ekbakiye <= 0) {
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout << "\nGecersiz miktar!\n";
}
else if (cin.fail() || ekbakiye <= 0 || ekbakiye > bakiye) {
cout << "\nYetersiz bakiye!" << endl;
}
else {
    bakiye -= ekbakiye;
cout << "\nYeni bakiyeniz: " << bakiye <<endl;
}

break;

case (4):
cout << "\nSistemden Çıkılıyor..."<<endl;
return 0;

default:
cout << "\nGeçerli Değer giriniz!\n";
}

}
    return 0;
}