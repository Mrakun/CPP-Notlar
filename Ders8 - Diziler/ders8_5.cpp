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