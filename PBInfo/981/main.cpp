#include <iostream>

using namespace std;

int main()
{
    int n, val, counter = 0, maxc = 0;
    bool az = false;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> val;
        az = false;
        while(val > 0 && !az){
            if(val % 2 == 0){
                counter = 0;
                az = true;
            }else{
                val /= 2;
            }
        }
        if(az == false){
            counter++;
        }
        if(counter > maxc){
            maxc = counter;
        }
    }
    cout << maxc;
    return 0;
}
