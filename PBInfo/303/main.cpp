#include <iostream>
#include <fstream>

using namespace std;

ifstream in("eratostene.in");
ofstream out("eratostene.out");

int main()
{
    int n = 0, maxv = 0, counter = 0;
    in >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        in >> v[i];
        maxv = (maxv < v[i]) ? v[i] : maxv;
    }
    bool era[maxv + 1];
    for(int i = 1; i <= maxv; i++){
        era[i] = true;
    }

    for(int i = 2; i * 2 <= maxv; i++){
        if(era[i] == true){
            for(int j = i * 2; j <= maxv; j += i){
                era[j] = false;
            }
        }
    }

    for(int i = 0; i < n; i++){
        counter = (era[v[i]]) ? counter + 1 : counter;
    }
    out << counter;
    return 0;
}
