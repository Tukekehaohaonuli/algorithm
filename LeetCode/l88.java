public class l88 {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int temp[]=new int [nums1.length];
        System.arraycopy(nums1, 0, temp, 0, m);
        int ans=0;
        int i=0,j=0;
        while(i<m&&j<n){
            if(temp[i]<=nums2[j]){
                nums1[ans++]=temp[i++];
            }else{
                nums1[ans++]=nums2[j++];
            }
        }
        if(i==m){
            while(j<n){
                nums1[ans++]=nums2[j++];
            }
        }
        if(j==n){
            while(i<m){
                nums1[ans++]=temp[i++];
            }
        }
    }
    public static void main(String[] args){
        int nums1[]={1,2,3,0,0,0};
        int nums2[]={2,5,6};
        l88 l=new l88();
        l.merge(nums1,3,nums2,2);
        for(int i=0;i<5;i++)
        System.out.println(nums1[i]);
    }
}