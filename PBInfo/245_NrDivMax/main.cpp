#include <iostream>
#include <cmath>

using namespace std;

void numar(){

}

int main()
{
    int n = 0, m = 0;
    cin >> n;

    m = sqrt(n);
    int lis[m];

    for(int i = 2; i < m; i++){
        if(lis[i] != -1){
            for(int j = i + 1; j < m; j++){
                if(j % i == 0){
                    lis[j] = -1;
                }
            }
        }
    }
    cout << m;
    return 0;
}
