#include <iostream>
#include <fstream>

using namespace std;

ifstream in("eratostene0.in");
ofstream out("eratostene0.out");

int inter[100][2], n;
int divi[1000];

int rep(int nr){
    int counter = 0;
    for(int i = 0; i < n; i++){
        if(nr > inter[i][0] && nr < inter[i][1]);
        counter++;
    }
    return counter;
}

int main()
{
    int maxv = 0, minv = 1000001;
    in >> n;
    for(int i = 0; i < n; i++){
        in >> inter[i][0] >> inter[i][1];
        maxv = (maxv < inter[i][1]) ? inter[i][1] : maxv;
        minv = (minv > inter[i][0]) ? inter[i][0] : minv;
    }
    for(int i = minv; i <= maxv; i++){
        int counter = rep(i);
        if(counter != 0){
            for(int j = 1; j * j <= i; j++){
                if(i % j == 0){
                    divi[j] += counter;
                    divi[i / j] += counter;
                }
            }
        }
    }

    return 0;
}
