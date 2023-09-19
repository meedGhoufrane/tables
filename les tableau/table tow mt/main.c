#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float note[5][3] ;
	float  s,m;
	int j,i;
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("enter ur note note  %d : ",j+1);
			scanf("%f",&note[i][j]);	
		}
	}	
	for(i=0;i<5;i++){
		s=0;
	    for(j=0;j<3;j++){
	    	s=s+note[i][j];
		}
		m = s / 3;
			printf("studint number : %d and some note  is : %f and moy is :%f\n",i+1,s,m);
	}
	return 0;
}
