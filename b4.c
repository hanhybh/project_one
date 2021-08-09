#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    float A=0;
    printf("nhap n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        A=A+1.0/(2*i);
    }
    printf("Tong cua day so tu 1 den %d la : %f",n,A);
    return 0;
}