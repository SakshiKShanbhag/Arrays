#include <iostream>
 using namespace std;
 void printArray(int arr[] , int size){
     cout<<"printing the array"<<endl;
     for(int i=0; i<=size ; i++){
         cout<<arr[i]<<endl;
     }


     cout<<"printing done"<<endl;
 }


 int main(){
     int number[7] = {2,4,5};
printArray(number,7);


return 0;
 }