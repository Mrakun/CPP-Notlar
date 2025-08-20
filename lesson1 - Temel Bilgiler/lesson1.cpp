
//				     C++ Programlama Dili Temel Bilgiler

#include <iostream>                         //Kütüphane ekleniyor
using namespace std;                        //Std ad alanı kullanılıyor

int main() {                                //Main fonksiyonu başlıyor

cout << "Alt Satir 1" << endl;              //Ekrana "Alt Satır 1" yazdırılıyor ve yeni satıra geçiliyor
cout << "Alt Satir 2" << "\n";              //Ekrana "Alt Satır 2" yazdırılıyor ve yeni satıra geçiliyor
cout << "Alt Satir 3\n"; 			        //Ekrana "Alt Satır 3" yazdırılıyor, yeni satıra geçiliyor
cout << "Alt Satir 4";                      //Ekrana "Alt Satır 4" yazdırılıyor ve yeni satıra !GEÇİLMİYOR!
cout << " Hello, World!" << endl;           //Ekrana "Hello, World!" yazdırılıyor

return 0;                                   //Programın başarılı bir şekilde bittiğini bildirir
}
