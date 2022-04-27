#include<stdio.h>
int main(){
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    
    for(int i=1;i<=b;i++){
        int ld=a%10;
        if(ld==0){
            a/=10;
        }else{
            a-=1;
        }
    }
    printf("%d\n",a);
}