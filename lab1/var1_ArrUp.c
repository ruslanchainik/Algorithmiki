#include <stdio.h>


int main(void){
    int arr[7];
    int count = 0;
    size_t size_re = sizeof(arr)/sizeof(*arr);
    for(int i = 0; i < size_re && (scanf("%d", &arr[i]) == 1); i++){
        count++;
    }
    int is_up = 1;
    for(int k = 0; k < (count-1); k++){
        if(arr[k+1] >= arr[k]){}
        else{
            is_up = 0;
            break;
        }
            
    }
    (is_up == 1)? printf("yes"):printf("no");








    return 0;
}