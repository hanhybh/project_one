#include<stdio.h>

void nhap(int *a,int n) {
    printf("nhap mang :");
          for(int i=0;i<n;i++) {
                printf("a[%d]=",i);
                scanf("%d",(a+i));
          }
}

void xuat(int *a,int n) {
    printf("xuat mang :");
          for(int i=0;i<n;i++) {
                printf("a[%d]=%d",i,*(a+i));
          }
}

int main() {
    int *a;
    int  n;
    a=(int*)malloc(n*size);
    printf("nhap n =  ");
    scanf("%d",&n);
    
    nhap(a,n);
    xuat(a,n);
    
    return(0);
}
   
    
