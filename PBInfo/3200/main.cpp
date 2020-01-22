#include <iostream>

using namespace std;

int main()
{
    long long n, k, a, ck = 0, s = 0, r8, r9;
    cin >> k >> n;
    a = k;
    while(a > 0){
        ck++;
        s += a % 10;
        a /= 10;
    }
    r9 = n * s % 9;
    if(ck >= 3){
        a = k % 10 + 10 * (k / 10 % 10) + 100 * (k / 100 % 10);
        r8 = a % 8;
    }else{
        if(ck == 1){
            if(n == 1){
                r8 = k % 8;
            }else if(n == 2){
                a = 11 * k;
                r8 = a % 8;
            }else{
                a = k * 111;
                r8 = a % 8;
            }
        }
        if(ck == 2){
            if(n == 1){
                r8 = k % 8;
            }else{
                a = k * 101;
                r8 = a % 8;
            }
        }
    }
    int r = 9 * r8 - 8 * r9;
    if(r < 0){
        r += 72;
    }
    cout << r;
    return 0;
}
