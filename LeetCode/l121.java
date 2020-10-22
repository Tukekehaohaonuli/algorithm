public class l121 {
    public int maxProfit(int[] prices) {
        int minValue=Integer.MIN_VALUE;
        for(int i=0;i<prices.length;i++){
            for(int j=i;j<prices.length;j++){
                if(prices[j]-prices[i]>minValue)
                minValue=prices[j]-prices[i];
            }
        }
        return minValue>0?minValue:0;
    }
    public static void main(String[] args){
        l121 l=new l121();
        int prices[]={7,1,5,3,6,4};
        System.out.println(l.maxProfit(prices));
    }
}