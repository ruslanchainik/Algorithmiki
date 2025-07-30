#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr[7];
    int count = 0;
    size_t size_re = sizeof(arr)/sizeof(*arr);
    for(int i = 0; i < size_re && (scanf("%d", &arr[i]) == 1); i++){
        count++;
    }
    int is_palindrome = 1;
    for(int i = 0; i <count; i++){
        if(arr[i] != arr[count -i -1]){
             is_palindrome = 0;
             break;}
        else
             continue; 
    } 

    printf("%d", is_palindrome);





    return 0;
}