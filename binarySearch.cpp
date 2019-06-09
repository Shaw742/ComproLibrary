#define _USE_NATH_DEFINES
#include<cstdio>
#include <iostream>
#include<sstream>
#include<fstream>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<complex>
#include <string>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<bitset>
#include<numeric>
#include<limits>
#include<climits>
#include<cfloat>
#include<functional>
#include<iterator>
#include <random>
#define REP(i,m,n) for(int i=(int)m ; i < (int) n ; ++i )
#define rep(i,n) REP(i,0,n)
using namespace std;

#define INF 100000000

int A[1000],n;

int binarySearch(int key) {
	int left = 0;
	int right = n;
	int mid;
	while (left < right) {
		mid = (left + right) / 2;
		if (key == A[mid]) return key; // key Çî≠å©
		if (key > A[mid]) left = mid + 1; //å„îºÇíTçı
		else if (key < A[mid]) right = mid; //ëOîºÇíTçı
	}
	return 0;
}

int main() {
	
}