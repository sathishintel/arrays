/*Find the minimum and maximum sum of N-1 elements of the array*/
/*
Examples:
Input: a[] = {13, 5, 11, 9, 7} 
Output: 32 40 
Explanation: Minimum sum is 5 + 7 + 9 + 11 = 32 and maximum sum is 7 + 9 + 11 + 13 = 40.
Input: a[] = {13, 11, 45, 32, 89, 21} 
Output: 122 200 
Explanation: Minimum sum is 11 + 13 + 21 + 32 + 45 = 122 and maximum sum is 13 + 21 + 32 + 45 + 89 = 200.
Input: a[] = {6, 3, 15, 27, 9} 
Output: 33 57 
Explanation: Minimum sum is 3 + 6 + 9 + 15 = 33 and maximum sum is 6 + 9 + 15 + 27 = 57.
*/


#include <stdio.h>
#include <stdlib.h>

void miniMaxSum(int arr[],int n) {
    long min_val,max_val,min_sum,max_sum,sum;
    int i;

    min_val = max_val = arr[0];
    sum = min_val;

    for (i = 1 ; i < n ; i++) {
	    printf("%d  ",arr[i]);
	    sum = sum + arr[i];
	    if (min_val > arr[i]) {
	      min_val = arr[i];
	    } else if(max_val < arr[i]) {
	      max_val = arr[i];
	    }
    }
    printf("\nmin_valu = %d , max_valu = %d \n",min_val,max_val);
    min_sum = sum - max_val;
    max_sum = sum - min_val;
    printf("minsum = %ld , max_sum = %ld \n",min_sum,max_sum);

}


int main(void){
    int a1[] = { 13, 5, 11, 9, 7 };
    int n = sizeof(a1) / sizeof(a1[0]);
    miniMaxSum(a1, n);

    int a2[] = { 13, 11, 45, 32, 89, 21 };
    n = sizeof(a2) / sizeof(a2[0]);
    miniMaxSum(a2, n);

    int a3[] = { 6, 3, 15, 27, 9 };
    n = sizeof(a3) / sizeof(a3[0]);
    miniMaxSum(a3, n);

    return 0 ;
}



/* o/p
esatjar@seroiuts01946[12:57][home/esatjar/practice]$ ./a.out 
5  11  9  7  
min_valu = 5 , max_valu = 13 
minsum = 32 , max_sum = 40 
11  45  32  89  21  
min_valu = 11 , max_valu = 89 
minsum = 122 , max_sum = 200 
3  15  27  9  
min_valu = 3 , max_valu = 27 
minsum = 33 , max_sum = 57 
esatjar@seroiuts01946[12:57][home/esatjar/practice]$ cat arry_sum_min_max.c 
*/
