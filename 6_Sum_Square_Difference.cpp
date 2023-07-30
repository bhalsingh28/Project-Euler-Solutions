#include <bits/stdc++.h>
using namespace std;

int main(){
    int sumsqr = 0;
    int sqrsum = 0;
    for(int i=1;i<=100;i++){
        sumsqr += i;
        sqrsum += (i*i);
    }
    sumsqr = sumsqr*sumsqr;

    cout << sumsqr-sqrsum;

}