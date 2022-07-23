#include <iostream>
using namespace std;
void reverse(int arr[] , int s , int e){
  // base case
  if(s>e){
    return ;
  }

    swap(arr[s] , arr[e]) ;
    s++ ;
    e-- ;
  
 reverse(arr , s,e) ;

}
int main(){
    int arr[5] = { 5,4,3,2,1} ;
    int n =5 ;

    reverse(arr , 0 , n-1) ;

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}