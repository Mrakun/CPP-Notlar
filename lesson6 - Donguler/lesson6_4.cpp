
//- - - - - - - - - - - -      4. Örnek Kullanım (switch)     - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#include <iostream>
#include <limits>
using namespace std;

int main() {
int a;

baslangic:
cout << "1-7 arasinda bir sayi sec: ";
cin >> a;

switch (a) {

case 1:
cout << "Pazartesi" << endl;
break;

case 2:
cout << "Sali" << endl;
break;

case 3:
cout << "Carsamba" << endl;
break;

case 4:
cout << "Persembe" << endl;
break;

case 5:
cout << "Cuma" << endl;
break;

case 6:
cout << "Cumartesi" << endl;
break;

case 7:
cout << "Pazar" << endl;
break;

default:
cout << "Gecersiz Deger girdiniz!\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
goto baslangic;
}
return 0;
}