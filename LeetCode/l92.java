public class l92 {
    public ListNode reverseBetween(ListNode head, int m, int n) {
        int i=1;
        ListNode start=new ListNode();
        ListNode ans=head;
        start.next=head;
        ListNode pre=start,p=start.next;
        while(p!=null){
            ListNode r=p.next;
            if(i==m){
                start=pre;
                pre=p;
                p=p.next;
            }
            else if(i>m&&i<=n){
                p.next=start.next;
                pre.next=r;
                start.next=p;
                p=r;
            }else if(i<m){
                pre=pre.next;
                p=p.next;
            }else{
                break;
            }
            i++;

        }
        return m==1?start.next:ans;
    }
    public static void main(String[] args){
        ListNode s1=new ListNode(3);
        ListNode s2=new ListNode(5);
        ListNode s3=new ListNode(3);
        ListNode s4=new ListNode(4);
        ListNode s5=new ListNode(5);
        s1.next=s2;
        //s2.next=s3;s3.next=s4;s4.next=s5;
        l92 l=new l92();
        ListNode ans=l.reverseBetween(s1, 1, 2);
        while(ans!=null){
            System.out.println(ans.val);
            ans=ans.next;
        }
    }
}