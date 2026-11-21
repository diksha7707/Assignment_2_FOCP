#include <stdio.h>
int perfectsquare(int n){
    for(int i = 1; i<=n; i++){
        if(i*i == n){
            return 1;
        }
    }
    return 0;
}
int main(){
int n;
scanf("%d", &n);
printf("%d", perfectsquare(n));
    return 0;
}