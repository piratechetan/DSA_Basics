#include<iostream>
using namespace std;
int main()
{
int n,i,array[100],position,element;
cout<<"Enter no. of elements in array"<<endl;
cin>>n;
cout<<"Enter the elements"<<endl;
for(i=0;i<n;i++){
    cin>>array[i];
}
cout<<"Enter the postion of array to insert"<<endl;
cin>>position;
cout<<"Enter the element you want to insert"<<endl;
cin>>element;
array[n]=array[position-1];
array[position-1]= element;
n++;
for(i=0;i<n;i++){
    cout<<array[i]<<" ";
}
return 0;
 }