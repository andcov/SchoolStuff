#include <iostream>
#include <cstring>

using namespace std;

char a[80], b[80], aux[80], e[] = "AEIOU";
char c1[80], c2[80], c3[80], c4[80], c5[80];
char rezultate[5][80];

int main()
{
    for(int o = 0; o < 5; o++){

        cin >> a >> b;

        //------------------------------------------------------
        // deleting double consonants

        for(int i = 0; i < strlen(a) - 1; i++){
            while(a[i] == a[i + 1] && i < strlen(a) - 1){
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

        //------------------------------------------------------
        // deleting vowels

        for(int i = 1; i < strlen(a); i++){
            while(strchr(e, a[i]) != 0 && i < strlen(a)){
                strcpy(aux, a + i + 1);
                strcpy(a + i, aux);
            }
        }

        for(int i = 1; i < strlen(b); i++){
            while(strchr(e, b[i]) != 0 && i < strlen(b)){
                strcpy(aux, b + i + 1);
                strcpy(b + i, aux);
            }
        }

        //------------------------------------------------------
        // deleting characters from left to right

        for(int i = 0; i < strlen(a) && strlen(b); i++){
            while(a[i] == b[i] && i < strlen(a) && strlen(b)){
                strcpy(aux, a + i + 1);
                strcpy(a + i, aux);

                strcpy(aux, b + i + 1);
                strcpy(b + i, aux);
            }
        }

        //-------------------------------------------------------
        // deleting characters from right to left

        int i = strlen(a), j = strlen(b);

        while(i >= 0 && j >= 0){
            if(a[i] == b[j]){
                strcpy(aux, a + i + 1);
                strcpy(a + i, aux);

                strcpy(aux, b + j + 1);
                strcpy(b + j, aux);
            }
            i--;
            j--;
        }

        //-------------------------------------------------------
        // storing resulting strings

        if(strlen(a) > strlen(b)){
            strcpy(rezultate[o], b);
        }else if(strlen(a) < strlen(b)){
            strcpy(rezultate[o], a);
        }else {
            if(strcmp(a, b) > 0){
                strcpy(rezultate[o], b);
            }else{
                strcpy(rezultate[o], a);
            }
        }
    }

    for(int o = 0; o < 5; o++){
        cout << rezultate[o] << "\n";
    }
    return 0;
}
