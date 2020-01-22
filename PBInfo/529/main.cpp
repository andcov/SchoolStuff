#include <iostream>

using namespace std;

int v[10][2];

int main()
{
    int n, a;
    for(int i = 0; i < 10; i++){
        v[i][1] = i;
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        while(a > 0){
            int aux = a % 10;
            v[aux][0]++;
            if(a % 10 < 9){
                while( ( ( (aux + 1) < 10) && (v[aux][0] > v[aux + 1][0]) ) || ( (v[aux][1] > v[aux + 1][1]) && (v[aux][0] == v[aux + 1][0]))){
                    switch(v[aux][0], v[aux + 1][0]);
                    switch(v[aux][1], v[aux + 1][1]);
                    aux++;
                }
            }
            a /= 10;
        }
    }
    for(int i = 0; i < 10; i++){
        cout << v[i][0] << " " << v[i][1] << endl;
    }
    return 0;
}
