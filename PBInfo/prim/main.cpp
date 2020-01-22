#include <iostream>

using namespace std;

int norocoase(int a, int b){
    int k = (b - a)/2 + 1;
    if(a % 2 == 0 && b % 2 == 0){
        k--;
    }
    return k;
}

int main()
{
    cout << norocoase(1, 15);
    return 0;
}
