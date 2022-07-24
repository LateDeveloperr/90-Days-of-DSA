#include <iostream>
using namespace std;

void merge(int arr[] , int s , int e){
    int mid = (s+e)/2;
    
    // declaring the length of arrays
    int length1 = mid - s + 1 ;
    int length2 = e - mid ;

    // copying elements from original arrays
    int *first =  new int[length1] ;
    int *second = new int[length2] ;
    
    // copying the values now in first
    int k = s ;
    for(int i=0 ; i < length1 ; i++){
        first[i] = arr[k++] ; 
    }

    // copying the values now in second
    k = mid + 1 ;
    for (int i = 0; i < length2; i++){
        second[i] = arr[k++] ;
    }

    // code of merging 2 sorted arrays
    int index1 = 0 ;
    int index2 = 0 ;
    k = s ;
    
    while(index1 < length1 && index2 < length2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++] ;
        }
        else{
            arr[k++] = second[index2++] ;
        }
    }

    while(index1 < length1){
        arr[k++] = first[index1++] ;
    }

    while(index2 < length2){
        arr[k++] = second[index2++];
    }
    
}

void mergeSort(int *arr , int s , int e){

 //base case
 if(s>=e){
    return ;
 }
 
 int mid = (s+e)/2;

 mergeSort(arr , s , mid) ;  // left part sort krna hai 
 mergeSort(arr , mid+1 , e); // right part sort krna hai

//merge arrays
 merge(arr , s , e) ;

}

int main(){
    int arr[5] = { 0,2,1,2,0};
    int n = 5;

    mergeSort(arr , 0 , n-1);

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " " ; 

    }
    return 0;
}