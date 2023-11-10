#include <iostream>
using namespace std;

int main()
{
    int N, ar, tav;
    cin >> N;
    for (int i=1; i<=N; i++)
    {
        cin >> tav >> ar;
        if(ar/tav > 100);
        {
            cout << ar/tav;
        }
    }

	return 0;
}
