#include <iostream>
#include <algorithm>

#define M 100005

using namespace std;

int main()
{
    int v[M], s[M], d[M], maxv, i, n;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> v[i];
    }

    maxv = 0;
    for(i = 0; i < n; i++){
        s[i] = maxv;
        if(v[i] > maxv){
            maxv = v[i];
        }
    }

    maxv = 0;
    for(i = n - 1; i >= 0; i--){
        d[i] = maxv;
        if(v[i] > maxv){
            maxv = v[i];
        }
    }

    maxv = 0;

    for(i = 0; i < n; i++){
        maxv += max(0, min(d[i], s[i]) - v[i]);
    }

    cout << maxv;
    return 0;
}
