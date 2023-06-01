#include <iostream>
using namespace std;
int main()
{
	int max = 0;
	int a, n, c,col;
	cin >> a;
	while (a>0)

	{
		n = a % 10;
		if (n > max) max = n;

		a /= 10;

	}
	cout << max << endl;
    return 0;
}
