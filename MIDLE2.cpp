#include<iostream>
#include"MIDLE.h"
using namespace std;


long long perevorot(long long i){ // 6
long long g, nch;
nch = 0;
if (i < 0)
i = i * (-1);
while (i > 0){
g = i % 10;
nch = nch * 10 + g;
i = i / 10;
}
return nch;
}


int itc_min_num(long long a){ // 7
int g, h, l;
g = 10;
if (a == 0)
return 0;
if (a < 0)
a = a * (-1);
while (a > 0){
h = a % 10;
if (h < g){
g = h;
}
a = a / 10;
}
return g;
}


int itc_rev_num(long long a){ // 8
int g, rc, l;
rc = 0;
l = a;
if(a == -2147483648 || a == 2147483647){
return 10;
}
if (a == 0)
return 1;
if (a < 0)
a = a * (-1);
while (a > 0){
g = a % 10;
rc = rc * 10 + g;
a = a / 10;
}
if (l < 0)
rc = rc * (-1);
return itc_len_num(rc);
}


int itc_null_count(long long a){ // 9
if (a == 0)
return 1;
int g, h;
h = 0;
if (a < 0)
a = a * (-1);
while (a != 0){
g = a % 10;
if (g==0)
h = h + 1;
g = g * 0;
a = a / 10;
}
return h;
}


bool itc_mirror_num(long long a){ // 10
if (a >= 0){
long long nch, g;
nch = perevorot(a);
if (nch == a * (-1) || nch == a)
return 1;
}
return 0;
}
