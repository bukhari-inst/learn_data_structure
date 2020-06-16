#include <bits/stdc++.h>
#define aku using
#define ganteng namespace
aku ganteng std;

struct polar{
	double r;
	double alpha;
}p1;

struct kartesian{
	double x;
	double y;
}k1;

int main(){
	// 3. Penggunaan struktur pada konversi koordinat polar ke koordinat catersian
	printf("masukkan r untuk koordinat polar : \n");
	scanf("%lf",  &p1.r);
	printf("masukkan alpha untuk koordinat polar : \n");
	scanf("%lf",  &p1.alpha);

	k1.x = p1.r * cos(p1.alpha);
	k1.y = p1.r * sin(p1.alpha);

	printf("koordinat kartesian untuk polar r = %.2f alpha = %.2f adalah : \n", p1.r, p1.alpha);
	printf("x = %.2f y = %.2f\n", k1.x, k1.y);
}
