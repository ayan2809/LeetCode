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
    public void subsetsolver( ArrayList<Integer> nums , ArrayList<Integer> curr, int i) {
        if(i==nums.size())
        {
            ArrayList<Integer> out = new ArrayList<Integer>();
            for(int j=0;j<curr.size();j++)
                out.add(curr.get(j));
                //System.out.print(curr.get(j));
            //System.out.println();
            fin.add(out);
            return;
        }
        
        subsetsolver(nums, curr,i+1);
        curr.add(nums.get(i));
        subsetsolver(nums, curr,i+1);
        curr.remove(curr.size()-1);
        
    }
}