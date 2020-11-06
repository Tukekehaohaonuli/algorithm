
public class l204 {
    public int countPrimes(int n) {
        int ans=0,i=0,j=0;
        for(i=2;i<n;i++){
            for(j=2;j<i;j++){
                if(i%j==0){
                    break;
                }
            }
            if(j>i-1){
                ans++;
            }
        }
        return ans;
    }

}