#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

class LuasDaerah
{
public:
    LuasDaerah();
    void input();
    bool proses();
    void output();
private:
    int pin;
};

LuasDaerah:: LuasDaerah()
{
    cout<< endl;
    cout<<"================SELAMAT DATANG DI LUAS DAERAH================="<<endl;
    cout<<endl<<endl;
}

void LuasDaerah::input()
{
    cout<<"Masukan PIN Luas Daerah : ";
    cin>>pin;
}

bool LuasDaerah::proses()
{
    if (pin != 201030)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void LuasDaerah::output()
{
        cout<<"Pilih Menu luas daerah :"<<endl;
        cout<<"1. Luas Persegi"<<endl;
        cout<<"2. Luas Persegi Panjang"<<endl;
        cout<<"3. Luas Lingkaran "<<endl;
        cout<<"4. Keluar "<<endl;
}

void persegi()
{
    int luas, s;
    cout<< endl;
    cout<< "Inputkan Panjang Sisi Persegi : ";
    cin>> s;
    cout<<endl;

    luas = s * s;

    cout<< "Luas Persegi = "<< luas<< endl;
}

void persegipanjang ()
{
    int luas, p, l;
    cout<<endl;
    cout<< "Inputkan Panjang Persegi Panjang : ";
    cin>> p;
    cout<< endl;
    cout<< "Inputkan Lebar Persegi Panjang : ";
    cin>> l;
    cout<<endl;

    luas = p*l;
    cout<< "Luas Persegi Panjang = "<< luas<< endl;
}

void lingkaran()
{
    float luas, r;
    const float phi = 3.14;
    cout<<endl;
    cout<< "Inputkan Jari-Jari Lingkaran : ";
    cin>> r;

    luas = phi * r * r;
    cout << "Luas Lingkaran = "<< luas<<endl;
}

int main(int argc, char *argv[])
{
    bool u = true;
    while (u)
    {
        LuasDaerah go;
        int pilih;
        for (int i=1; i<=1; i++)
        {
            go.input();
            if (go.proses()==true)
            {
                go.output();
                break;
            }
            else
                cout<<"Pin yang anda masukan salah, silakan coba lagi"<<endl<<endl;
            exit(pilih);
        }

        cout<<endl;
        cout<< "Pilihan : ";
        cin>>pilih;
        cout<< endl;

        switch (pilih)
        {
        case 1:

            persegi();
            break;

        case 2:
            persegipanjang();
            break;

        case 3:
            lingkaran();
            break;

        case 4:
            exit(pilih);
            break;

        default:
            cout<< "Pilihan Yang Anda Inpukan Salah! Ulangi!"<<endl;
            exit(pilih);
            break;

        }
    }
}
