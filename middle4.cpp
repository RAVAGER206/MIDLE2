#include<iostream>
#include"middle.h"
using namespace std;


int itc_rev_bin_num(long long a){ // 16
int d, i, nch;
i = 1;
nch = 0;
while (a > 0){
d = a % 10;
nch = nch + d*i;
i = i * 2;
a = a / 10;
}
return nch;
}
