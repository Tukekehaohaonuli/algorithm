public class l53 {
    public static final int maxn=1000005;
    public int maxSubArray(int[] nums) {
        int dp[]=new int[maxn];
        dp[0]=nums[0];
        for(int i=1;i<nums.length;i++){
            dp[i]=Math.max(dp[i-1]+nums[i],nums[i]);
        }
        int ans=nums[0];
        for(int i=0;i<nums.length;i++){
            if(dp[i]>ans){
                ans=dp[i];
            }
        }
        return ans;
    }
    public static void main(String[] args){
        int nums[]={-2,1,-3,4,-1,2,1,-5,4};
        l53 l=new l53();
        System.out.println(l.maxSubArray(nums));
    }
}