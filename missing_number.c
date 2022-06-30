int getMissingNo(int a[], int n)
{
    int n_elements_sum = n * (n + 1) / 2;
    int sum = 0;
  
    for (int i = 0; i < n - 1; i++)
        sum += a[i];
    return n_elements_sum - sum;
}
  

/* getMissingNo takes array and size of array as arguments*/
int getMissingNo(int a[], int n)
{
    int i;
    int x1 = a[0]; /* For xor of all the elements in array */
    int x2 = 1; /* For xor of all the elements from 1 to n+1 */
  
    for (i = 1; i < n; i++)
        x1 = x1 ^ a[i];
  
    for (i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
  
    return (x1 ^ x2);
}
