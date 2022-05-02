#include<iostream>

using namespace std;

int Fibonacci1(int num)
{
	if (num == 1)
		return 1;
	else if (num == 2)
		return 1;
	else
	{
		return Fibonacci1(num - 1) + Fibonacci1(num - 2);
	}
}

void main()
{
	int num;
	cin >> num;
	
	cout << Fibonacci1(num) << endl;
}