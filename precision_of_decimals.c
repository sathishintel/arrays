/* How to print floating point numbers with a specified precision? Rounding is not required. 
 * For example, 5.48958123 should be printed as 5.4895 if given precision is 4
 */


void plusMinus(int arr_count, int* arr) {
    int i;
    float num_of_zeros = 0,num_of_negs = 0,num_of_pos = 0 ;
    for ( i = 0 ; i < arr_count ; i++){
        if (arr[i] == 0){
            num_of_zeros++;
        } else if (arr[i] < 0){
            num_of_negs++;
        } else {
            num_of_pos++;            
        }
    }
    
    /* printf("%.*f\n",Precision count,Decimal number);*/
    printf("%.*f\n",arr_count,num_of_pos/arr_count);
    printf("%.*f\n",arr_count,num_of_negs/arr_count);
    printf("%.*f\n",arr_count,num_of_zeros/arr_count);
}

