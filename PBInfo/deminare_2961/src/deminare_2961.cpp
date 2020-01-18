#include <iostream>
#include <fstream>

using namespace std;

ifstream in("deminare.in");
ofstream out("deminare.out");

bool mine[501][501];
int m;

void show(int x1, int y1, int x2, int y2){
	if(x1 > x2){
		swap(x1, x2);
	}
	if(y1 > y2){
		swap(y1, y2);
	}
	for(int i = x1; i <= x2; i++){
		for(int j = y1; j <= y2; j++){
			cout << mine[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int count(int x1, int y1, int x2, int y2){
	int counter = 0;
	if(x1 > x2){
		swap(x1, x2);
	}
	if(y1 > y2){
		swap(y1, y2);
	}
	for(int i = x1; i <= x2; i++){
		for(int j = y1; j <= y2; j++){
			(mine[i][j]) ? counter++ : 0;
		}
	}
	return counter;
}

int cut(int x1, int y1, int x2, int y2){
	if( abs((x2 - x1 + 1) * (y2 - y1 + 1)) < m){
		return m + 1;
	}else if(abs((x2 - x1 + 1) * (y2 - y1 + 1)) == m){
		return m - count(x1, y1, x2, y2);
	}

	int cs, cd, lj, ls, cdv, ljv, lsv, minr = m + 1;
	cs = count(x1, y1, x2, y1);
	cd = count(x1, y2, x2, y2);
	ls = count(x1, y1, x1, y2);
	lj = count(x2, y1, x2, y2);
	int minv = (cs > cd) ? cd : cs;
	if(minv > ls){ minv = ls; };
	if(minv > lj){ minv = lj; };

	if(cs == minv){
		//cout << "cs " << recursiv << endl;
		minr = cut(x1, y1 + 1, x2, y2);
	}
	if(cd == minv){
		//cout << "cd " << recursiv << endl;
		cdv = cut(x1, y1, x2, y2 - 1);
		if(minr > cdv){ minr = cdv; };
	}
	if(ls == minv){
		//cout << "ls " << recursiv << endl;
		lsv = cut(x1 + 1, y1, x2, y2);
		if(minr > lsv){ minr = lsv; };
	}
	if(lj == minv){
		//cout << "lj " << recursiv << endl;
		ljv = cut(x1, y1, x2 - 1, y2);
		if(minr > ljv){ minr = ljv; };
	}

	return minr;
}

int main() {
	int v, l, c, x, y, counter = 0, maxv = -1;
	in >> v >> l >> c >> m;
	for(int i = 0; i < m; i++){
		in >> x >> y;
		mine[x][y] = true;
	}
	if(v == 1){
		int maxval[l], nr = 0;
		for(int i = 1; i <= l; i++){
			counter = count(i, 1, i, c);
			if(maxv < counter){
				maxv = counter;
				for(int j = 0; j < nr; j++){
					maxval[j] = 0;
				}
				maxval[0] = i;
				nr = 1;
			}else if(maxv == counter){
				maxval[nr] = i;
				nr++;
			}
		}
		for(int i = 0; i < nr; i++){
			out << maxval[i] << " ";
		}
	}else{
		/*for(int i = 1; i * i <= m; i++){
			if(m % i == 0){
				for(x = 0; x + i <= l; x++){
					for(y = 0; y + m / i <= c; y++){
						counter = count(x + 1, y + 1, x + i, y + m / i);
						show(x + 1, y + 1, x + i, y + m / i);
						if(counter > maxv){
							maxv = counter;
						}
					}
				}

				for(y = 0; y + i <= c; y++){
					for(x = 0; x + m / i <= l; x++){
						counter = count(x + 1, y + 1, x + m / i, y + i);
						show(x + 1, y + 1, x + m / i, y + i);
						if(counter > maxv){
							maxv = counter;
						}
					}
				}
			}
		}
		if(maxv == -1){
			out << -1;
		}else{
			out << m - maxv;
		}*/
		//show(1, 1, l, c);
		out << cut(1, 1, l, c);
	}
	return 0;
}
