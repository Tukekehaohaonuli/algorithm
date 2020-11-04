public class l203 {
    public ListNode removeElements(ListNode head, int val) {
        ListNode sentinel = new ListNode(0);
        sentinel.next = head;
    
        ListNode prev = sentinel, curr = head;
        while (curr != null) {
          if (curr.val == val) prev.next = curr.next;
          else prev = curr;
          curr = curr.next;
        }
        return sentinel.next;
    
    }
    public static void main(String[] args){
        l203 l=new l203();
        ListNode s1=new ListNode(1);
        ListNode s2=new ListNode(2);
        ListNode s3=new ListNode(6);
        ListNode s4=new ListNode(3);
        ListNode s5=new ListNode(4);
        ListNode s6=new ListNode(5);
        ListNode s7=new ListNode(6);
        s1.next=s2;s2.next=s3;s3.next=s4;s4.next=s5;s5.next=s6;s6.next=s7;
        System.out.println(l.removeElements(s1, 6));
    }
}