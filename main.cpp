#include <iostream>
#include <random>

using namespace std;

int Sum_N(int x)
{
	int sum_i = 0;
	int digit_x;
	while (x > 0)
	{
		digit_x = x % 10;
		sum_i += digit_x;
		x /= 10;
	}
	return sum_i;
}
int Slayer(int x)
{
	while (x > 10)
	{
		x /= 10;
	}
	return x;
}
int main()
{
	int* m = new int[1000];
	setlocale(LC_ALL, "rus");
	int i, j;
	int len;
	cout << "Введите число цифр < 1000" << endl;;
	cin >> len;
	for (i = 0; i < len; i++)
	{
		m[i] = rand() % 1000;
	}
	for (i = 0; i < len; i++)
		for (j = 0; j < len; j++)
			if ((Sum_N(m[i]) < Sum_N(m[j])) or
				(Sum_N(m[i]) == Sum_N(m[j]) and (Slayer(m[i]) < Slayer(m[j]))) or
				((Sum_N(m[i]) == Sum_N(m[j])) and (Sum_N(m[i]) == Sum_N(m[j]) and (m[i] < m[j]))))
			{
				int buble = m[i];
				m[i] = m[j];
				m[j] = buble;
			}
	for (i = 0; i < len; i++)
		cout << m[i] << "  ";
	delete[] m;
}