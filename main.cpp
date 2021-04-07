// Trabalho viel.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{

    int A[2][3] = { 1,2,3,6,5,4 };
    int B[3][2] = { 1,2,3,4,5,6 };

   

    int C[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {

            C[i][j] = A[i][j] * B[j][i];
        }


    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {

            std::cout << C[i][j] << "  ";
        }
        cout << endl;


    }
////////////////////////////////////////////////////////////////////////////////////////////
    int array[120];
    int total = 0;
    for (int i = 0; i < 120; i++) {
        array[i] = i;
    }

    for (int i = 0; i < 120; i++) {
        total += array[i];
    }

    cout << total;
}

