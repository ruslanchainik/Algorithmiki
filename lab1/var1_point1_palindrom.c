#include <stdio.h>
#include <math.h>
int main(void){
    int n;
    
    scanf("%d", &n);
    int power = 0;
    int base = 1;
    double new = 0;
    int original = n;

    while (base * 10 <= n) {
        base *= 10;
        power++;
    }
    while(power >= 0){
        new += ((double)(n % 10) * pow(10., (double)power));
        n /= 10;
        power -= 1;
    }
    if((double) original == new) printf("yes");
    else
        printf("no");
    return 0;
        
        
        
    
    
    
    
    
    
}