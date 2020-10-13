class leetcode27{
    public int removeElement(int[] nums, int val) {
        int ans=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=val){
                nums[ans++]=nums[i];
            }
        }
        return ans;
    }
    public static void main(String[] args){
        int nums[]={3,2,2,3};
        leetcode27 l=new leetcode27();
        int ans=l.removeElement(nums, 3);
        for(int i=0;i<ans;i++){
            System.out.println(nums[i]);
        }
    }
}