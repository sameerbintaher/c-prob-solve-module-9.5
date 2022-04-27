#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int x,y,z;
    x=a+b;
    y=a-b;
    z=a*b;
    int large = (x>y?x:y)>z?(x>y?x:y):z; //find largest
    printf("%d\n",large);
}