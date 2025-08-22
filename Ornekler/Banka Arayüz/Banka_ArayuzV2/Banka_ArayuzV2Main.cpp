// Terminalde .\banka yazdığınızda çalıştırılacak kod

#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include "Banka_ArayuzV2Arayuz.h"
#include <fstream>
using namespace std;



int main() {
int secim;
int bakiye = 0;

BakiyeOkuma(bakiye);

while (true) {

    AnaMenu();
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
    case 4: Cikis(bakiye); return 0;
        }
    }
}