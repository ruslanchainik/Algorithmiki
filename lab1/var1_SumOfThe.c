#include <stdio.h>


int main(void){
    int arr[7];
    int count = 0;
    size_t size_re = sizeof(arr)/sizeof(*arr);
    for(int i = 0; i < size_re && (scanf("%d", &arr[i]) == 1); i++){
        count++;
    }
    int k = 0;
    for(int i = 0; i < count; i++){
        if (arr[i] % 3 == 0) k +=arr[i];
    }
    printf("%d", k);
    return 0;
}