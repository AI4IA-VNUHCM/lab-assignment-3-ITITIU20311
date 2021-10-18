/*
2.	Input an array of n integers. Sort the odd numbers in
increasing order and even numbers in decreasing order.
Ex:
 ____________________________________ 
| Input: 2 5 3 4 8 6 7 9 2           |
| Output: 8 3 5 6 4 2 7 9 2          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex2(int arr[], int n){
	//Your codes here
	int doicho;
	for (int i = 0; i <=n-2; i++)
	{
		if (arr[i]%2==0)
		{
			for (int j = i+1; j <=n-1; j++)
			{
				if(arr[j]%2==0)
				{
					if(arr[j]>=arr[i])
					{	
						doicho=arr[j];
						arr[j]=arr[i];
						arr[i]=doicho;
					}
				}
			}
			
		}
		
	}
	for (int i = 0; i <=n-2; i++)
	{
		if (arr[i]%2==1)
		{
			for (int j = i+1; j <=n-1; j++)
			{
				if(arr[j]%2==1)
				{
					if(arr[j]<=arr[i])
					{	
						doicho=arr[j];
						arr[j]=arr[i];
						arr[i]=doicho;
					}
				}
			}
			
		}
		
	}
	
	for(int k=0;k<=n-1;k++) {
		printf(" %d",arr[k]);
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex2(testcase, argc);
	
	return 0;
}
