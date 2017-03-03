#include <iostream>

int Fib(int n);

int main()
{
	unsigned long Result = 0;

	for (int n=1; Fib(n) < 4000000; n++)
	{
		if (Fib(n) % 2 == 0)
		{
			Result += Fib(n);
		}
	}

	std::cout << "Result = " << Result << std::endl;
	return 0;
}

int Fib(int n)
{
	if (n == 1)
		return 1;

	if (n == 2)
		return 2;

	else
		return Fib(n - 1) + Fib(n - 2);
}
