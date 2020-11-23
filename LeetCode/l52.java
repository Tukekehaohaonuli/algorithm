public class l52 {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int lenA=0,lenB=0;
        ListNode pA=headA,pB=headB;
        while(pA!=null){
            lenA++;
            pA=pA.next;
        }
        while(pB!=null){
            lenB++;
            pB=pB.next;
        }
        pA=headA;
        pB=headB;
        if(lenA>lenB){
            int num=lenA-lenB;
            while(num>0){
                num--;
                pA=pA.next;
            }
        }else if(lenB>lenA){
            int num=lenB-lenA;
            while(num>0){
                num--;
                pB=pB.next;
            }
        }
        ListNode ans=null;
        while(pA!=null){
            if(pA==pB){
                ans=pA;
                return ans;
            }
            pA=pA.next;
            pB=pB.next;
        }
        return ans;
    }
}