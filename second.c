#include <stdio.h>
int countMultiples(int n, int k){
    int count  = 0;
    for(int i = 1; i<=n; i++){
        if(i%k == 0){
            count ++;
        }
    }
    return count;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
printf("%d", countMultiples(a, b));
    return 0;
}