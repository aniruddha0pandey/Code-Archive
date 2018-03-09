//proper data type usage pending
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define limit n-m+1
     
main()
{
    int T,i;
     
    	scanf("%d", &T);
     
    	for(i = 0; i < T; i++)
     {
    		int m, n;
     
    			scanf("%lld%lld", &m, &n);
     
    		int j;
    		bool input[limit];
     
    			for(j = m; j <= n; j++)			       //marking every number as prime
    				input[j] = true;
     
    			input[0] = input[1] = false;	            //marking exceptions as non-prime
     
    	 	int k, sqr = sqrt(n);				       //functino "sqrt()" will return float
     
    			for(j = 2; j <= sqr; j++)
    				if(input[j])			            //selecting only primes
    					for(k = 2; (j * k) <= n; k++)   //marking multiples of 2,3,4...so on upto root of n
    						input[k * j] = false;      //marking non-primes
     
    			for(j = m; j <= n; j++)
    				if(input[j] == true)		       //displaying all primes
    					printf("%d\n", j);
     
    			puts("");
    						
    	}
     
}
