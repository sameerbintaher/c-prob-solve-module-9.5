#include <math.h>
#include <stdio.h>
int main(){
    int n; 
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int grade; 
        scanf("%d",&grade);
        if (grade < 38) {
            fprintf(stdout, "%d\n", grade); 
        }
        else if (5 - (grade % 5) < 3) {
            fprintf(stdout, "%d\n", 5*(grade/5 + 1));
        }
        else {
            fprintf(stdout, "%d\n", grade);
        }
    }
    return 0;
}