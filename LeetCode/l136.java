public class l136 {
    final int IMAX=Integer.MAX_VALUE;
    public int singleNumber(int[] nums) {
        int ans[]=new int [IMAX];
        for(int i=0;i<nums.length;i++){
            ans[nums[i]]++;
        }
        for(int i=0;i<IMAX;i++){
            if(ans[i]==1){
                return i;
            }
        }
        return 0;
    }
    public static void main(String[] args){
        l136 l=new l136();
        int nums[]={2,2,1};
        System.out.println(l.singleNumber(nums));
    }
}