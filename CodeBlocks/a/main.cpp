#include <iostream>

using namespace std;

int main()
{
   int nilai, jumlah,data_a,simpan,pangkat;

    cout<< "Inputkan Jumlah Data : ";
    cin>> jumlah;
    cout<<endl;

    int data[jumlah];

    for(int a = 0; a<jumlah; a++)
    {
        cout<< "Inputkan Data ke "<< a + 1<< " : ";
        cin>> data[a];
        /*pangkat = 2;
        simpan = pow(data[a],2);
        cout<<endl;
        cout<<simpan;*/
    }

    for(int a = 0; a<jumlah; a++){
        cout<< data[a];
        simpan = pow(data[a],2);
        cout<<endl;
    }


}
