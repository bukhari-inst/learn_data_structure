/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Bukhori
 *
 * Created on September 8, 2019, 12:23 PM
 */

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
	
	printf("masukkan r untuk koordinat polar : \n");
	scanf("%lf",  &p1.r);
	printf("masukkan alpha untuk koordinat polar : \n");
	scanf("%lf",  &p1.alpha);

	k1.x = p1.r * cos(p1.alpha);
	k1.y = p1.r * sin(p1.alpha);

	printf("koordinat kartesian untuk polar r = %.2f alpha = %.2f adalah : \n", p1.r, p1.alpha);
	printf("x = %.2f y = %.2f\n", k1.x, k1.y);
}
