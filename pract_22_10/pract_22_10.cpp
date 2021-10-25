#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int a[5][2];
    int temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            a[i][j] = rand() % 11;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int j = 0; j < 2; j++)
    {
        temp = a[0][j];
        a[0][j] = a[4][j];
        a[4][j] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}
