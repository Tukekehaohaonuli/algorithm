import java.util.Arrays;

public class l148 {
    private final int MAXVALUE=50001;
    public ListNode sortList(ListNode head) {
        int nums[]=new int[MAXVALUE];
        ListNode p=head;
        int i=0;
        while(p!=null){
            nums[i++]=p.val;
            p=p.next;
        }
        Arrays.sort(nums,0,i);

        p=head;
        i=0;
        while(p!=null){
            p.val=nums[i++];
            p=p.next;
        }
        return head;
    }
    public static void main(String[] args){
        l148 l=new l148();
        ListNode s1=new ListNode(4);
        ListNode s2=new ListNode(2);
        ListNode s3=new ListNode(1);
        ListNode s4=new ListNode(3);
        s1.next=s2;s2.next=s3;s3.next=s4;
        ListNode head=l.sortList(s1);
        while(head!=null){
            System.out.println(head.val);;
            head=head.next;
        }
    }
}