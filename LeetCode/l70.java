public class l70 {
    public int climbStairs(int n) {
        int dp[]=new int [n+1];
       // System.out.println(dp.length);
        dp[0]=1;dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
    public static void main(String[] args){
        l70 l=new l70();
        System.out.println(l.climbStairs(2));
    }
    
}