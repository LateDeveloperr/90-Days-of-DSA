#include <iostream>
using namespace std ;
int getSum(int arr[] , int size ){

    // base case 
    if(size == 0 ){ 
        return 0 ; 
    }
    if(size == 1) {
        return arr[0] ;
    }

    // recursion relation 

    int remainingPart = getSum(arr+1 , size-1);
    int sum = arr[0] + remainingPart ; 

    return sum ;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5 ;

    int Sum = getSum(arr , size) ; 

    cout << "Sum of the Array is " << Sum << endl ;
    return 0 ;
}