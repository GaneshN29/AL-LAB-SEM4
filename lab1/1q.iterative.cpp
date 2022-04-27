#include<bits/stdc++.h>
using namespace std;
int coun;
int searchb(int a[],int n,int f){
int l=0,h=n-1,mid;
coun=coun+3;
while(l<h){
        mid=l+h+1/2;
        coun++;
        coun++;
    if(a[mid]==f){
            coun++;
        return mid;
    }
    coun++;
    if(a[mid]<f){
        l=mid+1;
        coun++;
    }
    coun++;
    if(a[mid]>f){
            coun++;
        h=mid-1;
    }
    coun++;
}
coun++;//flase condition//
coun++;
return -1;
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
int y=searchb(a,n,f);
if(y==-1)
cout<<"Not Found"<<endl;
else{
    cout<<"Found at: "<<y<<endl;
}
cout<<"count: "<<coun;
}
