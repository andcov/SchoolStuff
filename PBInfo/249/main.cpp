#include <iostream>
#include <fstream>

using namespace std;

//ifstream in("pozitiex.in");
//ofstream out("pozitiex.out");

ifstream in("positionx.in");
ofstream out("positionx.out");

int main()
{
    int n, i, x, pos, a;
    bool ok = false;
    in >> x >> n;
    pos = 1;

    for(i = 0; i < n; i++){
        in >> a;
        if(a == x){
            ok = true;
        }else{
            if(a < x){
                pos++;
            }
        }
    }
    if(ok){
        out << pos;
    }else{
        out << "NU EXISTA";
    }
    return 0;
}
