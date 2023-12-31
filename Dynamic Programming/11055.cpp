#include<iostream>
#include<algorithm>
using namespace std;

int n;
int arr[1001];
int dp[1001];
int ans=0;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        dp[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]) dp[i]=max(dp[i],dp[j]+arr[i]);
        }
        ans=max(ans,dp[i]);
    }
    cout << ans << '\n';
}

// O(N^2)