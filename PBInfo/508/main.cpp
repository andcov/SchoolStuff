#include <iostream>

using namespace std;

int x[1000];

bool cauta(int x1, int n, int val){
    if(n == 1 && val != x[x1 + n / 2]){
        return false;
    }
    if(x[x1 + n / 2] > val){
        return cauta(x1, n/2, val);
    }else if(x[x1 + n / 2] < val){
        return cauta(x1 + n / 2 + 1, (n - 1)/2, val);
    }else{
        return true;
    }
}

int main()
{
    int n, m, aux;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> aux;
        cout << cauta(1, n, aux) << " ";
    }
    return 0;
}
