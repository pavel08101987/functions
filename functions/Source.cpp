#include<iostream>
using namespace std;
void fillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}

void ShiftLeft(int arr[], const int n, const int number)
{
	for (int i = 0; i < number; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;

	}

}


void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello Functions!" << endl;
	const int n = 5;
	int arr[n];
	/*for (int i = 0; i < n; i++)
	{
		arr[i] = rand();

	}*/
	fillRand(arr, n);
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";

	}
	cout << endl;*/
	Print(arr, n);
	//сдвиг массива

	int number;
	cout << "введите количество: "; cin >> number;
	/*for (int i = 0; i < number; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;

	}*/
	ShiftLeft(arr, n, number);

	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;*/ 
	Print(arr, n);

	////////

	const int m = 8;
	int brr[m];
	/*for (int i = 0; i < m; i++)
	{
		brr[i] = rand();

	}*/
	fillRand(brr, m);
	/*for (int i = 0; i < m; i++)
	{
		cout << brr[i] << " ";
	}
	cout << endl;*/
	Print(brr, m);
	cout << "введите количество: "; cin >> number;
	/*for (int i = 0; i < number; i++)
	{
		int buffer = brr[0];
		for (int j = 0; j < m; j++)
		{
			brr[j] = brr[j + 1];
		}
		brr[m - 1] = buffer;

	}*/
	ShiftLeft(brr, m, number);

	/*for (int i = 0; i < m; i++)
	{
		cout << brr[i] << " ";
	}
	cout << endl;*/
	Print(brr, m);

}