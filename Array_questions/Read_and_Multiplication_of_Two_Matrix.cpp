#include<iostream>
using namespace std;


int main()
{
    int rows1,column1,rows2,column2,i,j,k,Matrix1[10][10],Matrix2[10][10],Mul[10][10];
    
//Matrix1:
    cout<<"Enter the Rows and Column for first Matrix"<<endl;
    cin>>rows1>>column1;  
    for(i=0;i<rows1;i++){
        for ( j = 0; j < column1; j++)
        {
            cout<<"Enter the element for Matrix1["<<i+1<<"]["<<j+1<<"] : ";
            cin>>Matrix1[i][j];
        }
        
    }
   
//Matrix2:
cout<<endl;
cout<<endl;
    cout<<"Enter the Rows and Column for second Matrix"<<endl;
    cin>>rows2>>column2;
    for(i=0;i<rows2;i++){
        for ( j = 0; j < column2; j++)
        {
            cout<<"Enter the element for Matrix1["<<i+1<<"]["<<j+1<<"] : ";
            cin>>Matrix2[i][j];
        }
        
    }


//Multiplication of Matrix1 and Matrix2:
 for(i=0;i<rows1;i++){
        for ( j = 0; j < column2; j++)
        {
            Mul[i][j] = 0;
            for(k=0;k<column1;k++){
           Mul[i][j]+=Matrix1[i][k]*Matrix2[k][j];    
            }
            
        }
        
    }
cout<<endl;
cout<<endl;
cout<<"Multiplication of two Matrix are : "<<endl;
    for(i=0;i<rows1;i++){
        for ( j = 0; j < column2; j++)
        {
            
            cout<<Mul[i][j]<<" ";
        }
        cout<<endl;
        
    }
 
return 0;
 }

