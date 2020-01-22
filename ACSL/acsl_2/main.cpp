#include <iostream>
#include <cstring>

using namespace std;

char a[80], b[80], aux[80], e[] = "AEIOU";
char c1[80], c2[80], c3[80], c4[80], c5[80];

int main()
{
    for(int o = 0; o < 5; o++){

        cin >> a >> b;

        for(int i = 0; i < strlen(a) - 1; i++){
            while(a[i] == a[i + 1] && i < strlen(a) - 1){
                strcpy(aux, a + i + 1);
                strcpy(a + i, aux);
            }
        }

        for(int i = 1; i < strlen(a); i++){
            while(strchr(e, a[i]) != 0 && i < strlen(a)){
                strcpy(aux, a + i + 1);
                strcpy(a + i, aux);
            }
        }

        for(int i = 0; i < strlen(b) - 1; i++){
            while(b[i] == b[i + 1] && i < strlen(b) - 1){
                strcpy(aux, b + i + 1);
                strcpy(b + i, aux);
            }
        }

        for(int i = 1; i < strlen(b); i++){
            while(strchr(e, b[i]) != 0 && i < strlen(b)){
                strcpy(aux, b + i + 1);
                strcpy(b + i, aux);
            }
        }

        //------------------------------------------------------

        for(int i = 0; i < strlen(a) && strlen(b); i++){
            while(a[i] == b[i] && i < strlen(a) && strlen(b)){
                strcpy(aux, a + i + 1);
                strcpy(a + i, aux);

                strcpy(aux, b + i + 1);
                strcpy(b + i, aux);
            }
        }

        //-------------------------------------------------------

        for(int i = 0; i < strlen(a) / 2; i++){
            char aux = a[i];
            a[i] = a[strlen(a) - i - 1];
            a[strlen(a) - i - 1] = aux;
        }

        for(int i = 0; i < strlen(b) / 2; i++){
            char aux = b[i];
            b[i] = b[strlen(b) - i - 1];
            b[strlen(b) - i - 1] = aux;
        }

        for(int i = 0; i < strlen(a) && strlen(b); i++){
            while(a[i] == b[i] && i < strlen(a) && strlen(b)){
                strcpy(aux, a + i + 1);
                strcpy(a + i, aux);

                strcpy(aux, b + i + 1);
                strcpy(b + i, aux);
            }
        }

        for(int i = 0; i < strlen(a) / 2; i++){
            char aux = a[i];
            a[i] = a[strlen(a) - i - 1];
            a[strlen(a) - i - 1] = aux;
        }

        for(int i = 0; i < strlen(b) / 2; i++){
            char aux = b[i];
            b[i] = b[strlen(b) - i - 1];
            b[strlen(b) - i - 1] = aux;
        }

        if(strlen(a) > strlen(b)){
            switch(o){
            case 0:
                strcpy(c1, b);
                break;
            case 1:
                strcpy(c2, b);
                break;
            case 2:
                strcpy(c3, b);
                break;
            case 3:
                strcpy(c4, b);
                break;
            case 4:
                strcpy(c5, b);
                break;
            }
        }else if(strlen(a) < strlen(b)){
            switch(o){
            case 0:
                strcpy(c1, a);
                break;
            case 1:
                strcpy(c2, a);
                break;
            case 2:
                strcpy(c3, a);
                break;
            case 3:
                strcpy(c4, a);
                break;
            case 4:
                strcpy(c5, a);
                break;
            }
        }else {
        }
        //cout << a << " " << b;
        // mississippi missouri
        // catherine katheryne
        // constitutional conventional
        // physician pharmacy
        // compartmentalization semiautobiographical
    }

    cout << c1 << "\n" << c2 << "\n" << c3 << "\n" << c4 << "\n" << c5;
    return 0;
}
