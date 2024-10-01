#include <stdio.h>
int main(){
    int n =2;
    *&n = 5;
    printf("%d", n);
}