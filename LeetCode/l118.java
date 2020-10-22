
import java.util.*;
public class l118{
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans=new ArrayList<List<Integer>>();
        if(numRows==0){
            return ans;
        }
        ans.add(new ArrayList<>());
        ans.get(0).add(1);
        for(int i=1;i<numRows;i++){
            List<Integer> order=new ArrayList<>();
            List<Integer> preoder=ans.get(i-1);
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    order.add(1);
                }else{
                    order.add(preoder.get(j-1)+preoder.get(j));
                }
            }
            ans.add(order);
        }
        return ans;
    }
    public static void main(String[] args){
        l118 l=new l118();
        System.out.println(l.generate(5));
    }
}