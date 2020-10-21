public class l102 {
    public int maxDepth(TreeNode root) {
        if(root==null){
            return 0;
        }else if(root.left==null&&root.right==null){
            return 1;
        }else{
            int a=maxDepth(root.left);
            int b=maxDepth(root.right);
            return a>b?a+1:b+1;
        }
    }
    public static void main(String[] args){
        TreeNode t1=new TreeNode(3);
        TreeNode t2=new TreeNode(9);
        TreeNode t3=new TreeNode(20);
        TreeNode t4=new TreeNode(15);
        TreeNode t5=new TreeNode(7);
        t1.left=t2;t1.right=t3;
        t3.left=t4;t3.right=t5;
        l102 l=new l102();
        System.out.println(l.maxDepth(t1));
    }
}