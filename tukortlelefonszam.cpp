#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string tel[N];
    for(int i=0; i<N; i++)
    {
        cin >> tel[N];
    }

    for(int i=0; i<N; i++)
    {
        if(tel[i][0]==tel[i][7] && tel[i][1]==tel[i][6] && tel[i][2]==tel[i][5] && tel[i][3]==tel[i][4])
        {
            cout << tel[i] << endl;
        }
        else
        {
            if(tel[i][0]!='1' && tel[i][0]==tel[i][1])
            {
                  cout << tel[i] << endl;
            }
            else
            {
                if(tel[i][0]!='1' && tel[i][2]==tel[i][7] && tel[i][3]==tel[i][6] && tel[i][4]==tel[i][5])
                {
                    cout << tel[i] << endl;
                }
            }
        }
    }

    cout << tel[0][3];

	return 0;
}
