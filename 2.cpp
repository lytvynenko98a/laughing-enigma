#include <iostream> 
#include <ctime> 

using namespace std;


int main()
{
    cout << "Hello Yura\n";
    //lytvynenko98a/laughing-enigma sdflkn
    int** M;
    int const SIZE = 5;
    M = new int* [SIZE];
    for (int i = 0; i < 5; i++)
        M[i] = new int[SIZE];


    for (int i = 0; i < 5; i++)
        for (int n = 0; n < 5; n++)
            M[i][n] = rand() % 10;


    for (int i = 0; i < 5; i++)
    {
        for (int n = 0; n < 5; n++)
            cout << M[i][n] << " ";
        cout << endl;
    }
    system("pause");

    return 0;
    //prosto matrica :(
}
