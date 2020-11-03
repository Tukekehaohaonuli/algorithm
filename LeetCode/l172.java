public class l172 {
    public int trailingZeroes(int n) {
        long ans=1;
        int value=0;

        for(int i=1;i<=n;i++){
            ans*=i;
            if(ans==((ans/10)*10)){
                System.out.println(ans);
                value++;
                ans/=10;
            }
        }

        return value;
    }
    public static void main(String[] args){
        l172 l=new l172();
        System.out.println(l.trailingZeroes(30));
    }
}