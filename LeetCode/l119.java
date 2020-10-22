import java.util.*;
public class l119 {
    public List<Integer> getRow(int rowIndex) {
        List<Integer> pre=new ArrayList<>();

        List<Integer> ans=new ArrayList<>();
        ans.add(1);
        if(rowIndex==0){
            return ans;
        }
        for(int i=1;i<rowIndex+1;i++){
            pre.clear();
            for(Integer a:ans){
                pre.add(a);
            }
            ans.clear();
           // System.out.println(pre);
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    ans.add(1);
                }else{
                    ans.add(pre.get(j-1)+pre.get(j));
                }
            }
        }
        return ans;
    }
    public static void main(String[] args){
        l119 l= new l119();
        System.out.println(l.getRow(3));
    }
}