public class l100 {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if(p==null&&q==null){
            return true;
        }
        if(p==null&&q!=null||p!=null&&q==null)
        return false;
        if(p.val!=q.val){
            return false;
        }
        
        return isSameTree(p.left, q.left)&&isSameTree(p.right, q.right);
    }
    public static void main(String[] args){
        l100 l=new l100();
        
        TreeNode t1=new TreeNode(1);
        TreeNode t2=new TreeNode(2);
    //    TreeNode t3=new TreeNode(3);
        t1.left=t2;
        t1.right=null;
        TreeNode t4=new TreeNode(1);
    //    TreeNode t5=new TreeNode(2);
        TreeNode t6=new TreeNode(2);
        t4.left=null;
        t4.right=t6;
    //    TreeNode t7=null;
    //    TreeNode t8=null;

        System.out.println(l.isSameTree(t1, t2));
    }
}