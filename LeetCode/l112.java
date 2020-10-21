public class l112 {
    public boolean check(TreeNode root,int now,int sum){
        if(root==null){
            return false;
        }else if(root.val+now==sum&&root.left==null&&root.right==null){
            return true;
        }else{
            return check(root.left,now+root.val,sum)||check(root.right,now+root.val,sum);
        }
    }
    public boolean hasPathSum(TreeNode root, int sum) {
        return check(root,0,sum);
    }
    public static void main(String[] args){
        l112 l=new l112();
        TreeNode t1=new TreeNode(5);
        TreeNode t2=new TreeNode(4);
        TreeNode t3=new TreeNode(8);
        TreeNode t4=new TreeNode(11);
        //TreeNode t5=new TreeNode(13);
        TreeNode t6=new TreeNode(4);
        TreeNode t7=new TreeNode(7);
        TreeNode t8=new TreeNode(2);
        TreeNode t9=new TreeNode(1);
        t1.left=t2;t1.right=t3;
        t2.left=t4;
        t3.left=t4;t3.right=t6;
        t4.left=t7;t4.right=t8;
        t6.right=t9;
        System.out.println(l.hasPathSum(t1, 22));
    }
}