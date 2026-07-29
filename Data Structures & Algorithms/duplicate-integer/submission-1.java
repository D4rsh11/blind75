class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> seenE=new HashSet<>();
        for(int num:nums) {
            if(seenE.contains(num)){
                return true;
            }
            seenE.add(num);
        }
        return false;
    }
}
