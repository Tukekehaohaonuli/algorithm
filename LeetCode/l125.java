public class l125 {
    public boolean isPalindrome(String s) {
        String ans=s.toLowerCase();
        int i=0,j=s.length()-1;
        while(i<j){
            if(!Character.isLetterOrDigit(ans.charAt(i)))
            {i++;continue;}
            if(!Character.isLetterOrDigit(ans.charAt(j)))
            {j--;continue;}
            if(ans.charAt(i)!=ans.charAt(j))
            return false;
            i++;j--;
        }
        return true;
    }
    public static void main(String[] args){
        l125 l=new l125();
        String s="A man, a plan, a canal: Panama";
        System.out.println(l.isPalindrome(s));
    }
}