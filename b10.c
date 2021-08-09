#include<conio.h>
#include<stdio.h>
int main() {
    int n;
    int X=5;
    float A=1;
    //printf("nhap x = ");
    //scanf("%d",&x);
    printf("nhap n = ");
    scanf("%d",&n);
    
    if(n > 0) {
        for(int i=1;i<=n;i++) {
            A=A*X;
        }
        printf("A = %f",A);
        printf("\n n = %d",n);
    }
    else {
        n=-n;
        for(int i=1;i<=n;i++) {
            A=A*1.0/X;
        }
        printf("A = %f",A);
        printf("\n X = %d",n);
    }
    //printf("A = %f",A);
    return 0;
}