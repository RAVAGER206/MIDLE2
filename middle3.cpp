#include<iostream>
#include"middle.h"
using namespace std;


int itc_mirror_count(long long a){ // 11
int b, i;
b = 0;
if(a > 0){
i = 1;
while (i <= a){
if (itc_mirror_num(i))
b = b + 1;
i = i + 1;
}
}
return b;
}


int itc_second_max_num(long long a){ // 12
int d, h, g, i;
h = 0;
i = 0;
if (a / 10 != 0){
if (a < 0)
a = a * (-1);{
g = itc_max_num(a);
while (a > 0){
d = a % 10;
if (g > d){
if (d > h)
h = d;
}
a = a / 10;
if (d == g)
i = i + 1;
}
if (i > 1)
return g;
return h;

}
}
return -1;
}


int itc_second_simple_max_num(long long a){ // 13
int d, h, g, i;
h = 0;
i = 0;
if (a / 10 !=0){
if (a < 0)
a = a*(-1);
g = itc_max_num(a);
while (a > 0){
d = a % 10;
if (g > d){
if (d > h)
h = d;
}
a = a / 10;
if (d == g)
i = i + 1;
}
if (i > 1)
return -1;
return h;
}
return -1;
}


long long itc_bin_num(long long a){ // 14
long long nch, d, i, g;
nch = 0;
i = 1;
if (a < 0)
a = a * (-1);
while (a > 0){
d = a % 2;
nch = nch * 10 + d;
a = a / 2;
if (nch == 0)
i = i * 10;
}
g = perevorot(nch) * i;
return g;
}


long long itc_oct_num(long long a){ // 15
long long nch, d, g, i;
nch = 0;
i = 1;
if (a < 0)
a = a * (-1);
while (a > 0){
d = a % 8;
nch = nch*10 + d;
a = a / 8;
if (nch == 0)
i = i * 10;
}
if (nch != 0){
g = perevorot(nch) * i;
return g;
}
return i;
}
