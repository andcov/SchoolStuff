#include <iostream>

using namespace std;

int main()
{
    int n, v[100], i = 0, j, t, k, counter = 0, j_;
    cin >> n >> t >> k;
    for(i = 0; i < n; i++){
        cin >> v[i];
    }
    i = 0;
    while(i < n){
        j = i;
        while(v[j] <= t && j < n){
            j++;
        }
        j_ = j;
        j = j - i;
        if(j - (k - 1) > 0){
            counter += j - (k - 1);
        }
        i = j_ + 1;
    }
    cout << counter;
    return 0;
}
