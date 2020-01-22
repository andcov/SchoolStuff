#include <iostream>
#include <fstream>

using namespace std;

ifstream in("parcare.in");
ofstream out("parcare.out");

int main()
{
    int z1, l1, h1, m1;
    int z2, l2, h2, m2;
    int pret, c, dif, p, z;
    in >> z1 >> l1 >> h1 >> m1 >> z2 >> l2 >> h2 >> m2 >> pret >> c;

    dif = m2 + h2 * 60 + z2 * 1440 - m1 - h1 * 60 - z1 * 1440;

    if(dif % 60 == 0){
        p = pret * (dif / 60);
    }else{
        p = pret * (dif / 60 + 1);
    }
    if(d <= 15){
        p = 0;
    }

    if(c == 1){
        out << dif;
    }else{
        out << p;
    }
    return 0;
}
