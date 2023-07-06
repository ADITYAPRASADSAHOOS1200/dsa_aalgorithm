#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int>v;

vector<int>a(5,3);//we can intialise the array (size,which number you have to intialise;
cout<<"print a"<<endl;
for(int i:a){
    cout<<i<<" ";
}
cout<<endl;

vector <int>last(a);//we can copy the elments in new vector like this!
cout<<"copy elements"<<endl;
for(int i:v){
    cout<<i<<" ";
}






cout<<"size->"<<v.capacity()<<endl;
v.push_back(1);//push_back is use to insert element
cout<<"capacity->"<<v.capacity()<<endl;
v.push_back(2);
cout<<"capacity->"<<v.capacity()<<endl;// capacity will allocate the memory assign to each variable and its get double
v.push_back(3);
cout<<"capacity->"<<v.capacity()<<endl;
cout<<"size->"<<v.size()<<endl;//it will check the size of the vector that have assigned
cout<<"index at->"<<v.at(2)<<endl;  //it will return the index of which element is present 
cout<<"front->"<<v.front()<<endl;   //it will check that which element assign in front
cout<<"back->"<<v.back()<<endl;     //it will check that which element assign in back 
 cout<<"before pop"<<endl;
 for(int i:v){
cout<<i<<" ";
 }cout<<endl;

v.pop_back();// it will from pop out the elements from back


cout<<"after pop"<<endl;
 for(int i:v){
cout<<i<<" ";
 }cout<<endl;


// vector <int>;//we can copy the elments in new vector like this!
// cout<<"copy elements"<<endl;
// for(int i:l){
//     cout<<i<<" ";
// }







}


