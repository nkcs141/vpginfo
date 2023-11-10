#include <iostream>
using namespace std;

int main()
{
    int N;
	cin >> N;
	int a[N+1];   // 0-tól indul a számozás, de nekunk 1-tõl N-ig kell
	a[1]=1;
	a[2]=2;
	for (int i=3; i<=N; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout << a[N];
	return 0;
}
