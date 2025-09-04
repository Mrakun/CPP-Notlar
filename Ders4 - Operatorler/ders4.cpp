/*
                              Operatörler ve İfadeler

     +                                      Toplama operatörü
     -  								    Çıkarma operatörü
	 *									    Çarpma operatörü
	 /									    Bölme operatörü
	 %									    Modülüs (kalan) operatörü
	 ++									    Artırma operatörü
	 --									    Azaltma operatörü
	 ==									    Eşitlik operatörü
	 !=									    Eşit olmama operatörü
	 >									    Büyüktür operatörü
	 <									    Küçüktür operatörü
	 >=									    Büyük eşittir operatörü
	 <=									    Küçük eşittir operatörü
	 &&									    VE operatörü
	 ||									    VEYA operatörü
	 !									    DEĞİL operatörü

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>
using namespace std;

int main() {
int a = 10, b = 6;

int toplam = a + b;                         //Toplama işlemi
int fark = a - b;                           //Çıkarma işlemi
int carpim = a * b;                         //Çarpma işlemi
float bolum = a / b;                        //Bölme işlemi
int kalan = a % b;                          //Modülüs işlemi
int esitMi = (a == b);                      //Eşitlik kontrolü
int buyukMu = (a > b);                      //Büyüklük kontrolü
int kucukMu = (a < b);                      //Küçüklük kontrolü
int BuyEsitMi = (a >= b);                   //Büyük eşit kontrolü
int KucEsitMi = (a <= b);                   //Küçük eşit kontrolü
int Ve = (a > 0 && b > 0);                  //VE kontrolü
int Veya = (a > 0 || b < 0);                //VEYA kontrolü
int Degil = !(a == b);                      //DEĞİL kontrolü

cout << "A = " << a << "\n"; 
cout << "B = " << b << "\n";
cout << "Toplam: " << toplam << endl;       //Toplamı ekrana yazdır
cout << "Fark: " << fark << endl;           //Farkı ekrana yazdır
cout << "Carpım: " << carpim << endl;       //Çarpımı ekrana yazdır
cout << "Bolum: " << bolum << endl;         //Bölümü ekrana yazdır
cout << "Kalan: " << kalan << endl;         //Kalanı ekrana yazdır
cout << "Esit mi: " << esitMi << endl;      //Eşitlik kontrolünü ekrana yazdır
cout << "A Buyuk mu: " << buyukMu << endl;  //Büyüklük kontrolünü ekrana yazdır
cout << "A Kucuk mu: " << kucukMu << endl;  //Küçüklük kontrolünü ekrana yazdır
cout << "'>=' mi: " << BuyEsitMi << endl;   //Büyük eşit kontrolünü ekrana yazdır
cout << "'<=' mi: " << KucEsitMi << endl;   //Küçük eşit kontrolünü ekrana yazdır
cout << "VE: " << Ve << endl;               //VE kontrolünü ekrana yazdır
cout << "VEYA: " << Veya << endl;           //VEYA kontrolünü ekrana yazdır
cout << "DEGIL: " << Degil << endl;         //DEĞİL kontrolünü ekrana yazdır
return 0;                                   
}