#include <stdio.h>
void sum(int a,int b) {
    printf("result: %d\n",a+b);
    return;
}
void mainus(int a,int b) {
    printf("result: %d\n",a-b);
    return;
}
void intu(int a,int b) {
    printf("result: %d\n",a*b);
    return;
}
void div(int a,int b) {
    printf("result: %d\n",a/b);
    return;
}
int main() {
    int a;
    int b;
    char ch;
    char choice;
do{
    printf("choose option\n(1): +\n(2):-\n(3):/\n(4):*\nchose and enter: ");
    scanf(" %c", &ch);
    //input
    printf("enter 1st value: ");
    scanf("%d",&a);

    printf("enter 2nd value: ");
    scanf("%d",&b);
     //condition
    
    if (ch==43){
        sum(a,b);
    }
     
    else if (ch==45){
        mainus(a,b);
    }
    else if(ch==42){
        intu(a,b);
    }
    else if (ch==47){
        div(a,b);
    }
    else{
        printf("wrong input");
    }
    printf ("do you want to continue? (y/n): ");
    scanf(" %c", &choice);
}while (choice == 'y' || choice ==  'Y');
      return 0;
}