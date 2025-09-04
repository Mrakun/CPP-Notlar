#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main () {
string strAd;
string strSoyad;
string TamAd;
string onay;
int yas;

bool OnayAl = false;
    while (!OnayAl) {

    cout << "Adinizi Giriniz: ";
    getline(cin, strAd);

    cout << "\nSoyadinizi Giriniz: ";
    cin >> strSoyad;


bool YasDongu = false;
    while (!YasDongu) {
    cout << "\nYasiniz: ";
    cin >> yas;
    if (cin.fail()) {
            cout << "Gecersiz secim! Lutfen sayi girin." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        else if (yas == 0 || yas < 0) {
            cout << "Lutfen gecerli bir sayi giriniz." << endl;
        }
        else {
            YasDongu = true;
        }
}

        while (true) {
        cout << "\nTam adiniz: " << strAd << " " << strSoyad << endl;
        cout << "Yasiniz: " << yas << endl;
        cout << "Onayliyor musunuz? (Evet / Hayir)\nCevap: ";
        cin >> onay;

        for (int i = 0; i < onay.length(); i++) {
            onay[i] = tolower(onay[i]);
        }

        if (onay == "evet") {
            OnayAl = true;
            cout << "Bilgiler kaydedilmistir!\n";
            TamAd = strAd + " " + strSoyad;
            break;
        }
        else if (onay == "hayır" || onay == "hayir") {
            cout << "Lutfen bilgilerinizi dogru giriniz.\n";
            break;
        }
        else {
            cout << "\nLutfen gecerli bir cevap giriniz." << endl;
            continue;
        }
      }
    }

return 0;
}