
public class leetcode21 {

        public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
            ListNode prehead=new ListNode(-1);
            ListNode prev=prehead;
            while(l1!=null&&l2!=null){
            if(l1.val<l2.val){
                prev.next=l1;
                l1=l1.next;
            }else{
                prev.next=l2;
                l2=l2.next;
            }
            prev=prev.next;
        }
            prev.next=l1==null?l2:l1;
            return prehead.next;
        }
    public static void main(String[] args){
      leetcode21 test=new leetcode21();
      ListNode l1=new ListNode(1);
      ListNode l2=new ListNode(2);
      ListNode l3=new ListNode(4);
      l1.next=l2;
      l2.next=l3;
      ListNode l21=new ListNode(1);
      ListNode l31=new ListNode(3);
      ListNode l41=new ListNode(4);
      l21.next=l31;
      l31.next=l41;
      ListNode ans=test.mergeTwoLists(l1, l21);
      //System.out.println("!!!");
      while(ans!=null){
          System.out.println(ans.val+"--!!!-");
          ans=ans.next;
        }
    }
}