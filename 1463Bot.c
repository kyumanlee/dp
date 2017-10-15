#include <stdio.h>
#include <stdlib.h>


int main(void) {

	int d[1000001] = {0};
	int n, i;

	scanf("%d", &n);

	d[1] = 0 ;

	for ( i = 2; i <= n; i++  ) {

		d[i] = d[i-1] + 1;

		//d[n/2] + 1
		if ( i % 2 == 0 &&  d[i] > d[i/2] + 1 ) {
			d[i] = d[i/2] + 1;
		}

		// d[n/3] + 1
		if ( i % 3 == 0 &&  d[i] > d[i/3] + 1 ) {
			d[i] = d[i/3] + 1;
		}
	}

	printf("%d\n", d[n]);

}
