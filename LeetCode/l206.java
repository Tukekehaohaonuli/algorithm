public class l206{
    public ListNode reverseList(ListNode head) {
        if(head==null){
            return head;
        }
        ListNode p=head.next;
        head.next=null;
        while(p!=null){
            ListNode t=p.next;
            p.next=head;
            head=p;
            p=t;
        }
        return head;
    }
    public static void main(String[] args){
        ListNode s1=new ListNode(1);
        ListNode s2=new ListNode(2);
        ListNode s3=new ListNode(3);
        ListNode s4=new ListNode(4);
        ListNode s5=new ListNode(5);
        s1.next=s2;s2.next=s3;s3.next=s4;s4.next=s5;
        l206 l=new l206();
        System.out.println(l.reverseList(s1));
    }
}