#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
	int* p1 = new int;
	int* p2 = new int;
	cout << "Введіть перше значення:\n";
	cin >> *p1;
	cout << "Введіть друге значення:\n";
	cin >> *p2;
	cout << "Адреса першої ділянки: " << p1 << endl;
	cout << "Адреса другої ділянки: " << p2 << endl;
	int logicalAnd = *p1 & *p2;
	cout << "Результат операції логічного І: " << logicalAnd << endl;
	delete p1;
	delete p2;
	int n;
	cout << "Введіть число елементів масиву: ";
	cin >> n;
	double* arr = new double[n];
	cout << "Введіть " << n << " дійсних чисел:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cout << "[" << arr[i] << "]";
	}
	int count = 0;
	for (int i = 0; i < n; i++) { //визначення цілої частини
		if (arr[i] < 0) {
			count++;
		}
	}
	cout << "\nКількість елементів, ціла частина яких менша за 0: " << count << endl;
	double result = 1.0;
	int min_index = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < arr[min_index]) { // визначення мінімального індекса
			min_index = i;
		}
	}
	for (int i = 0; i < min_index; i++) {
		result = result * arr[i];
	}
	cout << "Добуток елементів перед мінімальним: " << result << endl;
	int k;
	double temp;
	cout << "Введіть значення К для зсуву: " << endl; // зсув
	cin >> k;
	for (int i = 0; i < k; i++) {
		temp = arr[n - 1];
		for (int j = n - 1; j > 0; j--) {
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
	cout << "Масив після зсуву: ";
	for (int i = 0; i < n; i++) {
		cout << "[" << arr[i] << "]";
	}
	cout << endl;
	delete[] arr;
	
}
