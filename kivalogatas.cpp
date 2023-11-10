#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N
    int meres;
    int db;

    for (int i=1 ; i<=N; i++)
    {
        cin >> meres;
        if (meres > 0)
        {
            db = db+1;   // vagy: db+++;
        }
    }
    cout << db;
	return 0;
}
