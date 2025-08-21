#include "Banka_ArayuzV2Arayuz.h"
#include <iostream>
#include <limits>
#include <string>
#include <vector>
using namespace std;


void BakiyeGoruntule(int bakiye) {
    cout << "\nBakiyeniz: " << bakiye << endl;
}


void ParaYatir(int &bakiye) {
    int ekbakiye;
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
}


void ParaCek(int &bakiye){
    int ekbakiye;
cout << "\nÇekmek istediğiniz tutarı giriniz: ";
cin >> ekbakiye;
if (cin.fail() || ekbakiye <= 0) {
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout << "\nGecersiz miktar!\n";
}
else if (ekbakiye > bakiye) {
cout << "\nYetersiz bakiye!" << endl;
}
else {
    bakiye -= ekbakiye;
cout << "\nYeni bakiyeniz: " << bakiye <<endl;
}
}



void Cikis() {
    cout << "\nSistemden Çıkılıyor..." << endl;
    return;
}