#include <iostream>
#include<fstream>
#include<cstring>

using namespace std;

ifstream in("sir.in");
ofstream out("sir.out");

char s[1050], a[1050], *p, maxs[50] = "", sep[] = " :;,?1.";
int viz[27], maxf = 0;

int main()
{
    int i, k, kv = 0, lm = 0, ld = 0;
    in.get(s, 1050);
    strcpy(a, s);
    for(int i = 0; i < strlen(a); i++){
        if(isupper(a[i])){
            lm++;
        }
        a[i] = tolower(a[i]);
    }
    for(int i = 0; i < strlen(a); i++){
        if(isalpha(a[i])){
            viz[a[i] - 'a']++;
            maxf = (viz[a[i] - 'a'] > maxf) ? viz[a[i] - 'a'] : maxf;
            kv = (strchr("aeiou", a[i])) ? kv + 1 : kv;
        }
    }
    for(int i = 0; i < 27; i++){
        if(viz[i]){
            ld++;
        }
    }
    for(p = strtok(s, sep); p!=0; p = strtok(NULL, sep)){
        if(strlen(p) > strlen(maxs) || strlen(p) == strlen(maxs) && strcmp(p, maxs) < 0){
            strcpy(maxs, p);
        }
    }
    for(i = 0; i < 27; i++){
        out << viz[i] << " ";
    }
    out <<endl << ld << endl << kv << endl << lm << endl << maxf << endl << maxs;
    return 0;
}
