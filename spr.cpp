#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int secondlargest(int arr[],int n){
   sort(arr,arr+n);
    return arr[n-4];
}

int main(){
 int arr[5]={2,4,6,7,3};
 int n=sizeof(arr)/sizeof(arr[0]);
 
cout<<"Element of the second largest"<<secondlargest(arr,n);

	return 0;
}