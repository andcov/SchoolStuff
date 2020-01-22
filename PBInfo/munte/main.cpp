#include <iostream>

using namespace std;

int main()
{
    int n, x, c;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        c = x % 10;
        x /= 10;
        if(c >= x % 10){
            cout << "0\n";
        }else{
            while(c < x % 10 && x != 0){
                c = x % 10;
                x /= 10;
            }
            if(x == 0){
                cout << "0\n";
            }else{
                while(c > x % 10 && x != 0){
                    c = x % 10;
                    x /= 10;
                }
                if(x != 0){
                    cout << "0\n";
                }else{
                    cout << "1\n";
                }
            }
        }
    }
    return 0;
}
