/*
 * @lc app=leetcode id=211 lang=cpp
 *
 * [211] Design Add and Search Words Data Structure
 */

// @lc code=start
struct Node
{
    Node *links[26];
    bool isEnd = false;
    bool containsKey(char ch)
    {
        return (links[ch - 'a'] != NULL);
    }
    Node *get(char ch)
    {
        return links[ch - 'a'];
    }
    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }
};
class Trie
{
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }

public:
    void insert(string &s)
    {
        Node *node = root;
        for (int i = 0; i < s.size(); i++)
        {
            if (!node->containsKey(s[i]))
            {
                node->put(s[i], new Node());
            }
            node = node->get(s[i]);
        }
        node->isEnd = true;
    }

public:
    bool dotSearch(Node *node, string s, int idx, int n)
    {
        if (idx >= n)
            return node->isEnd;

        for (int i = idx; i < n; i++)
        {
            if (s[i] == '.')
            {
                for (int j = 0; j < 26; j++)
                {

                    if (node->containsKey(j + 'a'))
                    {
                        if (dotSearch(node->get(j + 'a'), s, i + 1, n) == true)
                            return true;
                    }
                }
                return false;
            }
            else
            {
                if (!node->containsKey(s[i]))
                {

                    return false;
                }
                node = node->get(s[i]);
            }
        }
        return node->isEnd;
    }

public:
    bool search(string &s)
    {
        int n = s.size();
        Node *node = root;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                return dotSearch(node, s, i, n);
            }
            else
            {
                if (!node->containsKey(s[i]))
                    return false;
                node = node->get(s[i]);
            }
        }
        return node->isEnd;
    }
};
class WordDictionary
{
public:
    Trie trie;
    WordDictionary()
    {
    }

    void addWord(string word)
    {
        trie.insert(word);
    }

    bool search(string word)
    {
        return trie.search(word);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
// @lc code=end
