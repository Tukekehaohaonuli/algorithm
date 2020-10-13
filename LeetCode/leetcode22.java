public class leetcode22{
    public int removeDuplicates(int []nums){
        if(nums.length==0)
        return 0;
        int oldvalue=nums[0];
        int ans=1;
        for(int i=1;i<nums.length;++i){
            if(nums[i]==oldvalue){
                continue;
            }
            else{
                oldvalue=nums[i];
                nums[ans]=nums[i];
                ans++;
                
            //    now++;
            }
        }
        return ans;
    }
    public static void main(String[] args){
        int nums[]={0,0,1,1,1,2,2,3,3,4};
        leetcode22 s=new leetcode22();
        int ans=s.removeDuplicates(nums);
        for(int i=0;i<ans;i++){
            System.out.println(nums[i]);
        }
    }
}