#include <stdio.h>
#include <stdbool.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a == b && b == c ){
        printf("No\n");
    }else if(a == b || a == c || b == c){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}