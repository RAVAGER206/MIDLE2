#include<iostream>
#include"MIDLE.h"
using namespace std;


void itc_num_print(long a){ // 1
cout << a;
}


int itc_len_num(long long a){ // 2
int g;
g = 0;
if (a == 0)
return 1;
if (a < 0)
a = a * (-1);
while (a>0){
g = g + 1;
a = a / 10;
}
return g;
}


int itc_sum_num(long long a){ // 3
int g, sc;
sc = 0;
if (a < 0)
a = a * (-1);
while (a>0){
g = a % 10;
sc = sc + g;
a = a / 10;
}
return sc;
}


long long itc_multi_num(long long a){ // 4
long long g, pc;
pc = 1;
if (a < 0)
a = a * (-1);
while (a > 0){
g = a % 10;
pc = pc * g;
a = a / 10;
}
return pc;
}


int itc_max_num(long long a){ // 5
int g, h;
g = 0;
if (a < 0)
a = a * (-1);
while (a>0){
h=a%10;
if (h>g)
g = h;
a = a / 10;
}
return g;
}
