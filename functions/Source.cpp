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

void Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
     sum += arr[i];
	}
	cout << "сумма элементов массивы: " << sum << endl;

}

void Avg(int arr[], const int n)
{
	double sumsr = 0;
	for (int i = 0; i < n; i++)
	{
		sumsr += arr[i];

	}
	cout << "среднеарифметическое массива: " << sumsr / n << endl;
}

void minValueIn(int arr[], const int n)
{
	int min_number = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_number)
		{
			min_number = arr[i];
		}

	}
	cout << "минимальное число: " << min_number << endl;
}

void maxValueIn(int arr[], const int n)
{
	int max_number = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_number)
		{
			max_number = arr[i];
		}

	}
	cout << "максимальное число: " << max_number << endl;

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
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);

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
	cout << endl;

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
	Sum(brr, m);
	Avg(brr, m);
	minValueIn(brr, m);
	maxValueIn(brr, m);

	//сдвиг массива
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