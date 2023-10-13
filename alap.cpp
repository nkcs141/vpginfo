#include <iostream>
using namespace std;

constexpr int fib(int n)
{
	return n <= 1 ? n : fib(n - 1) + fib(n - 2);
}

int main(int argc, char* argv[])
{	
	if (argc < 2)
	{
		cout << "Usage: " << argv[0] << " <number>" << endl;
		return 1;
	}

	int n = atoi(argv[1]);

	cout << "fib(" << n << ") = " << fib(n) << endl;
	return 0;
}
