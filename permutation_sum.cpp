https://practice.geeksforgeeks.org/problems/permutations-and-sum3001/1/
/*
Given a number N , calculate total number of permutations of it and also the sum of all permutations including that number itself.
 

Example 1:

Input: N = 5
Output: 1 5
Explanation: There is only one permutation
of 5 and sum of this permutaion is 5.*/

vector<int> permutaion(int N) {
	    string s = to_string(N);
	    sort(s.begin(), s.end());
	    int cnt = 0;
	    int tot = 0;
	    do{
	        tot += stoi(s);
	        cnt++;
	    }
	    while(next_permutation(s.begin(), s.end()));
	        vector<int>res;
	        res.push_back(cnt);
	        res.push_back(tot);
	        return res;
	    
	}
