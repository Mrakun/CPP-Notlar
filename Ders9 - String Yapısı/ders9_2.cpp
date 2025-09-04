#include <iostream>
#include <limits>
#include <vector>
using namespace std;

bool HarfKontrol(string kelime) {
    for (int i = 0; i < kelime.length(); i++) {
    if (!isalpha(kelime[i]) && kelime[i] != ' ') {
        return false;
    }
}
return true;
}


int main() {

int n;

    while (true) {
        cout << "Kac tane isim gireceksiniz?\nCevap: ";
        cin >> n;
        if (cin.fail()) {
            cout << "\nGecersiz Deger, lutfen bir sayi giriniz.\n" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
    }
vector<string> isimler(n);

    for (int i = 0; i < n; i++) {

        while (true) {
        cout << "\n" << i+1 << ". kisinin tam ismini giriniz: ";    
        getline(cin, isimler[i]); 
            
            if (!HarfKontrol(isimler[i])) {
                cout << "Lutfen isim icerisinde sayi girmeyin." << endl;
                continue;
            }

        break;
        }
    }

int enuzunkelime = 0;
    for (int i = 0; i < n; i++) {
        if (isimler[i].length() > isimler[enuzunkelime].length()) {
            enuzunkelime = i;
        }
    }
    cout << "En uzun isim: " << isimler[enuzunkelime] << endl;

return 0;
}