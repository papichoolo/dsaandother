#include <bits/stdc++.h>
using namespace std;
void eratosthenes(int n){
    int prime[n];
    memset(prime, true, sizeof(prime));
    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int p=i*i;p<=n;p+=i){
                 prime[i] = false;
            }
        }
    }
 // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
            }
int main(){

    int n = 30;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    eratosthenes(n);
    return 0;
}