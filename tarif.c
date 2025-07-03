#include <stdio.h>

void add(int a,int b) {
    printf("result: %d\n",a+b);
    return;
}

void sub(int a,int b) {
    printf("result: %d\n",a-b);
    return;
}
void mul(int a,int b) {
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
    int i;
    //chosse
    do{
    printf("choose option\n 1.add(+)\n 2.mines(-)\n 3.intu(*)\n 4.division(/)\n enter: ");
    scanf("%d",&i);
    //input
    printf("enter 1st value: ");
    scanf("%d",&a);

    printf("enter 2nd value: ");
    scanf("%d",&b);
     //condition
    if (i == 1){
        add(a,b);
    }
    else if (i == 2){
        sub(a,b);
    }
    else if (i == 3){
        mul(a,b);

        
    }

    else if (i == 4){
        div(a,b);
    }
    else {
        printf("wrong input");
    }
    }while (i != 743318);
      return 0;
}