#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream in("transform.in");
ofstream out("transform.out");

int main()
{
    long long n, p, d, x;
    for(int j = 0; j < 5; j++){
        in >> n >> p >> d;
        x = n;
        int i = 0, cif, c;

        //se gaseste a p-ea cifra si nr format din cifrele pana la a p-ea cifra
        while(i < p){
            cif = x % 10;
            x /= 10;
            i++;
        }
        //se verifica cele 2 cazuri
        if(cif < 5){
            cif += d;
            //se inlocuieste cifra
            x = x * 10 + cif % 10;
            i--;
            //se adauga 0-uri
            while(i > 0){
                x *= 10;
                i--;
            }
        }else{
            cif -= d;
            cif = abs(cif);
            //ce calculeaza cifra
            while(cif > 0){
                c = cif % 10;
                cif /= 10;
            }
            //se inlocuieste cifra
            x = x * 10 + c;
            i--;
            //se adauga 0-uri
            while(i > 0){
                x *= 10;
                i--;
            }
        }
        out << x << " ";
    }
    return 0;
}
