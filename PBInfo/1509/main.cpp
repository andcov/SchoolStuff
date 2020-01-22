#include <iostream>
#include <cmath>

using namespace std;

int nrmaxim(int a){
    int x, nr, last, maxv = 0;

    x = a;
    nr = 0;

    while(x > 0){
        x /= 10;
        nr++;
    }

    x = a;

    do{
        last = x % 10;
        x /= 10;
        for(int i = 0; i < nr - 1; i++){
            last *= 10;
        }
        x = last + x;
        if(maxv <= x){
            maxv = x;
        }
    }while(x != a);
    return maxv;
}

int main()
{
    cout << nrmaxim(1243);
    return 0;
}
