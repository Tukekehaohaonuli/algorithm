public class l67 {
    public String addBinary(String a, String b) {
        return Integer.toBinaryString(
            Integer.parseInt(a,2)+Integer.parseInt(b,2)
        );
    }
    public static void main(String[] args){
        String a="11";
        String b="1";
        l67 l=new l67();
        System.out.println(l.addBinary(a, b));
        
    }
}