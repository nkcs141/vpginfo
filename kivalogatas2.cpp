#include <iostream>
using namespace std;

int main()
{
    int N, ar, tav;
    cin >> N;
    cout << "DB:" << N << endl;
    for (int i=1; i<=N; i++)
    {
        cin >> tav >> ar;

        cout << "Tav:" << tav << " - ar:" << ar << endl;
        if(ar/tav > 100);
        {
            cout << "ar/tav > 100: " << ar/tav << endl;
        }
    }

	return 0;
}
