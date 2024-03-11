/*
Trie- is a tree data structure which starts from a single root node and every node of it can have at most 26 (for 26 alphabets) children, it is used for making efficient dictionaries for word searching
*/

#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    //checks if the current node is terminal node or not, used to check if the string ends here
    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie{
    public:
    TrieNode* root;
    Trie(){
        root=new TrieNode('#');//can add any char other than a-z 
    }
    void insertWordUtil(TrieNode*root,string word,int i){
        //base case
        if(i>word.size()-1){
            root->isTerminal=true;
            return;
        }
        int index= word[i]-'a';//assumming only small letters in dictionary
        TrieNode* child;
        if(root->children[index]==NULL){
            child=new TrieNode(word[i]);
            root->children[index]=child;
        }
        else{
            child=root->children[index];
        }
        insertWordUtil(child,word,i+1);
    }
    bool searchWordUtil(TrieNode*root,string word,int i){
        //base case
        if(i==word.size()-1){
            TrieNode* lastNode=root->children[word[i]-'a'];
            if(lastNode!=NULL && lastNode->isTerminal)return true;
            else return false;
        }

        int index= word[i]-'a';//assumming only small letters in dictionary
        if(root->children[index]==NULL){
            return false;
        }
        else{
            return searchWordUtil(root->children[index],word,i+1);
        }
        
    }
    void deleteWordUtil(TrieNode*root,string word,int i){
        if(i==word.size()-1){
            TrieNode* lastNode=root->children[word[i]-'a'];
            lastNode->isTerminal=false;
            return;
        }
        int index= word[i]-'a';
        TrieNode* child;
        child=root->children[index];
        deleteWordUtil(child,word,i+1);

    }
    void insertWord(string word){
        insertWordUtil(root,word,0);
    };
    bool searchWord(string word){
       return searchWordUtil(root,word,0);
    }
    void deleteWord(string word){
        if(searchWord(word)){
            deleteWordUtil(root,word,0);
        }
        else cout<<word<<" is not present in the dictionary\n";  
    }
};
int main()
{
    Trie* t=new Trie;
    t->insertWord("cat");
    //OR
    // Trie t;
    // t.insertWord("cat");
    cout<<t->searchWord("cat")<<"\n";
    cout<<t->searchWord("cap")<<"\n";
    //TC of insertion O(l) l : length of string
    //TC of searching O(l)
    t->insertWord("animal");
    cout<<t->searchWord("animal")<<"\n";
    t->deleteWord("animal");//only make isTerminal of termial node false
    cout<<t->searchWord("animal")<<"\n";
    t->deleteWord("dog");
    //TC of deletion O(2*l) ~ O(l)
}

/*
Hashmaps/unordered maps also have same time complexity in worst case O(l) and O(1) in avg case; but tries have better space optimization for dictionary implementation 
eg. arm,armchair,armadilo,armada,armenia every word will take seperate space along with its boolean value of present/absent in an hashmap, but in a Trie, storage is compact eg. Image-images\Trie_eg.jpg

Another use case of Trie is in autosuggestion, Trie can be used to build a system in which, lets say if you type arm then it'll auto suggest armchair, armada, armenia etc.
*/