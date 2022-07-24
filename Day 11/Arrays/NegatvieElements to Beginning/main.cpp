#include <iostream>
using namespace std ;

void rearrange(int arr[] , int n){
   int j =0;
    for(int i=0;i<n;i++){
        if(arr[i] < 0){
            swap(arr[i] , arr[j]) ;
            j++ ;
        }
    }
}
int main (){
    int arr[6] = {9,4,-1,-4,-3,3};
    int n = 6 ;
   

    rearrange(arr , n) ;

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }cout << endl ;

   
    return 0 ;
}