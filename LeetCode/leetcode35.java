public class leetcode35{
    public int searchInsert(int[] nums, int target) {
        for(int i=0;i<nums.length;i++){
            if(nums[i]>=target)
            return i;
        }
        return nums.length;
    }
    public static void main(String[] args){
        int nums[]={1,3,5,6};
        int target=5;
        leetcode35 l=new leetcode35();
        System.out.println(l.searchInsert(nums, target));
    }
}