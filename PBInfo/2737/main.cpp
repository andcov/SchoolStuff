#include <iostream>
#include<fstream>

using namespace std;

ifstream in("nrdivprod.in");
ofstream out("nrdivprod.out");

int v[1000000];

int main()
{
    int n, aux, d, e, maxv = -1, nrdiv = 1;
    in >> n;
    for(int i = 0; i < n; i++){
        in >> aux;
        d = 2;
        while(aux != 1){
            e = 0;
            while(aux % d == 0){
                aux /= d;
                e++;
            }
            if(e != 0){
                v[d] += e;
            }
            d++;
        }
        if(d > maxv){
            maxv = d;
        }
    }
    for(int i = 2; i < maxv; i++){
        nrdiv *= v[i] + 1;
    }
    out << nrdiv;
    return 0;
}
#include <iostream>
#include<fstream>

using namespace std;

ifstream in("nrdivprod.in");
ofstream out("nrdivprod.out");

int v[1000000];

int main()
{
    int n, aux, d, e, maxv = -1, nrdiv = 1;
    in >> n;
    for(int i = 0; i < n; i++){
        in >> aux;
        d = 2;
        while(aux != 1){
            e = 0;
            while(aux % d == 0){
                aux /= d;
                e++;
            }
            if(e != 0){
                v[d] += e;
            }
            d++;
        }
        if(d > maxv){
            maxv = d;
        }
    }
    for(int i = 2; i < maxv; i++){
        nrdiv *= v[i] + 1;
    }
    out << nrdiv;
    return 0;
}
