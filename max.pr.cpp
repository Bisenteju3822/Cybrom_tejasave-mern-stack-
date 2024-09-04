#include<iostream>
#include <algorithm>
using namespace std;



    int which_is_greater(int arr[],int n){
    
        int max;
      max=arr[0];
       
        for(int i=1;i<n;i++){
            if(arr[i]>max){
            
             max=arr[i];
            }
        }
      return max;
    } 
    int main(){
         int arr[4]={3,4,6,5};
        int n = sizeof(arr) / sizeof(arr[0]);
       
 cout<<  which_is_greater( arr, n);
    
    }
    
    
    
    