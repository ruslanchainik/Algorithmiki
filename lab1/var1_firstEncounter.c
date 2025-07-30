#include <stdio.h>

int main(void){
    int arr[7];
    int count = 0;
    size_t size_re = sizeof(arr)/sizeof(*arr);
    for(int i = 0; i < size_re && (scanf("%d", &arr[i]) == 1); i++){
        count++;
    }
    int N;
    scanf("%d", &N);
    int number_here = -1;
    for(int i = 0; i < count; i++){
        if(arr[i] == N){
            number_here = i;
            break;
        }
        else
            continue;

    }
printf("%d", number_here);






    return 0;
}