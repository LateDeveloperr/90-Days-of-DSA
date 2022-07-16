#include <iostream>
using namespace std;
int  climbStairs(int n ){

    // base case
    if (n < 0) {
        return 0;
    }
    if(n == 0){
        return 1;
    }

    // processing
    int ans = climbStairs(n-1) + climbStairs(n-2);

    return ans ;


}
int main() {
    int n = 5 ;


    climbStairs( n ) ;
    cout << "pahuch gya" << endl;


    return 0;
}
