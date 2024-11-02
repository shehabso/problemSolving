class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       int max=0;
      int index=0;

      int n=arr.size();

      for(int i=0; i<n; i++){
          if(max<arr[i]){
              max=arr[i];
              index=i;
          }
      }
      if(index==0 || index==n-1){
          return 0;
      }
      for(int i=0;i<index;i++)
        {
            if(arr[i]>=arr[i+1])
            {
                return 0;
            }
        }
        for(int i=n-1;i>index;i--)
        {
            if(arr[i]>=arr[i-1])
            {
                return 0;
            }
        }
        return 1;
    }
};