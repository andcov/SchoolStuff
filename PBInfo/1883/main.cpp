#include <iostream>

using namespace std;

int main()
{
    int n = 0, j;
    cin >> n;
    int a[10000];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(a[i] < a[j]){
                cout << a[j] << " ";
                break;
            }
        }
        if(j > n){
            cout << "-1 ";
        }
    }
    cout << "-1 ";
    return 0;
}
