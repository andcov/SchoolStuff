#include <iostream>
#include <fstream>

using namespace std;

ifstream in("sumaxl.in");
ofstream out("sumaxl.out");

int main()
{
    int n, ma[101], mi[11], minv, k = 0, c = 0, j;
    in >> n;
    for(int i = 0; i < n; i++){
        in >> ma[i];
        cout << ma[i];
    }
    in >> minv;
    cout << " " << minv << endl;
    while(minv != 0){
        mi[k] = minv % 10;
        minv /= 10;
        k++;
    }
    /*for(int i = 0; i < n; i++){
        cout << ma[i];
    }
    cout << endl;
    for(int i = k - 1; i >= 0; i--){
        cout << mi[i];
    }
    cout << endl;*/
    mi[k+1] = 0;
    for(j = 1; j <= k; j++){
        cout << ma[n - j] << " " << mi[j - 1] << "; ";
        ma[n - j] += mi[j - 1] + c;
        c = ma[n - j] / 10;
        cout << ma[n - j] << " " << c << "; ";
        ma[n - j] = ma[n - j] % 10;
        cout << ma[n - j] << endl;
    }
    while(c != 0 && j <= n){
        ma[n - j] += c;
        c = ma[n - j] / 10;
        ma[n - j] = ma[n - j] % 10;
        j++;
    }
    if(c != 0){
        ma[n] = 1;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        out << ma[i];
        cout << ma[i];
    }
    return 0;
}
