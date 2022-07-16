#include <iostream>
using namespace std ;
bool isSorted(int arr[] , int size ){

    // base case 
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0]> arr[1]){
       return false ; 
    }
    else {
       bool ans = isSorted(arr+1 , size-1) ; 
       return ans ;
    }
}
int main(){
    int arr[5] = {6,4,8,9,2}; 
    int size = 5 ;

    bool ans = isSorted(arr , size) ; 

    if(ans){ 
        cout << "Array is Sorted" << endl ; 
    }
    else {
        cout << " Array is not Sorted" << endl ;
    }
}