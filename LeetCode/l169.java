public class l169 {
    public int majorityElement(int[] nums) {
        int ans=0,value=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=value){
                ans--;
                if(ans<=0){
                    ans=1;
                    value=nums[i];
                }
            }else{
                ans++;
            }
        }
        return value;
    }
    public static void main(String[] args){
        l169 l=new l169();
        int nums[]={2,2,1,1,1,2,2};
        System.out.println(l.majorityElement(nums));
    }
}