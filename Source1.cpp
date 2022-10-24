#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number : ";
	cin >> n;
	int flag=1;

	for (int j = 2; j <= n / 2; j++)
	{
		if (n % j == 0)
		{
			flag = 0;
		}

	}
	if (flag == 1)
	{
		cout << n << " is a prime number " << endl;

	}
	else
		cout << n << " is not a prime number " << endl;

	return 0;
}