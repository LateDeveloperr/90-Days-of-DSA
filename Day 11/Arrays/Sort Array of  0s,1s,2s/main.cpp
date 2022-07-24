#include <iostream>
using namespace std ;

void printArray(int arr[] , int n){

    for(int i=0 ; i< n ; i++){
        cout << arr[i] << " " ;
    }
}
void sortArray(int arr[] , int n ){

int i ;
int count0 = 0 ; //declared variable for storing 0s
int count1 = 0 ; //declared variable for storing 1s
int count2 = 0 ; //declared variable for storing 2s

//first count all the 0s , 1,s and 2s
for(int i=0 ; i < n ; i++){
  switch(arr[i]){

  //counting 0s
  case 0 :
  count0 ++ ;
  break;
  
  //counting 1s
  case 1 :
  count1 ++ ;
  break;

  //counting 2s
  case 2 :
  count2 ++ ;
  break;
  }
}
//updating the array now
i = 0 ;

//printing 0s from beginning
while(count0 > 0){
    arr[i++] = 0;
    count0 -- ;
}

//printing 1s now
while(count1 > 0){
    arr[i++] = 1;
    count1--;
}

//printing 2s at the end
while(count2 > 0){
    arr[i++] = 2;
    count2 -- ;
}

printArray(arr , n) ;

}

int main() {
   int arr[12] = {0,2,1,2,0,2,1,2,1,1,0,1};
   int n = 12 ;

   sortArray(arr , n) ;


    return 0 ;
}