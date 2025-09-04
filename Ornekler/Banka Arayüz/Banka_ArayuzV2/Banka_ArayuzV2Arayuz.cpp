#include "Banka_ArayuzV2Arayuz.h"
#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include <fstream>
using namespace std;




void AnaMenu() {
    cout << "\nANA MENU\n";
    cout << "1 - Bakiye Goruntule\n";
    cout << "2 - Para Yatir\n";
    cout << "3 - Para Cek\n";
    cout << "4 - Cikis\n";
    cout << "\nSeciminiz: ";
}





void BakiyeOkuma(int& bakiye) {
    ifstream file("bakiye.txt");

    if (file.is_open()) {
        file >> bakiye;
        file.close();
        cout << "Onceki bakiye yuklendi: " << bakiye << " TL" << endl;
    } else {
        bakiye = 0;
        ofstream Outfile("bakiye.txt");
        Outfile << bakiye;
        Outfile.close();
        cout << "\nYeni hesap olusturuldu. Baslangic bakiyesi: 0 TL" << endl;
    }
}





void BakiyeKaydet(int bakiye) {
    ofstream file("bakiye.txt");
    if (file) {
        file << bakiye;
        file.close();
    }
    else {
        cout << "Dosya acilamadi!" << endl;
    }
}





void BakiyeGoruntule(int bakiye) {
    cout << "\nBakiyeniz: " << bakiye << " TL" << endl;
}





void ParaYatir(int &bakiye) {
    int ekbakiye;
cout << "\nYatirmak istediginiz bakiyeyi girin: ";
cin >> ekbakiye;
if (cin.fail() || ekbakiye <= 0) {
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout << "Gecersiz miktar!\n";
}
else {
    bakiye += ekbakiye;
    BakiyeKaydet(bakiye);
cout << "\nYeni bakiyeniz: " << bakiye << " TL" <<endl;
    }
}





void ParaCek(int &bakiye){

    int ekbakiye;
cout << "\nCekmek istediginiz tutari giriniz: ";
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
    BakiyeKaydet(bakiye);
cout << "\nYeni bakiyeniz: " << bakiye << " TL" <<endl;  
    }
}





void Cikis(int bakiye) {
    BakiyeKaydet(bakiye);
    cout << "\nSistem Kapaniyor..." << endl;
}