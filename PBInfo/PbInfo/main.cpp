#include <iostream>

using namespace std;

int main(){
    int n, d, dif = 0, x;
    bool ok;
    cin >> n;
    if(n % 2 == 0){
        dif = 2;
    }else {
        for(dif = 3; dif < n / 2; dif += 2){
            if(n % dif == 0){
                break;
            }
        }
    }
    if(dif == 0){
        cout << "NU";
        return 0;
    }

    x = n / dif;
    if(x == dif){
        cout << "NU";
        return 0;
    }
    ok = true;
    for(d = 3; d * d <= x && ok; d += 2){
        if(x % d == 0){
            ok = false;
        }
    }

    if(ok){
        cout << "DA";
    }else{
        cout << "NU";
    }
    return 0;
}

