/*
						         Koşullu İfadeler

     if                                     Koşul doğruysa çalışacak kod bloğu
     else if                                Birden fazla koşul kontrolü için kullanılır
	 else                                   Koşul yanlışsa çalışacak kod bloğu

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>
using namespace std;

int main() {

int sayi;

cout << "Bir sayi giriniz: ";
cin >> sayi;

if (sayi > 0) {                             //Pozitif sayı kontrolü
	cout << "Sayi pozitif." << endl;
	} else if (sayi < 0) {                  //Negatif sayı kontrolü
	cout << "Sayi negatif." << endl;
	} else {                                //Sıfır kontrolü
	cout << "Sayi sifir." << endl;
	}

	return 0;
}