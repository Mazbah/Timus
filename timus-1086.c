#include<stdio.h>
#define max 17000
int main()
{
    int n,i,j,y=0,z;
    int x;

    for(i=2;i<max;i++){
        if(max%i == 0){
            z++;
            y=1;
        }
    }
    if(y==0){
        scanf("%d",&x);

            for(j=1;j<=x;j++){
                if(z==x){
                    printf("%d\n",i);
            }
    }}

    return 0;

}
