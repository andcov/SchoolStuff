#include <iostream>

using namespace std;

int sumcif(int n){
    int a;
    if(n != 0){
        a = n % 10 + sumcif(n / 10);
    }else{
        a = 0;
    }
    return a;
}

int main()
{
    cout << sumcif(1536);
    return 0;
}
