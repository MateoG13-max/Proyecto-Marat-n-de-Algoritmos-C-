// Ejercicio 150 - Knapsack 0/1 (programación dinámica)
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,W; cout<<"n items y capacidad W: "; cin>>n>>W;
    vector<int> wt(n), val(n);
    for(int i=0;i<n;i++) cin>>wt[i]>>val[i];
    vector<int> dp(W+1,0);
    for(int i=0;i<n;i++){
        for(int w=W;w>=wt[i];w--) dp[w]=max(dp[w], dp[w-wt[i]]+val[i]);
    }
    cout<<"Valor máximo: "<<dp[W]<<"\n";
    return 0;
}
