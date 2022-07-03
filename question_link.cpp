https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1/
Explain the pillars of OOP elaboratively
Discuss all the layers of OSI and TCP reference models and mention the protocols used in each the layers
Significance of layered model
Process and Threads
Paging and Fragmentation
https://www.geeksforgeeks.org/find-the-missing-number/
https://www.geeksforgeeks.org/count-even-length-binary-sequences-with-same-sum-of-first-and-second-half-bits/
//Reverse a stack without using any external data structure. Initially, I had no idea how to solve this problem.
//But the interviewer helped me by giving some hints and finally I was able to solve it.



//Find the merging point of two linked lists. I was told that no hints would be provided by the interviewer,
//but I knew the problem and I solved it quite easily.




//Then questions on Indexing in DBMS, Polymorphism, the difference between Process and Thread, Semaphores and Mutex.

//In an array of elements ( 1 <= a[i] <= n ), one element will be repeated. Find both the repeating and the missing elements.

answer --> Traverse the array. While traversing, use the absolute value of every element as an index and make the value 
at this index as negative to mark it visited. If something is already marked negative then this is the repeating element. To find missing, 
traverse the array again and look for a positive value.

//In an array of elements ( 1 <= a[i] <= n ) find the frequency of occurrence of numbers 1 to n without using any extra space (not even a hashmap). 
//I was about to quit this question, the interviewer gave me a hint and then I was able to solve it. He was telling me that I have missed an edge case,
//I didn’t get what was that edge case and he moved to the next question.

//Given a binary tree, for each node in the tree, replace the node value with the sum of its children subtrees.

//Next, he asked me to write a function for the tic tac toe game to check at a given point whether any of the players has won or the game is still going on. 
//I first wrote the brute force approach code but with the help of the interviewer, I optimized it.

//The next question was LCA of two nodes in a binary tree but he changed the tree structure.
 //Instead of left and right pointers for each node, he told me that each node will have a parent pointer pointing to the previous level parent node. 
 

// Function f(x) is defined as the smallest fibonacci number greater than or equal to x. The task is to calculate g(l,r)
//where g(l,r) is defined as g(l,r) = f(l)+f(l+1)+f(l+2)+…..+f(r).  Constraint: 1<=l<=r<=10^9.
 The idea is to first compute all the fibonacci numbers below 10^9 and the smallest fibonacci number greater than 10^9. 
 There are hardly 46 such fibonacci numbers. Now we can run a loop from l to r and check for the lower bound of each number
 in between l to r. The catch is since r-l in the worst case is 10^9,
one will get a tle verdict if we simply find the lower bound for every number from l to r (Can you optimize this solution to pass all the test cases?).
 
 
 


//Given N coins and an array of costs that represents the cost of each digit (1,2,…9), where costs[i] is the cost of picking the digit i. 
//The task is to find the largest number that can be represented by using the N coins.
 answer---> https://leetcode.com/discuss/interview-question/351204/DailyHunt-or-OA-or-Largest-Number/318167

public String change(int N, int[] costs) {
	String[] dp = new String[N + 1];
	int[] dpc = new int[N + 1];
	
	for (int i = 0; i <= N; i++) dp[i]="";
	
	for (int i = 1; i <= N; i++){
		for(int j = 0; j < 9; j++){
			if(costs[j] <= i && N-dpc[i-costs[j]]-costs[j]>=0 && ((j+1) + dp[i-costs[j]]).compareTo(dp[i]) > 0) {
				dp[i] = (j+1) + dp[i-costs[j]];
				dpc[i] = dpc[i-costs[j]]+costs[j];
			}
		}
	}
	return dp[N]==""?"-1":dp[N];
}
 


// This round also started with a basic introduction and some OS questions like he asked me to explain the deadlock phenomenon with the help of a real-life example. 
//Then he asked me about indexing in DBMS.


//In OS he asked,

Difference between process and thread.
Scheduling Algorithms.
Deadlocks.
Semaphore and Mutex.
Static and Dynamic Binding
Page fault and Demand Paging.
  
  
  
//In OOPs, he asked

Important features of OOps.
Diamond Problem in Multiple Inheritance.
Virtual Keyword.
//In DBMS, he asked

Normalization and its types.
Transactions.
ACID properties of DBMS.
//In CN, he asked :

Difference between TCP and UDP.
OSI Model.
