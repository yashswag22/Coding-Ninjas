int howManySatisfy(int n, int k, vector<int>& a) {
    int count =0;
    for(int i=0;i<n;i++)
    {
        if((i+2*k-1)<n)
        {
            int p =0,q=0;
            for(int j= i;j<= i+k-1;j++)
            p+=a[j];
            for(int j=i+k;j<=i+2*k-1;j++)
            q+=a[j];

            if(p>q)
            count++;
        }
    }

    return count;
}
