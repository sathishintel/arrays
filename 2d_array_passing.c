
fun(int arr[][coulums],int rows) {
  print("%d" , arr[i]arr[j])
    
}
int arr[3][4] = {{1,2,3} ,{1,2,4} ,{4,5,6} }
fun(arr);

-----
  
 fun(int *arr[coulums],int rows) {
    print("%d" , *(arr + i * n) + j)
}
int arr[3][4] = {{1,2,3} ,{1,2,4} ,{4,5,6} }
fun(arr,rows);

----
  
  fun(int *arr,int rows,int columns) {
    print("%d" , *(arr + i * n) + j)
}
int arr[3][4] = {{1,2,3} ,{1,2,4} ,{4,5,6} }
fun(arr,rows,columns); 
----------  




----------------
 fun(int *arr[],int rows) {
}
int arr[3][4] = {{1,2,3} ,{1,2,4} ,{4,5,6} }
fun(**arr,rows,columns);

-----
