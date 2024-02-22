#include <iostream>
using namespace std;

int fibo(int n){
    if (n==0) return 0;
    if (n==1) return 1; // base case

    int ans = fibo(n-1) + fibo(n-2); // recursive relation
    return ans;
}


int main() {
    int n;
    cin >> n;

    int answer = fibo(n);
    cout << answer << endl;
}