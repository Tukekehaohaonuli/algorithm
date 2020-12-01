public class l34 {
    public int[] searchRange(int[] nums, int target) {
        int ans[]=new int [2];
        int i=0;
        int temp=0;
        int start=0,end=0;
        while(i<nums.length&&nums[i]<=target){
            if(nums[i]==target){
                if(temp==0){
                    start=i;
                    end=i;
                    temp=1;
                }
                else{
                    end=i;
                    temp=2;
                }
            }
            i++;
        }
        if(temp==2||temp==1){
            ans[0]=start;
            ans[1]=end;
            return ans;
        }else{
            ans[0]=-1;
            ans[1]=-1;
            return ans;
        }
    }
    public static void main(String[] args){
        l34 l=new l34();
        int nums[]={5,7,7,8,8,10};
        int ans[]=l.searchRange(nums, 8);
        System.out.println(ans[0]+" "+ans[1]);
    }
}