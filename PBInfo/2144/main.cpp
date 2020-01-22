#include <iostream>

using namespace std;

int diafantic(int n, int s[], int a, int b, int c){
    int x[50000], y[50000], i, kx, ky;
    kx = 0;
    for(i = 1; i <= n; i++){
        if(a * s[i] * s[i] <= c){
            kx++;
            x[kx] = s[i];
        }else{
            break;
        }
    }

    ky = 0;
    for(i = 1; i <= n; i++){
        if(b * s[i] * s[i] <= c){
            ky++;
            y[ky] = s[i];
        }else{
            break;
        }
    }

    int k, j;
    k = 0;
    for(i = 1; i <= kx; i++){
        for(j = 1; j <= ky; j++){
            if(i != j){
                if(a * x[i] * x[i] + b * y[j] * y[j] == c){
                    k++;
                }
            }

        }

    }
    return k;

}

int main()
{
    int n = 5, s[10] = {0, 0, 3, 4, 5, 18}, a = 1, b = 1, c = 25;
    cout << diafantic(n, s, a, b, c) << endl;
    return 0;
}
