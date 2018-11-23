#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,k,x,y;
    char ch[20];
    scanf("%d %s",&n,ch);
    k = strlen(ch);
    x = (n%k);
    y=1;
    if(n%k != 0){
        for(i=n;i>=x;i-=k){
            y *= i;
        }
        printf("%d\n",y);
    }
    else{
        for(i=n;i>=k;i-=k){
            y *= i;
        }
        printf("%d\n",y);
    }

    return 0;
}



