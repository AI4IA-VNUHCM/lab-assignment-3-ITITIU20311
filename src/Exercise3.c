/*
3.	Input an array of n integers. Find the largest sorted sub array
(sorted array increasing/decreasing and has the largest number of elements)
Ex:
 _____________________________________________
| Input: 2 5 3 4 8 9 7 6 10                   |
| Output: Increasing 3 4 8 9 Decreasing 9 7 6 |
|_____________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex3(int in_arr[], int n){
	//Your codes here

    int i;
    int in_count = 1, de_count = 1;
    int head = 0, tail = 0, in_head = 0, in_tail = 0, de_head = 0, de_tail = 0;
    for(i = 0; i < n - 1; i++){
        if(in_arr[i] <= in_arr[i + 1]){
            tail = i + 1;
        } else {
            if(tail - head + 1 > in_count) {
                in_count = tail - head + 1;
                in_head = head;
                in_tail = tail;
            }
            head = tail + 1;
            tail = head;
        }
    }
    head = 0; tail = 0;
    for(i = 0; i < n - 1; i++){
        if(in_arr[i] >= in_arr[i + 1]){
            tail = i + 1;
        } else {
            if(tail - head + 1 > de_count) {
                de_count = tail - head + 1;
                de_head = head;
                de_tail = tail;
            }
            head = tail + 1;
            tail = head;
        }
    }
    printf("Increasing ");
    for(i = in_head; i <= in_tail; i++)
        printf("%d ", in_arr[i]);
    printf("Decreasing ");
    for(i = de_head; i <= de_tail; i++)
        printf("%d ", in_arr[i]);
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex3(testcase, argc);
	
	return 0;
}
