/*
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

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım 1          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>
using namespace std;

void selamVer() {                      //Değer döndürmeyen fonksiyon tanımı
	cout << "Merhaba, Dunya!" << endl; //Ekrana mesaj yazdırır
}


int topla(int a, int b) {              //Değer döndüren fonksiyon tanımı
	return a + b;                      //İki sayının toplamını döndürür
}


int main() {

selamVer();                            //Değer döndürmeyen fonksiyonu çağırır

int sonuc = topla(5, 10);              //Değer döndüren fonksiyonu çağırır ve sonucu alır

cout << "Toplam: " << sonuc << endl;   //Toplamı ekrana yazdırır
return 0;                              //Programın başarılı bir şekilde bittiğini bildirir
}