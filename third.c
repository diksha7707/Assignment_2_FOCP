#include <stdio.h>
int areaOfRectangle(int length, int width){
    return length * width;
}
int main(){
    int length, width;
    scanf("%d %d", &length, &width);
    printf("%d", areaOfRectangle(length, width));
    return 0;
}