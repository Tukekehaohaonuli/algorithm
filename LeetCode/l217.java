import java.util.HashSet;
public class l217 {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> set=new HashSet<Integer>();
        for(int i=0;i<nums.length;i++){
            if(set.contains(nums[i])){
                return true;
            }else{
                set.add(nums[i]);
            }
        }
        return false;
    }
    public static void main(String[] args){
        l217 l=new l217();
        int nums[]={1,2,3,1};
        System.out.println(l.containsDuplicate(nums));
    }
}   