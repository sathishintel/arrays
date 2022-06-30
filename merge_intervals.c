/*Input: Intervals = {{1,3},{2,4},{6,8},{9,10}}
Output: {{1, 4}, {6, 8}, {9, 10}}
Explanation: Given intervals: [1,3],[2,4],[6,8],[9,10], we have only two overlapping intervals here,[1,3] and [2,4].
Therefore we will merge these two and return [1,4],[6,8], [9,10].

Input: Intervals = {{6,8},{1,9},{2,4},{4,7}}
Output: {{1, 9}} 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int  i , j ,index = 0;
    //int arr[4][2] = {{1,3},{2,4},{5,5},{5,8}};
    int arr[4][2] = {{1,3},{2,4},{6,8},{9,10}};
    int rows = sizeof(arr)/sizeof(arr[0]);
    int columns = sizeof(arr[0])/sizeof(arr[0][0]);
    printf("rows = %d , colums = %d \n",rows,columns);

    for( i = 1 ; i < rows ; i++) {
	if (arr[index][1] >= arr[i][0]) {
	    arr[index][1] = arr[index][1] > arr[i][1] ? arr[index][1]:arr[i][1];
	} else {
	    index++;
	    arr[index][0] = arr[i][0];
	    arr[index][1] = arr[i][1];
	}
	
    }

    printf(" index = %d \n",index);

    for (i = 0; i <= index; i++) {
	    printf("[%d %d] \n", arr[i][0],arr[i][1]);
    }
    return 0;
}
esatjar@seroiuts01946[20:46][home/esatjar/practice]$ ./a.out 
rows = 4 , colums = 2 
 index = 2 
[1 4] 
[6 8] 
[9 10] 
esatjar@seroiuts01946[20:46][home/esatjar/practice]$
