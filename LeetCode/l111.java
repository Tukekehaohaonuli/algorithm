public class l111 {
    public int minDepth(TreeNode root) {
        if(root==null){
            return 0;
        }
        if(root.left==null&&root.right==null){
            return 1;
        }
        else{
            int lheight=Integer.MAX_VALUE;
            int rheight=Integer.MAX_VALUE;
            if(root.left!=null)
            lheight=minDepth(root.left);
            if(root.right!=null)
            rheight=minDepth(root.right);
            return lheight<rheight?lheight+1:rheight+1;
        }
    }
    public static void main(String[] args){
        l111 l=new l111();
        TreeNode t1=new TreeNode(2);
        TreeNode t2=new TreeNode(3);
        TreeNode t3=new TreeNode(4);
        TreeNode t4=new TreeNode(5);
        TreeNode t5=new TreeNode(6);
        t1.right=t2;
        t2.right=t3;
        t3.right=t4;
        t4.right=t5;
        System.out.println(l.minDepth(t1));
    }
}