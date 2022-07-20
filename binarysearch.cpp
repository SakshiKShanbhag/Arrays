#include<iostream>
using namespace std;



int BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid = start+(end-start)/2;


    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        // go to right part
        if(key>arr[mid]){
            start=mid+1;
        }
        else {
            //key is less than mid    
            end = mid-1;
        }
        mid = start+(end-start)/2;

    }

    return -1;
}
int main()
{
    int even[6]={2,4,6,7,9,8};
    int odd[5]={3,5,11,14,16};

    int evenIndex=BinarySearch(even,6,7);
    int oddIndex=BinarySearch(odd,5,5);


    cout<<"the index of 7 is"<<evenIndex<<endl;
    cout<<"the index of 5 is"<<oddIndex<<endl;

    return 0;
}