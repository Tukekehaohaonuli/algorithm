public class l198 {
    public int rob(int[] nums) {
        int value1=0;
        int value2=0;
        for(int i=0;i<nums.length;i=i+2){
            value1+=nums[i];
        }
        for(int i=1;i<nums.length;i=i+2){
            value2+=nums[i];
        }
        return value1>value2?value1:value2;
    }
    public static void main(String[] args){
        l198 l=new l198();
        int nums[]={1,2,3,1};
        System.out.println(l.rob(nums));
    }
}