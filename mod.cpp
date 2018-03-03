#include <stdio.h>

int main(){
    int n,m;
    printf("Enter num: ");
    scanf("%d",&n);

    printf("Enter modulus: ");
    scanf("%d",&m);
    if(n>0){
        printf("q = %d\n",n/m);
        printf("r = %d\n",n%m);
    }
    else{
        int florg=n/m-1;
        int tmp=n%m+m;
        printf("q = %d\n",florg);
        printf("r = %d\n",tmp);
    }
return 0;}
