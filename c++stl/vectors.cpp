#include<iostream>
#include<vector>
using namespace std;
int main(){

   vector<int>v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   cout<<"size"<<v.size()<<endl;
   cout<<"cap"<<v.capacity()<<endl;

//    v.resize(10);
   cout<<"cap"<<v.capacity()<<endl;
   v.pop_back();
   v.pop_back();
     cout<<"size"<<v.size()<<endl;
   cout<<"cap"<<v.capacity()<<endl;


 
   for(int i=0;i<v.size();i++){
   cout<<v[i]<<" ";
   }


}