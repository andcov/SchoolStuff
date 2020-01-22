#include <iostream>

using namespace std;

void perfect(int a, int b){

    int sum = 0;
    bool found = false;

    for(int i = b; i >= a; i--){
        sum = 1;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                sum += j;
                sum += i / j;
            }
        }
        if(sum == i){
            cout << i << " ";
            found = true;
        }

    }
    if(!found){
        cout << "nu exista";
    }
}

int main()
{
    perfect(5, 30);
    return 0;
}
