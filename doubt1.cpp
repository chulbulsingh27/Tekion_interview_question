A function f(x) is defined as the smallest fibonacci number greater than or equal to x. Ex : f(1)=1,f(5)=5,f(6)=8. The task is to calculate g(l,r)
where g(l,r) is defined as g(l,r) = f(l)+f(l+1)+f(l+2)+…..+f(r).  Constraints: 1<=l<=r<=10^9. 

The idea is to first compute all the fibonacci numbers below 10^9 and the smallest fibonacci number greater than 10^9. There are hardly 46 such fibonacci numbers.
Now we can run a loop from l to r and check for the lower bound of  each number in between l to r. The catch is since r-l in the worst case is 10^9,
one will get a tle verdict if we simply find the lower bound for every number from l to r 
(Can you optimize this solution to pass all the test cases?).
  
  
  // https://leetcode.com/problems/coin-change-2/
  
  //Explain about different types of indexes in MySQL databases and how they work
Given an array of integer number, find out next immediate largest number for each element in array
Given a stream of integers, find the first repeating number. 0<=a[i]<=50
Given an array of continuous integers has only one repeating number in it. find that number


https://www.geeksforgeeks.org/add-two-numbers-represented-by-linked-lists/

https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1

// left view of tree
//right view of tree

READ External Sorting from gfg

reverse a stack without using other stack (by using recursion)
  
 different types of scheduling in operating system.
  
 benefits of indexing and different types of indexing in DBMS.

  how can you improve FCFS scheduling, write a code to implement FCFS scheduling and the difference between process and a thread.
  Tell me about different access specifiers in java
