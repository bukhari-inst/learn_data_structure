#include <iostream>

using namespace std;

int main()
{
   int n;
    string nama1, nama2;
    cin >> n >> nama1 >> nama2;
    cout << endl;
    nama1 += nama2;
    int leng = nama1.length();
    for (int a = leng - n;; a -= n) {
        int b = n;
        if (a < 0) {
            b = n + a;
            a = 0;
        }
        cout<<endl;
        for (int z = b - 1; z >= 0; --z) {
            cout << nama1[a + z] << ' ';
        }
        if (b == 0) break;
    }
    return 0;


}
