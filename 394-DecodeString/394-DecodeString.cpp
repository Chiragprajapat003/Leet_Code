// Last updated: 8/16/2026, 9:19:59 PM
class Solution
{
public:

    string decodeString(const string& s, int& i)
    {
        string res;

        while (i < s.length() && s[i] != ']')
        {
            if (!isdigit(s[i]))
            {
                res += s[i];
                i++;
            }
            else
            {
                int n = 0;

                while (i < s.length() && isdigit(s[i]))
                {
                    n = n * 10 + (s[i] - '0');
                    i++;
                }

                i++; // skip '['

                string t = decodeString(s, i);

                i++; // skip ']'

                while (n > 0)
                {
                    res += t;
                    n--;
                }
            }
        }

        return res;
    }

    string decodeString(string s)
    {
        int i = 0;

        return decodeString(s, i);
    }
};