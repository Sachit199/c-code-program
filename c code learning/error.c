#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks) ;
    if (marks < 0 || marks > 100) {
        printf("Error: Marks should be between 0 and 100.\n");
    } else if (marks >= 90) {
    printf("A grade\n");
    } else if (marks >= 75) {
    printf("B grade\n");
    } else if (marks >= 40) {
    printf("Pass\n");
    } else {
    printf("Fail\n");
    }
    return 0;
}
/*#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");      
    scanf("%d", &marks);              

    if (marks < 0 || marks > 100) {
        printf("Error: Marks should be between 0 and 100.\n");
    } else if (marks >= 90) {
        printf("A grade\n");
    } else if (marks >= 75) {
        printf("B grade\n");
    } else if (marks >= 40) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
    return 0;
}*/
