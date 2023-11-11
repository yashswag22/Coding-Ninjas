vector<int> howManyAreAnagrams(int n, int m, vector<string>& a, vector<string>& b) {
    vector<int>ans;

    for(int i=0;i<m;i++)
    {
        string cur = b[i];
        sort(cur.begin(),cur.end());
        int count =0;
        for(int j=0;j<n;j++)
        {
            string temp = a[j];
            sort(temp.begin(),temp.end());
            if(cur == temp)
            count++;
        }
        ans.push_back(count);
    }

    return ans;
}
