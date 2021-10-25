#include<iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    int arr[10];
    const int min_val = -100; // максимальне значення елементів масиву
    const int max_val = 100; // мінімальне значення
    int tmp, min_el = 0;

    for (int i = 0; i < 10; i++)
    {
        arr[i] = min_val + rand() % (max_val - min_val + 1);
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            min_el = arr[i]; // перший мінімальний
            break;
        }
    }
    cout << min_el << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] > 0 && arr[j] < min_el)
                min_el = arr[j];
        }
    }
    cout << min_el << endl;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 0)
            arr[i] = min_el;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
