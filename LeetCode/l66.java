public class l66 {
    static final int MAXN=100000;
    public int[] plusOne(int[] digits) {
        int value=0;
        for(int i=0;i<digits.length;i++){
            value=value*10+digits[i];
        }
        value=value+1;
        System.out.println(value);
        int ans[]=new int[digits.length];
        int len=0,temp=value;
        while(temp>0){
            temp=temp/10;
            len++;
        }
        for(int i=len-1;i>=0;i--){
            ans[i]=value%10;
            value=value/10;
        }
        return ans;
    }
    public static void main(String[] args){
        int digits[]={4,3,2,1};
        l66 l=new l66();
        int ans[]=new int [MAXN];
        ans=l.plusOne(digits);
        for(int i=0;ans[i]!=0;i++)
        System.out.println(ans[i]);
        //System.out.println(l.plusOne(digits));
    }
}