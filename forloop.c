#include<stdio.h>
int main() {
    int n;
    printf("enter number :");
    scanf("%d", &n);
    
    //for(int i=0 ; i<=n;i++);
    //int i=0;
    // while(i<=n) {
    //     printf("%d \n",i);
    //     i++;
    // }
    int i=0;
    do{
    printf("%d \n",i);
    i++;
    } while(i<=n);
    return 0;
}
    
