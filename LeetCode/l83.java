public class l83 {
    public ListNode deleteDuplicates(ListNode head) {
        if(head==null){
            return head;
        }
        ListNode s=head;
        ListNode pre=head;
        head=head.next;
        while(head!=null){
            if(head.val==pre.val){
                head=head.next;
                pre.next=head;
            }else{
                //oldvalue=head.val;
                head=head.next;
                pre=pre.next;
            }
        }
        return s;
    }
    public static void main(String[] args){
        ListNode a1=new ListNode(1);
        ListNode a2=new ListNode(1);
        ListNode a3=new ListNode(2);
        ListNode a4=new ListNode(3);
        ListNode a5=new ListNode(3);

        a1.next=a2;
        a2.next=a3;
        a3.next=a4;
        a4.next=a5;
        l83 l=new l83();
        ListNode s=l.deleteDuplicates(a1);
        while(s!=null){
            System.out.println(s.val);
            s=s.next;
        }
    }
}