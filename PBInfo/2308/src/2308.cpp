//============================================================================
// Name        : 2308.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("fractzii.in");
ofstream out("fractzii.out");

int rand(int a, int b){
	if(a == 1 && b == 1){
		return 1;
	}
	return rand(b, a - b) + 1;
}

int main() {
	long long n, m, r, a, b;
	in >> n >> m;
	a = n;
	b = m;

	r = a % b;

	while(r != 0){
		a = b;
		b = r;
		r = a % b;
	}

	a = n / b;
	b = m / b;

	out << rand(a, b);
	return 0;
}
