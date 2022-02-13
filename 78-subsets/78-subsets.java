class Solution {
    List<List<Integer>> fin = new ArrayList<List<Integer>>();
    
    public List<List<Integer>> subsets(int[] nums) {
        int i= 0;
        ArrayList<Integer> curr = new ArrayList<Integer>();
        ArrayList<Integer> array_list = new ArrayList<Integer>();
        for (int j = 0; j < nums.length; j++)
        {
            array_list.add(new Integer(nums[j]));
        }
        subsetsolver(array_list, new ArrayList<>(),0);
        return fin;
    }
    public void subsetsolver(ArrayList<Integer> nums , ArrayList<Integer> curr, int i) {
        if(i==nums.size())
        {
            fin.add(curr);
            return;
        }
        ArrayList<Integer> curr1=new ArrayList<>(curr);
        ArrayList<Integer> curr2=new ArrayList<>(curr);
        curr2.add(nums.get(i));
        subsetsolver(nums, curr1,i+1);
        subsetsolver(nums,  curr2,i+1);
        
    }
}