
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	b = 1; c = 1;
	while (b<=a)
	{
		if (a % b == 0) c=c*b;
		b++;
	}
	cout << c;
}




