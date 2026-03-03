#include<stdio.h>
int main() {
    int marks;
    printf("enter number (1-100):");
    scanf("%d" , &marks );
    
    if (marks >30 && marks <= 100 ) {
        printf("PASS \n");
    
    } else if(marks >=0 && marks <= 30) {
        printf("FAIL\n");
    } else {
        printf("Wrong marks");
    }
    return 0;
}
    
