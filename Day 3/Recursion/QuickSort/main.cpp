#include <iostream>
using namespace std ;

int partition(int arr[] , int s , int e){
    // declaring the pivot and count 
    int pivot = arr[s] ;
    int count = 0 ;

    for(int i = s+1 ; i<=e ; i++){
        if(arr[i]<=pivot){
            count++ ;
        }
    }

    // place pivot at right position
    int pivotIndex = s + count ;
    swap(arr[pivotIndex] , arr[s]) ;

    // left and right part sort karna hai
    int i=s , j=e ;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++ ;
        }
        
        while(arr[j]>pivot){
            j--;
        }
        
        // swapping the indexes and moving the pivot
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++] , arr[j--]);
        }
    }
    //returning ANSWER
    return pivotIndex ;

}
void quickSort(int arr[] , int s , int e){

    //base case
    if(s>=e){
        return ;
    }
    
    // partition krenge
    int p = partition(arr , s , e) ;

    // left part sort 
    quickSort(arr , s , p-1) ;

    //right part sort krenge
    quickSort(arr , p+1 , e) ;

}
int main(){
    int arr[7] = {5,4,3,9,2,1,8} ;
    int n = 7 ;

    quickSort(arr , 0 , n-1) ;
    
    //printing the array
    for(int i=0 ; i<n ; i++){
        cout << arr[i] <<  " " ; 
    } cout << endl  ;

return 0 ;

}

