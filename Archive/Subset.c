#include <string.h>
#include <stdio.h>
#include <math.h>
#define CONST 1
#define RANGE ('d'-'a')+1

void power_set(char *set,int n){

    unsigned int sub=pow(2,n);
    int i,j;

	    for(i=0;i<sub;i++){

		    for(j=0;j<n;j++)
				if(i&(CONST<<j))
				    printf("%c",set[j]);

			printf("\n");
	
	    }

}

int main(){

	char set[RANGE];
	int cnst=97;
	int i,n=strlen(set)-1;
    
		for(i=0;i<RANGE;i++)
			set[i]=cnst++;

    	printf("Set Given: ");
    
    	for(i=0;i<RANGE;i++)
    		printf("%c, ",set[i]);
    		
    	printf("\n");

	    power_set(set,RANGE);

    return 0;
    
}
