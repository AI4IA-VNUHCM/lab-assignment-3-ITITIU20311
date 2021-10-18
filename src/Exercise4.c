/*
4. Write a function to check whether a given array is sorted or not.
Return 1 if sorted increasing, -1: decreasing, 0: not sorted
Ex:
______________________________________
| Input: 8 7 9 2 1 5 2               |
| Output: 0                          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Ex4(int arr[], int n){
	//Your codes here
	int count1,count2;
	count1=0;
	count2=0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i]>=arr[i-1])
		count1 = count1 +1;
		if (arr[i]<=arr[i-1])
		count2 = count2 +1;

	}
	if (count1==0) return -1;
	else{	if(count2==0) return 1;
			else return 0;}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	printf("%d", Ex4(testcase, argc));

	return 0;
}