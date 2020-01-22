#include <iostream>

using namespace std;

int poz(int x1,int y1,int l1,int i1,int x2,int y2,int l2,int i2){
    if((x1 < x2 && x1 + l1 > x2 + l2 && y1 < y2 && y1 + i1 > y2 + i2) || (x1 > x2 && x1 + l1 < x2 + l2 && y1 > y2 && y1 + i1 < y2 + i2)){
        return 0;
    }

    if(x1 == x2 && y1 == y2 && l1 == l2 && i1 == i2){
        return 1;
    }

    if(x1 + l1 < x2 || x2 + l2 < x1 || y1 + i1 < y2 || y2 + i2 < y1){
        return 2;
    }

    return 3;
}

int main()
{
    cout << poz(100, 100, 300, 200, 150, 150, 100, 130) << endl;
    cout <<poz(100, 100, 100, 200, 100, 100, 100, 200) << endl;
    cout <<poz(50, 50, 100, 50, 200, 100, 100, 130) << endl;
    cout <<poz(50, 50, 100, 50, 30, 40, 100, 130) << endl;
    return 0;
}
