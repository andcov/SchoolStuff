#include <iostream>

using namespace std;

int sumfactcif(int a){
    int cif, fact, s = 0;

    while(a != 0){
        fact = 1;
        cif = a % 10;
        a /= 10;
        for(int i = 1; i <= cif; i++){
            fact *= i;
        }
        s += fact;
    }
    return s;
}

int main()
{
    cout << sumfactcif(400);
    return 0;
}
