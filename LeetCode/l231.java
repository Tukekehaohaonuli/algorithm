public class l231 {
    public boolean isPowerOfTwo(int n) {
        int ans=1;
        if(n==1){
            return true;
        }
        while(ans<n){
            ans*=2;
        }
        return ans==n?true:false;
    }
    public static void main(String[] args){
        l231 l=new l231();
        System.out.println(l.isPowerOfTwo(218));
    }
}