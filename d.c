#include<stdio.h>
int main(){
    int k, n, w;
	int sum=0;

	scanf("%d %d %d",&k,&n,&w);
	for(int i=1; i<=w; i++){
		sum = sum+(i*k);
	}
	if(sum<= n){
		printf("0\n");
	}
	else printf("%d\n",sum-n);

	return 0;
}