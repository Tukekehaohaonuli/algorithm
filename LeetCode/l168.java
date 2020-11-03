import java.util.HashMap;
import java.util.Map;
public class l168 {
    public String convertToTitle(int n) {
        Map<Integer,String> h=new HashMap<Integer,String>();
        h.put(0,"");
        h.put(1,"A");
        h.put(2,"B");
        h.put(3,"C");
        h.put(4,"D");
        h.put(5,"E");
        h.put(6,"F");
        h.put(7,"G");
        h.put(8,"H");
        h.put(9,"I");
        h.put(10,"J");
        h.put(11,"K");
        h.put(12,"L");
        h.put(13,"M");
        h.put(14,"N");
        h.put(15,"O");
        h.put(16,"P");
        h.put(17,"Q");
        h.put(18,"R");
        h.put(19,"S");
        h.put(20,"T");
        h.put(21,"U");
        h.put(22,"V");
        h.put(23,"W");
        h.put(24,"X");
        h.put(25,"Y");
        h.put(26,"Z");
        n--;
        String ans="";
        ans+=h.get(n%26);
        ans=h.get(n/26)+ans;
        return ans;
    }
    public static void main(String[] args){
        l168 l=new l168();
        System.out.println(l.convertToTitle(26));
    }
}