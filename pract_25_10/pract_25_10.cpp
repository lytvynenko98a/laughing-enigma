#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	int n, m, k;
	cout << "Enter size of array1 " << endl;
	cin >> n >> m;

	cout << "Enter size 2 of array2 " << endl;
	cin >> k;

	float** a = new float* [n];
	for (int i = 0; i < n; i++)
		a[i] = new float[m];



	float** b = new float* [m];
	for (int i = 0; i < m; i++)
		b[i] = new float[k];



	float** c = new float* [n];
	for (int i = 0; i < n; i++)
		c[i] = new float[k];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 5;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}



	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			b[i][j] = rand() % 10;
			cout << b[i][j] << " ";
		}
		cout << endl;
	}




	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			c[i][j] = 0;

		}
		cout << endl;
	}






	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			for (int l = 0; l < k; l++)
				c[i][l] += a[i][j] * b[j][l];






	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			// a[i][j] = rand() % 10;
			cout << c[i][j] << " ";
		}
		cout << endl;
	}



	for (int i = 0; i < n; i++)
		delete[] a[i];



	delete[] a;



	for (int i = 0; i < m; i++)
		delete[] b[i];



	delete[] b;



	for (int i = 0; i < n; i++)
		delete[] c[i];



	delete[] c;

	system("pause");
	return 0;
}