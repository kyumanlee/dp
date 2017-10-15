
#include <stdio.h>
#include <stdlib.h>

int d[1000001];

int go( int n) {

	int temp;

	temp = 1000000;

	if (n == 1) return 0;

	if ( d[n] > 0 ) return d[n];

	//D[n-1] + 1
	d[n] = go(n - 1) + 1;

	//D[N/2] + 1
	if( n % 2 == 0 ) {
		temp = go(n/2) + 1;

		if ( d[n] > temp) d[n] = temp ;
	}

	//D[N/3] + 1
	if ( n % 3 == 0 ) {
		temp = go ( n/3 ) + 1;
		if ( d[n] > temp) d[n] = temp;
	}

	return d[n];
}



int main(void) {

	int n;

	scanf("%d", &n);
	printf("%d\n", go(n));

	return 0;


}
