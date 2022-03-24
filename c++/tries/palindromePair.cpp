#include <bits/stdc++.h>
using namespace std;
class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;
    int childCount;

    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
        childCount = 0;
    }
};

class Trie
{
    TrieNode *root;

public:
    int count;

    Trie()
    {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool add(TrieNode *root, string word)
    {
        // Base case
        if (word.size() == 0)
        {
            if (!root->isTerminal)
            {
                root->isTerminal = true;
                return true;
            }
            else
            {
                return false;
            }
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
            root->childCount++;
        }

        // Recursive call
        return add(child, word.substr(1));
    }

    void add(string word)
    {
        if (add(root, word))
        {
            this->count++;
        }
    }

    /*..................... Palindrome Pair................... */

    bool helper2(string input)
    {
        int i = 0;
        int j = input.length() - 1;
        while (i < j)
        {
            if (input[i] != input[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string helper3(TrieNode *root)
    {
        string subAnswer = "";
        for (int i = 0; i < 26; i++)
        {
            if (root->children[i] != NULL)
            {
                subAnswer = root->children[i]->data + helper3(root->children[i]);
            }
        }
        return subAnswer;
    }
    bool helper(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            if (root->isTerminal)
            {
                return true;
            }
            else
            {
                string temp = helper3(root);
                return helper2(temp);
            }
        }
        if (root->isTerminal)
        {
            if (word.length() >= 1)
            {
                return helper2(word);
            }
        }

        int characterPosition = word[0] - 'a';
        if (root->children[characterPosition] != NULL)
        {
            return helper(root->children[characterPosition], word.substr(1));
        }

        return false;
    }

    bool isPalindromePair(vector<string> words)
    {
        if (!words.size())
        {
            return false;
        }

        for (int i = 0; i < words.size(); i++)
        {
            string word = words[i];
            reverse(word.begin(), word.end());
            add(root, word);
        }
        bool subAnswer = false;
        for (int i = 0; i < words.size(); i++)
        {

            subAnswer = subAnswer || helper(root, words[i]);
            if (subAnswer)
            {
                break;
            }
        }
        return subAnswer;
    }
};
int main()
{
    Trie t;
    int n;
    cin >> n;
    vector<string> words(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> words[i];
    }

    cout << (t.isPalindromePair(words) ? "true" : "false");
}