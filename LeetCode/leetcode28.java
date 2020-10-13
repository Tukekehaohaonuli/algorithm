public class leetcode28 {
    public int strStr(String haystack, String needle) {
        if(needle.length()==0){
            return 0;
        }
        int ans=-1;
        int i=0,j=0;
        for(i=0;i<haystack.length()-needle.length()+1;i++){
            for(j=0;j<needle.length();j++){
                if(haystack.charAt(i+j)!=needle.charAt(j)){
                    break;
                }
            }
            if(j==needle.length()){
                ans=i;
                break;
            }
        }
        return ans;
    }
    public static void main(String[] args){
        String haystack=new String("hello");
        String needle=new String("ll");
        leetcode28 l=new leetcode28();
        int ans=l.strStr(haystack, needle);
        System.out.println(ans==0?-1:ans);
    }

}