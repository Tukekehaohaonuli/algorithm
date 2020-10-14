public class l58 {
    public int lengthOfLastWord(String s) {
        int now=0,pre=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)==' '){
                if(now!=0)
                pre=now;
                now=0;
            }
            else{
                now++;
            }
        }
        return now==0?pre:now;
    }
    public static void main(String[] args){
        l58 l=new l58();
        System.out.println(l.lengthOfLastWord("a "));
    }
}