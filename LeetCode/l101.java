public class l101 {
    public boolean isSymmetricY(TreeNode left,TreeNode right){
        if(left==null&&right==null){
            return true;
        }else if(left==null||right==null){
            return false;
        }else if(left.val!=right.val){
            return false;
        }else{
            return isSymmetricY(left.left, right.right)&&isSymmetricY(left.right, right.left);
        }
    }
    public boolean isSymmetric(TreeNode root) {
        if(root==null){
            return true;
        }else{
            return isSymmetricY(root.left,root.right);
        }
    }
    public static void main(String[] args){
        TreeNode t1=new TreeNode(1);
        TreeNode t2=new TreeNode(2);
        TreeNode t3=new TreeNode(2);
        TreeNode t4=new TreeNode(3);
        TreeNode t5=new TreeNode(4);
        TreeNode t6=new TreeNode(4);
        TreeNode t7=new TreeNode(3);
        t1.left=t2;t1.right=t3;
        t2.left=t4;t2.right=t5;
        t3.left=t6;t3.right=t7;
        l101 l=new l101();
        System.out.println(l.isSymmetric(t1));

    }
}