#include <iostream>

using namespace std;

int main() {
    int i,j,n;

    cout << "Masukkan nilai N: ";
    cin >> n;

    //int a = 0;
    for (i=0;i<=n;i++) {
        for (j=0;j<=i;j++) {
            //   int b = a + 1;
            cout << i + j;
        }
        cout << endl;
    }

    return 0;
}
