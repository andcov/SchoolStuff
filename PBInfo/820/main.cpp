#include <iostream>

using namespace std;

void factorial(int n, int &f){
    if(n > 0){
        int a;
        factorial(n - 1, &a);
        f = n * a;
    }else{
        f = 1;
    }
}

int main()
{
    int a;
    factorial(6, a)
    cout << a;
    return 0;
}
