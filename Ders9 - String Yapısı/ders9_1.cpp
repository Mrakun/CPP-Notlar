#include <iostream>
#include <limits>
using namespace std;

int main() {

    string Metin;

    cout << "Bir Metin Yaziniz...\n" << endl;
    getline(cin, Metin);
    
    cout << "\n" << Metin.length() << " Harflik bir metin yazdiniz." << endl;


    return 0;
}
