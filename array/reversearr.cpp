#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end){
   
   while(start<end){
       swap(arr[start],arr[end]);
       start++;
       end--;
   }
}
   void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

int main(){
    int arr[6]={10,20,30,40,50,60};
    int n=6;
    printArray(arr,6);
     reverse(arr,0,n-1);
     
     
}