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

							    Diziler

	 int dizi[boyut];                    Sabit boyutlu dizi tanımlama
	 int dizi[boyut][boyut2];            Çok boyutlu dizi tanımlama

~~~~~~~~~~~~~~~~~~~         1. Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
#include <limits>
using namespace std;

int main() {
int dizi[5];

for (int i = 1; i <= 5; i++) {
    cout << "Dizinin " << i << ". elemanini giriniz: ";
    cin >> dizi[i];
    }

    while (true) {
        int secim;
        
        cout << "\nGoruntulemek istediginiz elemani seciniz (1-5 arasinda ve 0 ile cikis yapabilirsiniz): ";
        cin >> secim;
        
        if (cin.fail()) {
            cout << "Gecersiz secim! Lutfen sayi girin." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (secim == 0) {
            cout << "Programdan Cikiliyor." << endl;
            break;
        }
        else if (secim < 1 || secim > 5) {
            cout << "Gecersiz secim! Lutfen 1 ile 5 arasinda bir sayi girin." << endl;
            continue;
        }

        cout << "Dizinin " << secim << ". elemani: " << dizi[secim] << endl;
    }

return 0;
}

>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
Dizinin 1. elemanini giriniz: 10
Dizinin 2. elemanini giriniz: 20
Dizinin 3. elemanini giriniz: 30
Dizinin 4. elemanini giriniz: 40
Dizinin 5. elemanini giriniz: 50

Goruntulemek istediginiz elemani seciniz (1-5 arasinda ve 0 ile cikis yapabilirsiniz): 3
Dizinin 3. elemani: 30

Goruntulemek istediginiz elemani seciniz (1-5 arasinda ve 0 ile cikis yapabilirsiniz): 7
Gecersiz secim! Lutfen 1 ile 5 arasinda bir sayi girin.

Goruntulemek istediginiz elemani seciniz (1-5 arasinda ve 0 ile cikis yapabilirsiniz): abc
Gecersiz secim! Lutfen sayi girin.

Goruntulemek istediginiz elemani seciniz (1-5 arasinda ve 0 ile cikis yapabilirsiniz): 0
Programdan Cikiliyor.

~~~~~~~~~~~~~~~~~~~         2. Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
#include <limits>
using namespace std;


void pozitifSayiGirisi(int &sayi) {
    while (true) {
        cin >> sayi;
        if (cin.fail()) {
            cout << "Gecersiz giris! Lutfen sayi girin." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        else if (sayi < 0) {
            cout << "Lütfen pozifit bir sayı giriniz" << endl;
            continue;
        }
        
        else {
            break;
        }
    }
}


int main() {
int dizi[3][3];
int dizi2[3][3];

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << "\n1. Dizinin " << i+1 << ". satirinin " << j+1 << ". elemanini giriniz: ";
        pozitifSayiGirisi(dizi[i][j]);
    }
}

>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
1. Dizinin 1. satirinin 1. elemanini giriniz: 1
1. Dizinin 1. satirinin 2. elemanini giriniz: 2
1. Dizinin 1. satirinin 3. elemanini giriniz: 3
1. Dizinin 2. satirinin 1. elemanini giriniz: 4
1. Dizinin 2. satirinin 2. elemanini giriniz: 5
1. Dizinin 2. satirinin 3. elemanini giriniz: 6
1. Dizinin 3. satirinin 1. elemanini giriniz: 7
1. Dizinin 3. satirinin 2. elemanini giriniz: 8
1. Dizinin 3. satirinin 3. elemanini giriniz: 9

2. Dizinin 1. satirinin 1. elemanini giriniz: 1
2. Dizinin 1. satirinin 2. elemanini giriniz: 2
2. Dizinin 1. satirinin 3. elemanini giriniz: abc

Gecersiz giris! Lutfen sayi girin.

2. Dizinin 1. satirinin 3. elemanini giriniz: -3

Lütfen pozifit bir sayı giriniz

2. Dizinin 1. satirinin 3. elemanini giriniz: 3
2. Dizinin 2. satirinin 1. elemanini giriniz: 4
2. Dizinin 2. satirinin 2. elemanini giriniz: 5
2. Dizinin 2. satirinin 3. elemanini giriniz: 6
2. Dizinin 3. satirinin 1. elemanini giriniz: 7
2. Dizinin 3. satirinin 2. elemanini giriniz: 8
2. Dizinin 3. satirinin 3. elemanini giriniz: 9

2 4 6
8 10 12
14 16 18

~~~~~~~~~~~~~~~~~~~         3. Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int dizi1[3];
    int dizi2[5];
    int dizitoplam[8];

    for (int i = 0; i < 3; i++) {
        cout << "1. Dizinin " << i+1 << ". elemanini giriniz: ";
        cin >> dizi1[i];
        if (cin.fail()) {
            cout << "\n" << "Gecersiz giris! Lutfen sayi girin." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            i--;
        }
        
        else if (dizi1[i] < 0) {
            cout << "\n" << "Lutfen pozitif bir sayi girin." << endl;
            i--;
        }
        
        cout << endl;
    }


    for (int i = 0; i < 5; i++) {
        cout << "2. Dizinin " << i+1 << ". elemanini giriniz: ";
        cin >> dizi2[i];
        if (cin.fail()) {
            cout << "\n" << "Gecersiz giris! Lutfen sayi girin." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            i--;
        }

        else if (dizi2[i] < 0) {
            cout << "\n" << "Lutfen pozitif bir sayi girin." << endl;
            i--;
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        dizitoplam[i] = dizi1[i];
    }
    
    for (int i = 0; i < 5; i++) {
        dizitoplam[i + 3] = dizi2[i];
    }


    cout << "\n" << "Toplam Dizi: ";
    for (int i = 0; i < 8; i++) {
        cout << dizitoplam[i] << " ";
    }
    cout << endl;

    return 0;
}

>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
1. dizinin 1. elemanini giriniz: 1

1. dizinin 2. elemanini giriniz: 2

1. dizinin 3. elemanini giriniz: 3

2. dizinin 1. elemanini giriniz: 10

2. dizinin 2. elemanini giriniz: 11

2. dizinin 3. elemanini giriniz: 12

2. dizinin 4. elemanini giriniz: 5

2. dizinin 5. elemanini giriniz: 6

Toplam Dizi: 11 13 15 5 6

~~~~~~~~~~~~~~~~~~~         4. Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int A[2][5] = { {5,4,1,2,3}, {7,6,3,2,1} };
    int B[4][2] = { {5,6}, {3,4}, {10,11}, {12,13} };
    int C[4][5] = { 0 };
    int Adeger = 0;
    int Bdeger = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {

            if (i < 2 && j < 5){
                Adeger = A[i][j];
            }
            else {
                Adeger = 0;
            }


            if (i < 4 && j < 2) {
                Bdeger = B[i][j];
            }
            else {
                Bdeger = 0;
            }


        C[i][j] = Adeger + Bdeger;
        cout << C[i][j] << " ";
        }

    cout << endl;
    
    }

return 0;
}

>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
10 10 1 2 3 
10 10 3 2 1
10 11 0 0 0
12 13 0 0 0

~~~~~~~~~~~~~~~~~~~         5. Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
#include <limits>
using namespace std;

int main() {
    int A[3][2] = {{1,2} , {3,4} , {5,6}};
    int B[2][3] = { 0 };

cout << "Dizinin ilk hali:" << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }



    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            B[j][i] = A[i][j];
        }
    }


cout << "\nDizinin son hali:" << endl; 
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
    
>>>>>>>>>>>>>>>>>>>>>>>>          Çıktı          <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
Dizinin ilk hali:
1 2 
3 4 
5 6 

Dizinin son hali:
1 3 5 
2 4 6
_____________________________________________________________________________________________________________________________________


















*/