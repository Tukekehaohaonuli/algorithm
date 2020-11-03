public class l167 {
    public int[] twoSum(int[] numbers, int target) {
        int ans[]=new int [2];
        for(int i=0;i<numbers.length;i++){
            ans[0]=i+1;
            for(int j=i+1;j<numbers.length;j++){
                if(numbers[i]+numbers[j]==target){
                    ans[1]=j+1;
                    return ans;
                }
            }
        }
        return ans;
    }
    public static void main(String[] args){
        l167 l=new l167();
        int numbers[]={2,7,11,15};
        int target=9;
        System.out.println(l.twoSum(numbers, target));
    }
}