public class l147 {
    public ListNode insertionSortList(ListNode head) {
        if (head == null) {
            return head;
        }
        ListNode ans=new ListNode(0);
        ans.next=head;
        ListNode pre=ans;
        ListNode p=head;
        while(p!=null){
            ListNode pres=ans;
            ListNode ps=ans.next;
            ListNode rp=p.next;
            ListNode rpre=p;
            
            while(ps!=p&&ps!=null){

                if(p.val>pres.val&&p.val<ps.val){
                    pres.next=p;
                    pre.next=p.next;
                    p.next=ps;
                    rpre=pre;
                    rp=pre.next;
                    ListNode temp=ans;
                    while(temp!=null){
                        System.out.println(temp.val);
                        temp=temp.next;
                    }
                    break;
                }
                pres=ps;
                ps=ps.next;
            }
            pre=rpre;
            p=rp;
        }
        return ans.next;
    }
    public static void main(String[] args){
        l147 l=new l147();
        ListNode s1=new ListNode(4);
        ListNode s2=new ListNode(2);
        ListNode s3=new ListNode(1);
        ListNode s4=new ListNode(3);
        s1.next=s2;
        s2.next=s3;
        s3.next=s4;
        ListNode ans=l.insertionSortList(s1);
        while(ans!=null){
            System.out.println(ans.val);
            ans=ans.next;
        }
    }
}