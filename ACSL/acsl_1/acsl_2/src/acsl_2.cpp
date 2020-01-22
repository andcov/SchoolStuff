#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

char a[80], b[80], aux[80], e[] = "aeiou";

int main() {
	cin >> a >> b;

	for(int i = 1; i < strlen(a); i++){
		while(strchr(e, a[i]) && i < strlen(a)){
			strcpy(aux, a + i + 1);
			strcpy(a + i, aux);
		}
	}

	for(int i = 0; i < strlen(a) - 1; i++){
		if(a[i] == a[i + 1]){
			strcpy(aux, a + i + 1);
			strcpy(a + i, aux);
		}
	}


	for(int i = 1; i < strlen(b); i++){
		while(strchr(e, b[i]) && i < strlen(b)){
			strcpy(aux, b + i + 1);
			strcpy(b + i, aux);
		}
	}

	for(int i = 0; i < strlen(b) - 1; i++){
		if(b[i] == b[i + 1]){
			strcpy(aux, b + i + 1);
			strcpy(b + i, aux);
		}
	}
	if(strlen(a) > strlen(b)){
		for(int i = 0; i < strlen(b); i++){
			while(a[i] == b[i] && i < strlen(b)){
				strcpy(aux, a + i + 1);
				strcpy(a + i, aux);

				strcpy(aux, b + i + 1);
				strcpy(b + i, aux);
			}
		}
		strcpy(aux, "");
		for(int i = 0; i < strlen(a) - strlen(b); i++){
			aux[i] = '1';
		}
		strcat(aux, b);
		strcpy(b, aux);
		for(int i = 0; i < strlen(b); i++){
			while(a[i] == b[i] && i < strlen(b)){
				strcpy(aux, a + i + 1);
				strcpy(a + i, aux);

				strcpy(aux, b + i + 1);
				strcpy(b + i, aux);
			}
		}
	}else{
		for(int i = 0; i < strlen(a); i++){
			while(a[i] == b[i] && i < strlen(a)){

				strcpy(aux, a + i + 1);
				strcpy(a + i, aux);

				strcpy(aux, b + i + 1);
				strcpy(b + i, aux);
			}
		}
		strcpy(aux, "");
		for(int i = 0; i < strlen(b) - strlen(a); i++){
			aux[i] = '1';
		}
		strcat(aux, a);
		strcpy(a, aux);
		for(int i = 0; i < strlen(b); i++){
			while(a[i] == b[i] && i < strlen(b)){
				strcpy(aux, a + i + 1);
				strcpy(a + i, aux);

				strcpy(aux, b + i + 1);
				strcpy(b + i, aux);
			}
		}
	}

	cout << a << endl << b;
	return 0;
}
