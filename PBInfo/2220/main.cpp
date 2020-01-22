#include <iostream>

using namespace std;

int main()
{
    int n, maxv = 0, v[100000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] - v[j] > maxv){
                maxv = v[i] - v[j];
            }
        }
    }
    cout << maxv;
    return 0;
}
