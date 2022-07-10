year 2021
https://leetcode.com/problems/find-the-minimum-number-of-fibonacci-numbers-whose-sum-is-k/
//code//
  int findMinFibonacciNumbers(int k) {
        vector<long long > vec = {1,1};
        int size = vec.size();
        while(vec.back() < k){
            vec.push_back(vec[size-1] + vec[size-2]);
            size++;
        }
        vector<int> res;
        int i = vec.size()-1;
        int sum  = 0;
        while(sum  < k && i>=0){
            int temp = sum + vec[i];
            if(temp <= k){
                sum += vec[i];
                res.push_back(vec[i]);
                if(sum == k) break;
            }
            else i--;                        
        }
        return res.size();        
    }

https://www.geeksforgeeks.org/remove-elements-to-make-array-sorted/

void removeElements(int arr[], int n)
{
 
    // l stores the index
    int l = 1;
    for (int i = 1; i < n; i++) {
        if (arr[l - 1] <= arr[i]) {
            arr[l] = arr[i];
            l++;
        }
    }
 
    // Print the sorted array
    for (int i = 0; i < l; i++)
        cout << arr[i] << " ";
}

//  https://codeforces.com/blog/entry/91011

// code//

# include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	const int mod=1e9+7;
	cin>>n>>m;
	vector<bool> inf(n,false);
	queue<int> q;
	for(int i=0;i<m;i++){
		int x;cin>>x;
		inf[x-1]=true;
		q.push(x-1);
	}
	int ways=1;
	while(!q.empty()){
		int sz=q.size();
		ways= (ways%mod *q.size()%mod)%mod;
		for(int i=0;i<sz;i++){
			int ip=q.front();
			q.pop();
			if(ip-1>=0 and !inf[ip-1])
				inf[ip-1]=true,q.push(ip-1);
			if(ip+1<n and !inf[ip+1])
				inf[ip+1]=true,q.push(ip+1);
		}
		//if(!q.empty())
		
	}
	cout<<ways<<endl;

} 

// combination sum // https://leetcode.com/problems/combination-sum/

// powerful number
// code// https://drive.google.com/file/d/1yBPjBqZqm4ytdC6KrnKnp0hitJmR88C1/view

#include<bits/stdc++.h>
using namespace std;
int power(int a , int n){
    int tmp = n;
    int res = 1;
    while(tmp--){
        res*=2;
    }
    return res;
}

int helper(int m){
    int tmp = m;
    int rem;
    int curm=0;
    while(tmp){
        rem = tmp%10;
        curm+=rem;
        tmp = tmp/10;
        if(tmp==0){
            if(curm/10==0){
                break;
            }
            tmp=curm;
            curm=0;
        }
    }
    return curm;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        m = power(2,n);
        
        int ans = helper(m);
        cout<<ans<<" ";
    }
    cout<<endl;
    return 0;
}




