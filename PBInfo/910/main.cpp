#include <iostream>

using namespace std;

void prefix(int n, int k, int &x){
    int aux, counter = 0;
    aux = n;
    while(aux != 0){
        counter++;
        aux /= 10;
    }
    for(int i = 0; i < counter - k; i++){
        n /= 10;
    }
    x = n;
    cout << x;
}

int main()
{
    int x;
    prefix(27594, 5, x);
    return 0;
}
