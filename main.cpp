#include <QCoreApplication>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a1(argc, argv);
    int tries;
    cin >> tries;
    while (tries--)
    {
        int N;
        cin >> N;
        vector <int> a (N, 0);
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < N; i++)
        {
            for (int k = i + 1; k < N; k++)
            {
                if ( a[k] < a[i] )
                {
                    swap( a[k] , a[i] );
                }
            }
        }
        int Nkomb = 1;
        for (int n = N - 1; n >= 0 ; n--)
        {
            if( a[n] > n )
            {
                Nkomb = 0;
                break;
            }
            Nkomb = Nkomb * (n - a[n] + 1);
        }
        cout << Nkomb << endl;
    }
    return a1.exec();
}
