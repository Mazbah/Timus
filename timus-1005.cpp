#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,min;
    int x[100],a[100];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    for(i=0;i<n-1;i++){
        a[i] = x[i+1]-x[i];
    }
    for(i=0;i<n;i++){
        sort(a,a+i);
    }
    cout<<a[0]<<endl;
    return 0;
}
