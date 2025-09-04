/*
                       Veri Alma ve Giriş/Çıkış İşlemleri

cin >> değişken;                            Kullanıcıdan veri almak için kullanılır

~~~~~~~~~~~~~~~~~~~          Örnek Kullanım          ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

#include <iostream>                         
using namespace std;

int main() {
int UyeSayi;
cout << "Uye Sayisini Giriniz: ";           //Kullanıcıdan üye sayısı girmesini ister
cin >> UyeSayi;                             //Kullanıcının girdiği değeri UyeSayisi değişkenine atar
cout << "Uye Sayisi: " << UyeSayi << "\n";  //Üye sayısını ekrana yazdırır

return 0;
}