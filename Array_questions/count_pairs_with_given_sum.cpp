#include<iostream>
using namespace std;
int main()
{
int n,array[20],i,j,pair=0,target;
cout<<"Enter the no. of Elements in array"<<endl;
cin>>n;
cout<<"Enter the elements"<<endl;
for(i=0;i<n;i++){
  cin>>array[i];
}
cout<<"Enter the target value"<<endl;
cin>>target;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(array[i]+array[j]==target){
            pair+=1;
            
            
        }
        
    }
}

cout<<"Total No. of pairs are : "<<pair<<endl;
 
return 0;
 }