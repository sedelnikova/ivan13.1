//Дано целое число N (> 0). 
//Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, . . . .

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, a;
	cout << "Введите кол-во элементов массива: ";
	cin >> N;
	int* arr = new int[N];
	arr[0] = 1;
	for (i = 1; i < N; i++)
	{
		arr [i] = arr [i-1] + 2;
	}
	for (i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}