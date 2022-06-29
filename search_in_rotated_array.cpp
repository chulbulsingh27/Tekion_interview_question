//Given a sorted and rotated array A of N distinct elements which is rotated at some point, 
//and given an element key. The task is to find the index of the given element key in the array A.

int findMinEle(vector<int>& nums){
        int n=nums.size();
        int start=0;
        int end=n-1;
        if(nums[start]<nums[end]) return 0;
        while(start<=end){
            int mid=start + (end-start)/2;
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
            if(nums[mid]<=nums[prev] && nums[mid]<=nums[next]) return mid;
            // move along unsorted array
            else if(nums[mid]<nums[end]) end=mid-1;
            else if(nums[mid]>nums[end]) start=mid+1;
        }
        return 0;
    }
    int binarySearch(vector<int>& arr, int target,int i, int j){
        int start=i;
        int end = j;
        while(start<=end){
            int mid=start + (end-start)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target) end=mid-1;
            else if(arr[mid]<target) start=mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int minEle=findMinEle(nums);
        int a=binarySearch(nums,target,0,minEle-1);
        int b=binarySearch(nums,target,minEle,n-1);
        if(a==-1 && b==-1) return -1;
        else if(a==-1) return b;
        else return a;
    }
