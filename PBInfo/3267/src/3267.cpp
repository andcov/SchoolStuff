//============================================================================
// Name        : 3267.cpp
// Author      : Andrei Covaci
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("politic.in");
ofstream out("politic.out");

int cand[1002];

int main() {
	int n, v[1001];

	for(int i = 1; i <= n; i++){
		in >> v[i];
		cand[v[i]]++;
	}
	
	for(int k = 0; k < n; k++){
		
	}
	
	return 0;
}
