#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid = start+(end-start)/2;

    


    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        // go to right part
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        
         
        
        mid = start+(end-start)/2;

    }

    return ans;
}

int lastOcc(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
     int mid = start+(end-start)/2;

    


    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        // go to right part
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        
         
        
        mid = start+(end-start)/2;

    }

    return ans;
} 


int main()
{
    int even[6]={2,4,7,7,7,7};
   

    


    cout<<"the first ocuurence of 7 is at index "<<firstOcc(even,6,7)<<endl;
    cout<<"the last ocuurence of 7 is at index "<<lastOcc(even,6,7)<<endl;
    

    return 0;
}
