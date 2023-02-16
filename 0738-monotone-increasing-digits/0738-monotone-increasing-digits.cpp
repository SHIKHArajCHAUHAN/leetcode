class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        vector<int> digits;
        while (n > 0)
        {
            digits.push_back(n % 10);
            n /= 10;
        }

        int k = digits.size();
        if (k <= 1)
        {
            return n;
        }

        for (int i = 0; i < k - 1; i++)
        {
            if (digits[i] < digits[i + 1])
            {
                for (int j = 0; j <= i; j++)
                {
                    digits[j] = 9;
                }
                digits[i + 1] --;
            }
        }

        int ans = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            ans = ans * 10 + digits[i];
        }
        return ans;
            
    }
};