#include <iostream>

using namespace std;

int main() {
	int n;
	string str1, str2;
	cin >> n >> str1 >> str2;
	str1 += str2;
	int len = str1.length();
	for(int pos = len-n;;pos-=n) {
		int cou = n;
		if(pos<0) {
			cou = n + pos;
			pos = 0;
		}
		for(int z=cou-1;z>=0;--z) {
			cout << str1[pos+z] << ' ';
		}
		cout << endl;
		if(pos==0) break;
	}
}
