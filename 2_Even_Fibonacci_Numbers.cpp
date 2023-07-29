#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 100;
    int sum = 0;

    int n1 = 1, n2 = 2, next, temp;
    sum += 2;
    for(int i=2;i<n;i++){
        next = n1+n2;
        n1 = n2;
        n2 = next;
        if(next%2==0) sum+= next;
        if(next>=4000000) break;
    }

    cout << sum;

}