#include<iostream>
using namespace std;

int b[10],array[20];

void merge(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(array[l1] <= array[l2])
         b[i] = array[l1++];
      else
         b[i] = array[l2++];
   }
   
   while(l1 <= mid)    
      b[i++] = array[l1++];

   while(l2 <= high)   
      b[i++] = array[l2++];

   for(i = low; i <= high; i++)
      array[i] = b[i];
}

void mergesort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      mergesort(low, mid);
      mergesort(mid+1, high);
      merge(low, mid, high);
   } else { 
      return;
   }   
}
int main()
{
int i,n;
cout<<"Enter the Elements in the array"<<endl;
cin>>n;
cout<<"Enter the elements"<<endl;
for(i=0;i<n;i++){
    cin>>array[i];
}
cout<<endl;
cout<<"array before sorting"<<endl; 
   for(i = 0; i<n; i++){
      cout<<array[i]<<" ";
   }
   
   mergesort(0, n-1);
   cout<<endl;
 cout<<"array after sorting"<<endl; 
   
   for(i = 0; i < n; i++){
      cout<<array[i]<<" ";
}
cout<<endl;
 
return 0;
 }