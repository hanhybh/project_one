#include<stdio.h>
#include<conio.h>

int main() {
    int n;
    int A=0;
    printf("nhap n :");
    scanf("%d",&n);
    for(int i=0;i<n+1;i++) {
        A=A+i*i;
    }
    printf("Tong cua day so tu 1 den %d la : %d",n,A);
    return 0;
}