// ConsoleApplication103.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

int Fib(int n) {
	vector <int> v(2);
	v[0] = 1;
	v[1] = 1;
	for (int i = 2; i <= n; i++) {
		v.push_back(v[i - 1] + v[i - 2]);
	}
	return v[v.size() - 2];
}
int main()
{
	int n;
	cin >> n;
	cout << Fib(n);
	return 0;
}