#include<iostream>
using namespace std;
void fillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void fillRand(double arr[], const int n)
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
void Print(double arr[], const int n)
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
void ShiftLeft(double arr[], const int n, const int number)
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

void ShiftR(int arr[], const int n, const int number)
{
	for (int i = 0; i < number; i++)
	{
		int buffer = arr[n-1];
		for (int j = n-1; j>0; j--)
		{
			arr[j] = arr[j - 1];

		}
		arr[0] = buffer;

	}
}
void ShiftR(double arr[], const int n, const int number)
{
	for (int i = 0; i < number; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];

		}
		arr[0] = buffer;

	}
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
     sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Avg(int arr[], const int n)
{
	double sumsr = 0;
	for (int i = 0; i < n; i++)
	{
		sumsr += arr[i];

	}
	return sumsr;

}
double Avg(double arr[], const int n)
{
	double sumsr = 0;
	for (int i = 0; i < n; i++)
	{
		sumsr += arr[i];

	}
	return sumsr;

}

int minValueIn(int arr[], const int n)
{
	int min_number = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_number)
		{
			min_number = arr[i];
		}

	}
	return min_number;
}
double minValueIn(double arr[], const int n)
{
	double min_number = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min_number)
		{
			min_number = arr[i];
		}

	}
	return min_number;
}

int maxValueIn(int arr[], const int n)
{
	int max_number = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_number)
		{
			max_number = arr[i];
		}

	}
	
	return max_number;
}
double maxValueIn(double arr[], const int n)
{
	double max_number = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max_number)
		{
			max_number = arr[i];
		}

	}
	
	return max_number;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}

	}

}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}

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
	cout << "сдвиг в право: " << endl;
	Print(arr, n);
	cout << endl;
	cout << "введите количество: "; cin >> number;
	ShiftR(arr, n, number);
	Print(arr, n);
	cout << endl;
	Sort(arr, n);
	Print(arr, n);

	double arr[n];
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

	double number;
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
	cout << "сдвиг в право: " << endl;
	Print(arr, n);
	cout << endl;
	cout << "введите количество: "; cin >> number;
	ShiftR(arr, n, number);
	Print(arr, n);
	cout << endl;
	Sort(arr, n);
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
	cout << "сдвиг в право: " << endl;
	Print(brr, m);
	cout << endl;
	cout << "введите количество: "; cin >> number;
	ShiftR(brr, m, number);
	Print(brr, m);
	cout << endl;
	Sort(brr, m);
	Print(brr, m);

}