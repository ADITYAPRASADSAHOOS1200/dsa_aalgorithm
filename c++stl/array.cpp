#include<iostream>
#include<array>
using namespace std;
int main(){
int basic[3]={1,2,3};//declaring array
array<int,4>a={1,2,3,4}; //declaring array
int size=a.size();// size of the array
for(int i=0;i<size;i++){// traversing all arrays;
    cout<<a[i]<<endl;
}
cout<<"element at 2nd index->"<<a.at(2)<<endl;  // index check
cout<<"empty or not->"<<a.empty()<<" "<<endl;   // empty all elements
cout<<"first element->"<<a.front()<<" "<<endl;   // it will check front elements 
cout<<"last element->"<<a.back()<<" "<<endl;     // it will check back elements
}