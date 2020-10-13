class l38{
    public String countAndSay(int n) {
        String ans="1";
        if(n==1){
            return ans;
        }
        char oldvalue='`';
        String now="";
        for(int i=1;i<n;i++){
            now="";
            int num=1;
            for(int j=0;j<ans.length();j++){
                if(j==0){
                    oldvalue=ans.charAt(j);
                    num=1;
                }else{
                   if(ans.charAt(j)!=oldvalue){
                        now+=String.valueOf(num)+oldvalue;
                        oldvalue=ans.charAt(j);
                        num=1;
                   }else{
                       num++;
                   }
                }
            }
            now+=""+num+oldvalue;
            ans=now;
        }
        return now;
    }
    public static void main(String[] args){
        l38 l=new l38();
        System.out.println(l.countAndSay(5));
    }
}