
//- - - - - - - - - - - -       3. Örnek Kullanım (do while)      - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

int a,b;
string str;

baslangic1:
cout << "Kaca kadar saymasini istersiniz: " ;
cin >> a;

if (cin.fail()) {
	cin.clear();
	cin.ignore( 1000 , '\n' );
	cout << "\nGecerli bir deger giriniz!\n" <<endl;
	goto baslangic1;
}

baslangic2:
cout << "Tek sayilar mi yoksa cift sayilar mi sayilsin 'Tek' veya 'Cift' olduğunu belirtmeniz yeterlidir: ";
cin >> str;


transform(str.begin(), str.end() , str.begin(), ::tolower);
if (str == "tek") {
	b = 1;
}
else if (str == "çift" || str ==  "cift") {
	b = 0;
}
else {
cout << "Gecersiz giris tespit edildi." << endl;
goto baslangic2;
}

do {
	cout << "Sayi: " << b << endl;
	b+=(2);
} while (b <= a);

cout << "Sectiginiz ve son sayi: " << a << endl;

	return 0;
}