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