#include<iostream>
using namespace std;
void print(int arr[][3],int row,int col){
   
cout<<"printing sum->"<<endl;   

for(int col=0;col<3;col++){
     int sum=0; 
   for(int row=0;row<3;row++){
           sum+=arr[row][col];
            }
            cout<<sum<<endl;
        } 
}

int largestsum(int arr[][3],int row,int col){

    int maxi=INT_MIN;
     int rowindex=-1;
      int sum=0; 
for(int row=0;row<3;row++){    
   for(int col=0;col<3;col++){
           sum+=arr[row][col];
            }
            cout<<sum<<endl;
        if(sum>maxi){
            maxi=sum;
            rowindex=row;
        }
     }
     cout<<"the maximum sum is"<<maxi<<endl;
       return rowindex;
}

int main(){

 int arr[3][3];
 cout<<"enter the elements:-"<<endl;
  for(int row=0;row<3;row++){
  for(int col=0;col<3;col++){
   cin>>arr[row][col];
  }
 } 

// print(arr,3,3);

cout<<largestsum(arr,3,3)<<endl;
}