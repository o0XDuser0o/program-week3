#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    num=num-1;
    for(int y=num;y>=-num;y--)
    {
        for(int x=-num;x<=num;x++)
        {
            if((x>=y||x<=-y)&&(x<=y||x>=-y)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}