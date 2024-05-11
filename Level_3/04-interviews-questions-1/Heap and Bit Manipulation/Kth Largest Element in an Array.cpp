class Solution {
public:
	int findKthLargest(vector<int>& nums, int k) {

		priority_queue<int>pq;// 3 2 1
		for (auto& it : nums)
		{
			pq.push(it);
		}
		int res;
		while (pq.size())
		{
			if (k == 1)
			{
				res = pq.top();
				break;
			}
			pq.pop();
			k--;
		}

		return res;
	}
};