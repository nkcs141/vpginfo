#include <iostream>
using namespace std;

int main()
{
    int N;
	cin >> N;
	int a[N+1];   // 0-t�l indul a sz�moz�s, de nekunk 1-t�l N-ig kell
	a[1]=1;
	a[2]=2;
	for (int i=3; i<=N; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout << a[N];
	return 0;
}
