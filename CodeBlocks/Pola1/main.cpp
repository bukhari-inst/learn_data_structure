#include <iostream>

using namespace std;

int main()
{
    // deklarasi variabel untuk input
    int inputpertama, inputkedua;

    // proses input
    cin >> inputpertama >> inputkedua;
    int K = inputkedua;

    int PolaUkuran[inputpertama];

    for (int a=1; a<=inputpertama; a++)
    {
        if (K == a)
        {
            cout << "* ";
            K = K + inputkedua;
            continue;
        }
        cout << a << " ";
    }

    return 0;
}
