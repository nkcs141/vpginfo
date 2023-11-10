#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int homerseklet[N];
    for (int i=0; i<N; i++)
    {
        cin >> homerseklet[i];
    }

    int minhely = 0;
    int minertek = 101;
    for (int i=0; i<N; i++)
    {
        if (homerseklet[i] < minertek)
        {
            minertek = homerseklet[i];
            minhely = i+1;
        }

    }

    cout << minertek;

	return 0;
}
