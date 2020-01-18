#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream in("abx.in");
ofstream out("abx.out");

long long findPow(long long nr, long long m){
	long long minv, maxv, minf, maxf, ras;
	double root = 3.0;
	int ex = 2;
	minf = 0;
	maxf = m + 1;
	while(root >= 1.5){
		root = pow((double)nr, 1.0/(double)ex);

		minv = (long long) pow((long long)root, ex);
		maxv = (long long) pow((long long)root + 1, ex);

		minf = ( abs(nr - minv) < abs(nr - minf) ) ? minv : minf;
		maxf = ( abs(maxv - nr) < abs(maxf - nr) ) ? maxv : maxf;
		ex++;
	}

	ras = ( abs(nr - minf) > abs(maxf - nr) ) ? maxf : minf;

	if(maxf > m){
		ras = minf;
	}

	return ras;
}


int main(){
	int n;
	long long m, aux;
	in >> n >> m;

	for(int i = 0; i < n; i++){
		in >> aux;
		out << findPow(aux, m) << endl;
	}
	return 0;
}
