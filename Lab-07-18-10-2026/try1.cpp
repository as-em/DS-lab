
#include <bits/stdc++.h>
using namespace std;

void insert(int *arr,int size,int* total_ele){


    int pos = 4;
    int value = 67;
    
    
    if(size < *total_ele + 1 ){
        cout<< "not enough space";
        return;
    }
    if(pos<1 ||  *total_ele + 1 < pos){
        cout<<"invalid"<<endl;
        return;
    }
    
    
    for (int i = *total_ele; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    
    
    *total_ele = *total_ele + 1;
    
    
}

void del(int *arr,int size , int* total_ele){
    
    int pos = 5;
    
    
    if(size < *total_ele + 1 ){
        cout<< "not enough space";
        return;
    }
    if(pos<1 ||  *total_ele + 1 < pos){
        cout<<"invalid"<<endl;
        return;
    }
    
        
   for (int i = pos - 1; i < *total_ele - 1; i++) {
        arr[i] = arr[i + 1];
    }
    *total_ele = *total_ele - 1;
    
}

void print(int *arr,int* total_ele){
        // print array
    
    for(int i = 0;i<*total_ele;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    cout<<endl;
}

int main()
{
    
    
    int arr1[10] = {5,3,8,2,15,20};
    int total_ele = 6;
   
    // int arr1[10] ;
    
    // //input
    // cout<<"How many element to enter ?"<<endl;
    // int total_ele = 0;
    // cin>>total_ele;
    // for(int i = 0;i <total_ele;i++){
    //     cin>> arr1[i];
    // }
    
    // print
    
   print(arr1,&total_ele);

    int size = sizeof(arr1)/sizeof(int);
   //  cout<<size<<endl;
    insert(arr1,size,&total_ele);
       print(arr1,&total_ele);
    
    del(arr1,size,&total_ele);
    print(arr1,&total_ele);
    
   // cout<<arr1[7]<<endl;
   
   

    return 0;
}
