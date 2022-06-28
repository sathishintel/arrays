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
    if (num_of_pos)
        printf("%0.6f\n",num_of_pos/arr_count);
    if (num_of_negs)
         printf("%0.6f\n",num_of_negs/arr_count);
    if (num_of_zeros)
         printf("%0.6f\n",num_of_zeros/arr_count);
}
