#include <bits/stdc++.h>
using namespace std;
class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        //  assume word has Capital letters
        int index = word[0] - 'A';

        TrieNode *child;
        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }
    void insertWord(string word)
    {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return searchUtil(child, word.substr(1));
    }
    bool search(string word)
    {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
        return searchUtil(root, word);
    }

    bool isEmpty(TrieNode *root)
    {
        for (int i = 0; i < 26; i++)
        {

            if (root->children[i])
            {
                return false;
            }
        }
        return true;
    }

    TrieNode *deleteWordHelper(TrieNode *root, string word, int depth)
    {

        if (root == NULL)
        {
            return NULL;
        }

        if (depth == word.size())
        { // Processing last character of word

            if (root->isTerminal)
            {
                root->isTerminal = false; // To delete word
            }

            if (isEmpty(root))
            { // To check if current node is prefix
                delete (root);
                root = NULL;
            }

            return root;
        }

        int index = word[depth] - 'a'; // If not the last character

        root->children[index] = deleteWordHelper(root->children[index], word, depth + 1); // Recursive call

        if (isEmpty(root) && root->isTerminal == false)
        {                  // If current node does not
            delete (root); // have child and also is not
            root = NULL;   // the end of any word
        }

        return root;
    }

    TrieNode *deleteWord( string word)
    {

        int depth = 0; // Maintaining depth variable

        return deleteWordHelper(root, word, depth); // Calling recursive function
    }
};

int main()
{
    Trie *t = new Trie();
    t->insertWord("joker");
    t->insertWord("joke");
    t->insertWord("joko");

    cout << "present or not : " << t->search("joke") << endl;
    t->deleteWord("joker");
    cout << "present or not : " << t->search("joker") << endl;
}