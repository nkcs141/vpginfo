#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    int negyzet;
    cin >>N;

    while (N>0)
    {
        negyzet=floor(sqrt(N));
        cout << negyzet << " ";
        N=N-negyzet*negyzet;

    }

	return 0;
}

