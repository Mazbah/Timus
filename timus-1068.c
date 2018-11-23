#include<stdio.h>
int main()
{
    int N,i,a=0;
    scanf("%d",&N);
    if(N<1){
        for(i=1;i>=N;i--){
            a += i;
        }
        printf("%d\n",a);
    }
    else{
        for(i=1;i<=N;i++){
            a += i;
        }
        printf("%d\n",a);
    }
    return 0;
}
