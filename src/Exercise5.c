/*
5. Write a function to move all positive element of an array upfront
Ex:
______________________________________
| Input: 2 -3 4 6 -7 9 8 -2          |
| Output: 2 4 6 9 8 -3 -7 -2         |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex5(int arr[], int n){
	//Your codes here
	int arrPo[n],arrNe[n],countPo,countNe;
	countPo=0;
	countNe=0;
	for(int i=0 ; i<=n-1;i++)
	{
		if(arr[i]>=0)
		{arrPo[countPo]=arr[i];
		countPo++;}
		else
		{
			arrNe[countNe]=arr[i];
			countNe++;
		}
	}
	for(int k=0;k<=countPo;k++) {
		printf(" %d",arrPo[k]);
	}
	for(int k=0;k<=countNe;k++) {
		printf(" %d",arrNe[k]);
	}
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex5(testcase, argc);
	
	return 0;
}
