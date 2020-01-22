#include <iostream>
#include <cmath>

using namespace std;

void FRadical(int n, int &x, int &y){
    int rad, i;
    rad = (int) sqrt((double) n);
    for(i = rad; i >= 1; i--){
        if(n % (i * i) == 0){
            x = i;
            break;
        }
    }
    y = n / (x * x);
}

int main()
{
    int x, y;
    FRadical(15000, x, y);
    cout << x << " " << y;
    return 0;
}
