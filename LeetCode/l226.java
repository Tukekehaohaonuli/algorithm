public class l226 {
    public void reverseTree(TreeNode root){
        if(root==null){
            return ;
        }
        reverseTree(root.left);
        reverseTree(root.right);
        TreeNode temp;
        temp=root.left;
        root.left=root.right;
        root.right=temp;
    }
    public TreeNode invertTree(TreeNode root) {
        reverseTree(root);
        return root;
    }
    
}