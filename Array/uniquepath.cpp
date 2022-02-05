struct trienode
{
    int freq;
    trienode *child[26];
    trienode()
    {
        freq = 0;
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
    }
};

class Solution
{
public:
    trienode *root = new trienode();
    vector<string> findPrefixes(string arr[], int n)
    {
        // code here
        vector<string> ans;
        for (int i = 0; i < n; i++)
        {
            buildtrie(arr[i], root);
        }
        for (int i = 0; i < n; i++)
        {
            ans.push_back(buildprefix(arr[i], root));
        }
        return ans;
    }

    void buildtrie(string s, trienode *root)
    {
        trienode *curr = root;
        for (int i = 0; i < s.length(); i++)
        {
            int index = s[i] - 'a';
            if (curr->child[index] == NULL)
                curr->child[index] = new trienode();
            curr->child[index]->freq++;
            curr = curr->child[index];
        }
    }

    string buildprefix(string s, trienode *root)
    {
        trienode *curr = root;
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            int index = s[i] - 'a';
            if (curr->freq == 1)
                break;
            ans += s[i];
            curr = curr->child[index];
        }
        return ans;
    }