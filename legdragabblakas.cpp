#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int ar;
    int lakas[N];
    for (int i=0; i<N; i++)
    {
        cin >> ar >> lakas[i];
    }

    int maxhely = 0;
    int maxertek = 0;
    for (int i=0; i<N; i++)
    {
        if (lakas[i] < maxertek)
        {
            maxertek = lakas[i];
            maxhely = i+1;
        }

    }

    cout << maxertek;

	return 0;
}
