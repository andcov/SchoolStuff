#include <iostream>

using namespace std;

int v[101];

int main()
{
    int n, a, nr = 0;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> a;
        v[a]++;
        if(v[a] % 2 == 0){
            nr++;
        }
    }
    cout << nr;
    return 0;
}
