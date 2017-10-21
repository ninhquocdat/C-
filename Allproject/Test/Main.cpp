#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
using namespace std;
long test, n;

void xuli()
{
	cin >> n;
	long tmp = 0, dem = 1;
	while (n / 10 != 0)
	{
		tmp = (n % 10 + tmp >= 5);
		n = n / 10; dem = dem * 10;
	}
	cout << (n + tmp)*dem << endl;
}

int main()
{
	freopen("input.txt", "r", stdin);
	cin >> test;
	for (long i = 1; i <= test; i++)
		xuli();
	_getch();
	return 0;
}