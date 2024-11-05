impl Solution {
    pub fn check_subarray_sum(nums: Vec<i32>, k: i32) -> bool {
        use std::collections::HashSet;
        let mut seen = HashSet::new();
        let mut prefix = 0;
        for num in nums {
            let next = (prefix + num) % k;
            if seen.contains(&next) { return true; }
            seen.insert(prefix);
            prefix = next;
        }
        false
    }
}