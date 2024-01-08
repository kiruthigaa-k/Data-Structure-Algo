public class Solution {
    public static int upperBound(int []arr, int x, int n){
        // Write your code here.
        int left=0;
        int right=arr.length-1;
        int ans=0;
        while(left<=right){
            int mid=(left+right)/2;
            if(arr[mid]>x){
                ans=mid;
                right =mid-1;
            }
            else{
                right=mid+1;
            }
        }
        return ans;
    }
}
