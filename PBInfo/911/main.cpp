#include <iostream>

using namespace std;

void numar(int n, int k, int &r){
    int v[10] = {0}, i, p;
    while(n > 0){
        v[n % 10]++;
        n /= 10;
    }
    r = 0;
    p = 0;
    for(i = 9; i >= 0; i--){
        while(v[i] != 0 && p < k){
            r *= 10;
            r += i;
            p++;
            v[i]--;
        }
    }
}

int main()
{
    int x;
    numar(2795499, 3, x);
    cout << x;
    return 0;
}
