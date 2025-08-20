/*
				     C++ Programlama Dili Temel Bilgiler

#include <iostream>                         Kütüphane ekleniyor
using namespace std;                        Std ad alanı kullanılıyor

int main() {                                Main fonksiyonu başlıyor

cout << "Alt Satır 1" << endl;              Ekrana "Alt Satır 1" yazdırılıyor ve yeni satıra geçiliyor
cout << "Alt Satır 2" << "\n";              Ekrana "Alt Satır 2" yazdırılıyor ve yeni satıra geçiliyor
cout << "Alt Satır 3\n"; 			        Ekrana "Alt Satır 3" yazdırılıyor, yeni satıra geçiliyor
cout << "Alt Satır 4";                      Ekrana "Alt Satır 4" yazdırılıyor ve yeni satıra !GEÇİLMİYOR!
cout << " Hello, World!" << endl;           Ekrana "Hello, World!" yazdırılıyor

return 0;                                   Programın başarılı bir şekilde bittiğini bildirir
}

									 Çıktı

Alt Satır 1
Alt Satır 2
Alt Satır 3
Alt Satır 4 Hello, World!

_____________________________________________________________________________________________________________________________________

                        Değişken Tanımlama ve Veri Tipleri

int int1 = 10;                              Tam sayı değişkeni tanımlanıyor
float float1 = 3.14;                        Ondalık sayı değişkeni tanımlanıyor
double double1 = 2.71828;                   Çift hassasiyetli ondalık sayı değişkeni tanımlanıyor
char Char1 = 'A';                           Karakter değişkeni tanımlanıyor
bool bool1 = true/false;                    Boolean (doğru/yanlış) değişkeni tanımlanıyor

#include <string>                           String (metin) değişkeni tanımlamak için gerekli kütüphane ekleniyor
string str1 = "Merhaba";                    String (metin) değişkeni tanımlanıyor

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
#include <string>                           String kütüphanesi ekleniyor
using namespace std;

int main() {
int intA = 5;
float floatA = 3.14;
double doubleA = 1.23456;
char charA = "B";
bool boolA = true;
string strA = "Uzun Cumle";

cout << "Sayınız: " << intA << "\n";        Tam sayı değişkeni yazdır
cout << "Ondalık: " << floatA << "\n";      Ondalık sayı değişkeni yazdır
cout << "Ondalık: " << doubleA << endl;     Çift hassasiyetli ondalık sayı değişkeni yazdır
cout << "Karakter: " << charA << "\n";      Karakter değişkeni yazdır
cout << "Doğru/Yanlış: " << boolA << endl;  Boolean değişkeni yazdır
cout << "Kelime: " << strA << "\n";         String değişkeni yazdır
}

									 Çıktı

Sayınız: 5
Ondalık: 3.14
Hassas Ondalık: 1.23456
Karakter: B
Doğru/Yanlış: 1
Kelime: Uzun Cumle
_____________________________________________________________________________________________________________________________________

                       Veri Alma ve Giriş/Çıkış İşlemleri

cin >> değişken;                            Kullanıcıdan veri almak için kullanılır

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>                         
using namespace std;

int main() {
int UyeSayi;
cout << "Üye Sayısını Giriniz: ";           Kullanıcıdan üye sayısı girmesini ister
cin >> UyeSayi;                             Kullanıcının girdiği değeri UyeSayisi değişkenine atar
cout << "Üye Sayısı: " << UyeSayi << "\n";  Üye sayısını ekrana yazdırır
}


>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

Üye Sayısını Giriniz: 5
Üye Sayısı: 5
_____________________________________________________________________________________________________________________________________

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

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
using namespace std;

int main() {
int a = 10, b = 6;

int toplam = a + b;                         Toplama işlemi
int fark = a - b;                           Çıkarma işlemi
int carpim = a * b;                         Çarpma işlemi
float bolum = a / b;                        Bölme işlemi
int kalan = a % b;                          Modülüs işlemi
int esitMi = (a == b);                      Eşitlik kontrolü
int buyukMu = (a > b);                      Büyüklük kontrolü
int kucukMu = (a < b);                      Küçüklük kontrolü
int BuyEsitMi = (a >= b);                   Büyük eşit kontrolü
int KucEsitMi = (a <= b);                   Küçük eşit kontrolü
int Ve = (a > 0 && b > 0);                  VE kontrolü
int Veya = (a > 0 || b < 0);                VEYA kontrolü
int Degil = !(a == b);                      DEĞİL kontrolü

cout << "A = " << a << "\n"; 
cout << "B = " << b << "\n";
cout << "Toplam: " << toplam << endl;       Toplamı ekrana yazdır
cout << "Fark: " << fark << endl;           Farkı ekrana yazdır
cout << "Çarpım: " << carpim << endl;       Çarpımı ekrana yazdır
cout << "Bölüm: " << bolum << endl;         Bölümü ekrana yazdır
cout << "Kalan: " << kalan << endl;         Kalanı ekrana yazdır
cout << "Eşit mi: " << esitMi << endl;      Eşitlik kontrolünü ekrana yazdır
cout << "A Büyük mü: " << buyukMu << endl;  Büyüklük kontrolünü ekrana yazdır
cout << "A Küçük mü: " << kucukMu << endl;  Küçüklük kontrolünü ekrana yazdır
cout << "">=" mi: " << BuyEsitMi << endl;   Büyük eşit kontrolünü ekrana yazdır
cout << ""<=" mi: " << KucEsitMi << endl;   Küçük eşit kontrolünü ekrana yazdır
cout << "VE: " << Ve << endl;               VE kontrolünü ekrana yazdır
cout << "VEYA: " << Veya << endl;           VEYA kontrolünü ekrana yazdır
cout << "DEĞİL: " << Degil << endl;         DEĞİL kontrolünü ekrana yazdır
return 0;                                   
}

>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

A = 10
B = 6
Toplam: 16
Fark: 4
Çarpım: 60
Bölüm: 1.66667
Kalan: 4
Eşit mi: 0
A Büyük mü: 1
A Küçük mü: 0
Büyük eşit mi: 1
Küçük eşit mi: 0
Mantıksal VE: 1
Mantıksal VEYA: 1
Mantıksal DEĞİL: 1
_____________________________________________________________________________________________________________________________________

						         Koşullu İfadeler

     if                                     Koşul doğruysa çalışacak kod bloğu
     else if                                Birden fazla koşul kontrolü için kullanılır
	 else                                   Koşul yanlışsa çalışacak kod bloğu

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
using namespace std;

int main() {

int sayi;

cout << "Bir sayı giriniz: ";
cin >> sayi;

if (sayi > 0) {                             Pozitif sayı kontrolü
	cout << "Sayı pozitif." << endl;
	} else if (sayi < 0) {                  Negatif sayı kontrolü
	cout << "Sayı negatif." << endl;
	} else {                                Sıfır kontrolü
	cout << "Sayı sıfır." << endl;
	}

	return 0;
}

>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

Bir sayı giriniz: 5
Sayı pozitif.
Bir sayı giriniz: -3
_____________________________________________________________________________________________________________________________________

                                   Döngüler

     for                                    Belirli sayıda tekrarlamak için kullanılır
	 
	 while                                  Koşul doğru olduğu sürece tekrarlamak için kullanılır
	 do while                               En az bir kez çalıştırmak için kullanılır
	 
	 switch                                 Çoklu koşul kontrolü için kullanılır
	 case                                   Switch ifadesinde kullanılan durumları tanımlar
	 default                                Switch ifadesinde hiçbir durum eşleşmezse çalışacak kod bloğu

	 continue                               Döngünün o anki iterasyonunu atlar ve bir sonraki iterasyona geçer
	 break                                  Döngüyü tamamen sonlandırır
	 return                                 Fonksiyondan çıkış yapar ve değeri döndürür
	 goto                                   Belirli bir etiketin bulunduğu yere atlar
	 continue                               Döngünün o anki iterasyonunu atlar ve bir sonraki iterasyona geçer
	 break                                  Döngüyü tamamen sonlandırır
	 
	 cin.clear()                            Giriş akışını temizler
	 cin.ignore()                           Giriş akışındaki karakterleri yoksayar
	 cin.fail()                             Giriş akışında hata olup olmadığını kontrol eder
	 cin.peek()                             Giriş akışındaki bir sonraki karakteri okur
	 cin.get()                              Giriş akışından bir karakter okur
	 cin.getline()                          Giriş akışından bir satır okur
	 cin.sync()                             Giriş akışını senkronize eder
	 cin.seekg()                            Giriş akışının konumunu değiştirir
	 cin.seekp()                            Çıkış akışının konumunu değiştirir
	 cin.tellg()                            Giriş akışının mevcut konumunu döndürür
	 cin.tellp()                            Çıkış akışının mevcut konumunu döndürür
	 cin.eof()                              Giriş akışının sonuna ulaşılıp ulaşılmadığını kontrol eder


~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- - - - - - - - - - - -       1. Örnek Kullanım (for)       - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

#include <iostream>
#include <limits>
using namespace std;

int main() {
int a,b=1;

while (true) {
cout << "Faktöriyeli alınmasını istediğiniz sayıyı girin: ";
cin >> a;

if (cin.fail() || a < 0) {
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout << "Geçerli bir değer girin!\n";
continue;
}
	break;
}

for (int i=1; i <= a; i++) {

b*=i;

cout << i << ". Çarpım sonucu: " << b << endl;
}

cout << "Sayınızın faktöriyeli: " << b << endl;

	return 0;
}

>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

Faktöriyeli alınmasını istediğiniz sayıyı girin: 5
1. Çarpım sonucu: 1
2. Çarpım sonucu: 2
3. Çarpım sonucu: 6
4. Çarpım sonucu: 24
5. Çarpım sonucu: 120
Sayınızın faktöriyeli: 120

- - - - - - - - - - - -       2. Örnek Kullanım (while)     - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#include <iostream>
#include <limits>
using namespace std;

int main() {

int a=0,b;

while (true) {
	cout << "Toplanılacak sayıları giriniz\n(0 girerseniz işlem sonlanır)\n\nSayınız: ";
	cin >> b;
	a +=b;
	if (cin.fail()) {
		cout << "\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Geçerli Değerler giriniz!\n";
		continue;
	}
	if (b == 0) {
		break;
	}
	cout << "\n";
}
cout << "Sayınızın son hali: " << a << endl;

	return 0;
}

>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

Toplanılacak sayıları giriniz
(0 girerseniz işlem sonlanır)

Sayınız: 5

Toplanılacak sayıları giriniz
(0 girerseniz işlem sonlanır)

Sayınız: 10

Toplanılacak sayıları giriniz
(0 girerseniz işlem sonlanır)

Sayınız: abc

Geçerli Değerler giriniz!
Toplanılacak sayıları giriniz
(0 girerseniz işlem sonlanır)

Sayınız: 0
Sayınızın son hali: 15

- - - - - - - - - - - -       3. Örnek Kullanım (do while)      - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

int a,b;
string str;

baslangic1:
cout << "Kaça kadar saymasını istersiniz: " ;
cin >> a;

if (cin.fail()) {
	cin.clear();
	cin.ignore( 1000 , '\n' );
	cout << "\nGeçerli bir değer giriniz!\n" <<endl;
	goto baslangic1;
}

baslangic2:
cout << "Tek sayılar mı yoksa çift sayılar mı sayılsın 'Tek' veya 'Çift' olduğunu belirtmeniz yeterlidir: ";
cin >> str;


transform(str.begin(), str.end() , str.begin(), ::tolower);
if (str == "tek") {
	b = 1;
}
else if (str == "çift" || str ==  "cift") {
	b = 0;
}
else {
cout << "Geçersiz giriş tespit edildi." << endl;
goto baslangic2;
}

do {
	cout << "Sayı: " << b << endl;
	b+=(2);
} while (b <= a);

cout << "Seçtiğiniz ve son sayı: " << a << endl;

	return 0;
}

>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

Kaça kadar saymasını istersiniz: 20
Tek sayılar mı yoksa çift sayılar mı sayılsın 'Tek' veya 'Çift' olduğunu belirtmeniz yeterlidir: Tek
Sayı: 1
Sayı: 3
Sayı: 5
Sayı: 7
Sayı: 9
Sayı: 11
Sayı: 13
Sayı: 15
Sayı: 17
Sayı: 19
Seçtiğiniz ve son sayı: 20

- - - - - - - - - - - -      4. Örnek Kullanım (switch)     - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#include <iostream>
#include <limits>
using namespace std;

int main() {
int a;

baslangic:
cout << "1-7 arasında bir sayı seç: ";
cin >> a;

switch (a) {

case 1:
cout << "Pazartesi" << endl;
break;

case 2:
cout << "Salı" << endl;
break;

case 3:
cout << "Çarşamba" << endl;
break;

case 4:
cout << "Perşembe" << endl;
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
cout << "Geçersiz Değer girdiniz!\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
goto baslangic;
}
return 0;
}

>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
1-7 arasında bir sayı seç: 3
Çarşamba
1-7 arasında bir sayı seç: 8
Geçersiz Değer girdiniz!

1-7 arasında bir sayı seç: 2
Salı
_____________________________________________________________________________________________________________________________________

								   Fonksiyonlar

     void                              Değer döndürmeyen fonksiyon tanımlamak için kullanılır
     int                               Değer döndüren fonksiyon tanımlamak için kullanılır

int fonksiyonAdi(parametreler) {       Fonksiyon tanımlama yapısı
	// Fonksiyonun içeriği
	return deger;                      Değer döndürme işlemi
}


void fonksiyonAdi(parametreler) {      Değer döndürmeyen fonksiyon tanımlama yapısı
	// Fonksiyonun içeriği
}

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
using namespace std;

void selamVer() {                      Değer döndürmeyen fonksiyon tanımı
	cout << "Merhaba, Dünya!" << endl; Ekrana mesaj yazdırır
}


int topla(int a, int b) {              Değer döndüren fonksiyon tanımı
	return a + b;                      İki sayının toplamını döndürür
}


int main() {

selamVer();                            Değer döndürmeyen fonksiyonu çağırır

int sonuc = topla(5, 10);              Değer döndüren fonksiyonu çağırır ve sonucu alır

cout << "Toplam: " << sonuc << endl;   Toplamı ekrana yazdırır
return 0;                              Programın başarılı bir şekilde bittiğini bildirir
}

>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
Merhaba, Dünya!
Toplam: 15

_____________________________________________________________________________________________________________________________________
								   Sınıflar ve Nesneler




























*/