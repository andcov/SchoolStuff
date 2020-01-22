#include <iostream>

using namespace std;

int main()
{
    int n, v[1001], j, st, dr;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        j = n - 1;
        while(v[j] != v[i] && i < j){
            j--;
        }
        if(dr - st + 1 <= j - i + 1){
            st = i + 1;
            dr = j + 1;
        }
        if(n - i < dr - st + 1){
            break;
        }
    }
    cout << st << " " << dr;
    return 0;
}
