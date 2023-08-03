#include <bits/stdc++.h>
using namespace std;


int main() {
    int counter = 1;
    int divisor = 1;
    int n = 20;

    while (divisor <= n) {
        if (counter % divisor == 0) {
            divisor++;
        } 
        else {
            divisor = 1;
            counter++;
        }
    }
    cout << counter;
    return 0;
}