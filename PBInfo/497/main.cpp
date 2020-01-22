#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int nr[n][2];
    //nr[i][0] - valoarea
    //nr[i][1] - numar de repetitii

    for(int i = 0; i < n; i++){
        nr[i][0] = 0;
        nr[i][1] = 0;
    }

    int maxv = 0, maxval, val, x = 0;
    //maxv - numar de repetitii maxim
    //maxval - valoare maxima
    bool found = false;
    for(int i = 0; i < n; i++){
        cin >> val;
        found = false;
        for(int j = 0; j <= x && !found; j++){
            if(val == nr[j][0]){
                found = true;
                nr[j][1]++;
                if(maxv < nr[j][1]){
                    maxv = nr[j][1];
                    maxval = nr[j][0];
                }
            }
        }
        if(!found){
            nr[x][1]++;
            nr[x][0] = val;
            x++;
            if(maxv < nr[x][1]){
                maxv = nr[x][1];
                maxval = nr[x][0];
            }
        }

    }

    if(maxv > n / 2){
        cout << "DA " << maxval;
    }else{
        cout << "NU";
    }

    return 0;
}
