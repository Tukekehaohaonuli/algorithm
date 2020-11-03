public class l160 {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int lengthA=0,lengthB=0;
        ListNode s1=headA;
        ListNode s2=headB;
        while(s1!=null){
            lengthA++;
            s1=s1.next;
        }
        while(s2!=null){
            lengthB++;
            s2=s2.next;
        }
        if(lengthA>lengthB){
            for(int i=0;i<lengthA-lengthB;i++){
                headA=headA.next;
            }
        }else{
            for(int i=0;i<lengthB-lengthA;i++){
                headB=headB.next;
            }
        }
        while(headA!=null){
            if(headA==headB)
            return headA;
            headA=headA.next;
            headB=headB.next;
        }
        return null;
    }
    public static void main(String[] args){
        l160 l=new l160();
        ListNode s1=new ListNode(4);
        ListNode s2=new ListNode(1);
        ListNode s3=new ListNode(5);
        ListNode s4=new ListNode(0);
        ListNode s5=new ListNode(1);
        ListNode s6=new ListNode(8);
        ListNode s7=new ListNode(4);
        ListNode s8=new ListNode(5);
        s1.next=s2;
        s2.next=s6;
        s3.next=s4;
        s4.next=s5;
        s5.next=s6;
        s6.next=s7;
        s7.next=s8;
        
        System.out.println(l.getIntersectionNode(s1, s3).val);
    }
}