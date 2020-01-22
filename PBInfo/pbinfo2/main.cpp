#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n = 0, x, m = 0, e = 0, d = 3, et = 0;
    cin >> n;
    x = n;

    while(x % 2 == 0){
        x /= 2;
        e++;
    }
    if(e != 0){
        m++;
        et += e;
    }

    while(x > 1 && d * d <= n){
        e = 0;
        while(x % d == 0){
            x /= d;
            e++;
        }
        if(e != 0){
            m++;
            et += e;
        }
        d += 2;
    }
    if(x != 1 ){
    	m++;
        et++;
    }
    if(m == 1 && et == 1){
        cout << "prim";
    }else if(m == 1 && et == 2){
        cout << "patrat prim";
    }else if(m == 2 && et == 2){
        cout << "aproape prim";
    }else{
        cout << "compus";
    }
    return 0;
}
