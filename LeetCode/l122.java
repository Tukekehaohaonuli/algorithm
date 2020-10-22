public class l122 {
    public int maxProfit(int[] prices) {
        int preValue=prices[0];
        int ans=0;
        for(int i=1;i<prices.length;i++){
            if(prices[i]<=preValue)
            preValue=prices[i];
            else{
                ans=ans+prices[i]-preValue;
                preValue=prices[i];
            }
        }
        return ans;
    }
    public static void main(String[] args){
        l122 l=new l122();
        int prices[]={7,1,5,3,6,4};
        System.out.println(l.maxProfit(prices));
    }
}