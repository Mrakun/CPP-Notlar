/*
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

- - - - - - - - - - - -       1. Örnek Kullanım (for)       - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#include <iostream>
#include <limits>
using namespace std;

int main() {
double a,b=1;

while (true) {
cout << "Faktoriyeli Alinmasi istediginiz sayiyi girin: ";
cin >> a;

if (cin.fail() || a < 0) {
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout << "Gecerli bir deger girin!\n";
continue;
}
	break;
}

for (int i=1; i <= a; i++) {

b*=i;

cout << i << ". Carpim sonucu: " << b << endl;
}

cout << "Sayinizin faktoriyeli: " << b << endl;

	return 0;
}