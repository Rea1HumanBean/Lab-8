#include <iostream>

int main()
{
	unsigned long long b = 1231012;
	unsigned char mas[8];
	for ( int i = 7; i >= 0; i--)
	{
	mas[i] = (*((unsigned char*)&b+i));
	std::cout << int(mas[i]) << std::endl;
	}
}