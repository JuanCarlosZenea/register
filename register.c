#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char*argv[]){
	if(argc!=2){
		printf("forma de uso: %s valorlong \n", argv[0]);
		return -1;
	}
	long max=atol(argv[1]);

	clock_t t=clock();
	printf("inicio\n");

	register int n=0;
	for (n=0; n<max; n++);

	printf("fin\n");
	t=clock()-t;
	double tiempo=((double)t)/CLOCKS_PER_SEC;
	printf("tiempo transcurrido %f segundos\n", tiempo);
	return 0;
}
