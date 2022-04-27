#include<bits/stdc++.h>
using namespace std;
int coun;
int searchb(int a[],int n,int f,int l,int h){

int mid=l+h+1/2;
coun++;
coun++;
if(a[mid]==f){
        coun++;
return mid;
}
coun++;
if(l>h){
        coun++;
    return -1;}
coun++;
if(a[mid]<f){
searchb(a,n,f,mid+1,h);
}
coun++;
if(a[mid]>f){
searchb(a,n,f,l,mid-1);
}
}
int main(){
 coun=0;
int n;
cin>>n;
int a[n];
for(int i=0; i<n; i++)
    cin>>a[i];
int f;
cin>>f;
int l=0,h=n-1;
int y=searchb(a,n,f,l,h);
if(y==-1)
cout<<"Not Found"<<endl;
else{
    cout<<"Found at: "<<y<<endl;
}
cout<<"count: "<<coun;
}
