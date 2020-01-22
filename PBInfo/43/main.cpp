#include <iostream>

using namespace std;

double nreal(int x, int y){
    double m = 0.0;
    while(y != 0){
        m = m / 10 + y % 10;
        y /= 10;
    }
    return x + m / 10;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << endl << nreal(a, b);
    return 0;
}
