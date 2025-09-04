/*
                        Değişken Tanımlama ve Veri Tipleri

int int1 = 10;                              Tam sayı değişkeni tanımlanıyor
float float1 = 3.14;                        Ondalık sayı değişkeni tanımlanıyor
double double1 = 2.71828;                   Çift hassasiyetli ondalık sayı değişkeni tanımlanıyor
char Char1 = 'A';                           Karakter değişkeni tanımlanıyor
bool bool1 = true/false;                    Boolean (doğru/yanlış) değişkeni tanımlanıyor

#include <string>                           String (metin) değişkeni tanımlamak için gerekli kütüphane ekleniyor
string str1 = "Merhaba";                    String (metin) değişkeni tanımlanıyor

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>
#include <string>                           //String kütüphanesi ekleniyor
using namespace std;

int main() {
int intA = 5;
float floatA = 3.14;
double doubleA = 1.23456;
char charA = 'B';
bool boolA = true;
string strA = "Uzun Cumle";

cout << "Sayiniz: " << intA << "\n";        //Tam sayı değişkeni yazdır
cout << "Ondalik: " << floatA << "\n";      //Ondalık sayı değişkeni yazdır
cout << "Ondalik: " << doubleA << endl;     //Çift hassasiyetli ondalık sayı değişkeni yazdır
cout << "Karakter: " << charA << "\n";      //Karakter değişkeni yazdır
cout << "Dogru/Yanlis: " << boolA << endl;  //Boolean değişkeni yazdır
cout << "Kelime: " << strA << "\n";         //String değişkeni yazdır

return 0;
}