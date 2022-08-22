#include<stdio.h>
int main(){
    int num,s;
    scanf("%d",&num);
    s = (num*2)-1;
    for(int y = 1;y<=s;y++){
        for(int x = 1;x<=s;x++){
            if(y<=num){
                if(x <= y|| x > s-y){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            else{
                if(x > y|| x <= s-y){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}