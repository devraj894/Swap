#include<stdio.h>
int main(){
    int n1,n2;
    printf("***Implement Swapping***\n\n");
    printf("Enter the first value : ");
    scanf("%d",&n1);
    printf("Enter the second value : ");
    scanf("%d",&n2);

    printf("\n***Before Swapping***\n\n");
    printf("%d %d\n\n",n1,n2);

    printf("***After Swapping***\n\n");

    int temp = n1;
    n1 = n2;
    n2 = temp;

    printf("%d %d\n",n1,n2);

    printf("Succefully exicuted.....:-)");

    return 0;
}