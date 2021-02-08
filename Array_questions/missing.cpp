#include<iostream>
using namespace std;

int main(){
    int i,n,sum,a[50];
    cin>>n;
    for(i=0;i<n-1;i++){
        cin>>a[i];
    }
    sum=(n*(n+1))/2;
    for(i=0;i<n-1;i++){
        sum-=a[i];
    }
    cout<<"The missing number from array is: "<<sum<<endl;
}