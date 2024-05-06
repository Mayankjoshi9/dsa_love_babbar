class TrieNode {
public:
  char data;
  TrieNode *children[26];
  bool isTerminal;

  TrieNode(char ch) {
    data = ch;
    for (int i = 0; i < 26; i++) {
      children[i] = NULL;
    }
    isTerminal = false;
  }
};

class Trie {
public:
  TrieNode *root;
  Trie(char ch) { root = new TrieNode(ch); }

  void insertUtil(TrieNode *root, string word) {
    if (word.length() == 0) {
      root->isTerminal = true;
      return;
    }
    //  assume word has Small letters
    int index = word[0] - 'a';

    TrieNode *child;
    // present
    if (root->children[index] != NULL) {
      child = root->children[index];
    } else {
      // absent
      child = new TrieNode(word[0]);
      root->children[index] = child;
    }

    insertUtil(child, word.substr(1));
  }

  void insertWord(string word) { insertUtil(root, word); }

  void printSuggestion(TrieNode* curr, vector<string> &temp, string prefix){
    if(curr->isTerminal){
          temp.push_back(prefix);
    }

    for(char ch='a';ch<='z';ch++){
         TrieNode* next= curr->children[ch-'a'];
         if(next!=NULL){
           prefix.push_back(ch);
           printSuggestion(next, temp, prefix);
           prefix.pop_back();
         }

    }
  }

  vector<vector<string>> getSuggestion(string str){
      TrieNode* prev=root;
      vector<vector<string>> output;
      string prefix="";
      for(int i=0;i<str.length();i++){
          char lastch=str[i];
          prefix.push_back(lastch);
          int index=lastch-'a';
          root = root->children[index];
          if(root==NULL){
            break;
          }
        vector<string>temp;
          printSuggestion(root,temp,prefix);
          output.push_back(temp);
          temp.clear();
         

    }
    return output;
  }
};

vector<vector<string>> phoneDirectory(vector<string> &contactList,
                                      string &queryStr) {

  Trie *t = new Trie('\0');
  for(int i=0;i<contactList.size();i++){
      t->insertWord(contactList[i]);
  }
  
  return t->getSuggestion( queryStr);

}