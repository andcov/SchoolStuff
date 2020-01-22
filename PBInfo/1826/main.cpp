#include <iostream>

using namespace std;

int zerof(int n){
    int c2 = 0, c5 = 0, aux;
    for(int i = 2; i <= n; i++){
        aux = i;
        while(aux % 2 == 0){
            aux /= 2;
            c2++;
        }
        while(aux % 5 == 0){
            aux /= 5;
            c5++;
        }
    }
    if(c2 > c5){
        switch(c2, c5);
    }
    return c5;
}

int main()
{
    cout << zerof(6);
    return 0;
}
