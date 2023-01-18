class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>v(code.size(),0);
        int n=code.size();

        if (k == 0)
            return v;

        if (k > 0)
        {
            for (int i = 0; i < n; i++)
            {
                int j = i + 1;
                int count = k;

                while (count--)
                {
                    if (j >= n)
                        j = 0;

                    v[i] += code[j];
                    j++;
                }
            }
        }

        if (k < 0)
        {
            for (int i = 0; i < n; i++)
            {
                int j = i - 1;
                int count = abs(k);

                while (count--)
                {
                    if (j < 0)
                        j = n - 1;

                    v[i] += code[j];
                    j--;
                }
            }
        }

        return v;
    }
};