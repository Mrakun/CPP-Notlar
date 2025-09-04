
//- - - - - - - - - - - -       2. Örnek Kullanım (while)     - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#include <iostream>
#include <limits>
using namespace std;

int main() {

int a=0,b;

while (true) {
	cout << "Toplanilacak sayilari giriniz\n(0 girerseniz islem sonlanir)\n\nSayiniz: ";
	cin >> b;
	a +=b;
	if (cin.fail()) {
		cout << "\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Gecerli Degerler giriniz!\n";
		continue;
	}
	if (b == 0) {
		break;
	}
	cout << "\n";
}
cout << "Sayinizin son hali: " << a << endl;

	return 0;
}