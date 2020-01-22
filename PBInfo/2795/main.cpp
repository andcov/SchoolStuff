#include <iostream>

using namespace std;

int resturi(int n, int x, int y, int r){
    int m, a, b, rest, cx, cy;
    cx = x;
    cy = y;
    rest = cx % cy;
    while(rest != 0){
        cx = cy;
        cy = rest;
        rest = cx % cy;
    }
    m = x / cy * y;
    a = 0;
    b = n / m;
    if(m * b + r > n){
    	return b - a;
    }
    return b - a + 1;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
