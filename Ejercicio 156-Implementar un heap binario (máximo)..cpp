// Ejercicio 956 - Implementar un trie para palabras (insert, search)
#include <bits/stdc++.h>
using namespace std;
struct TrieNode {
    bool end=false;
    array<TrieNode*,26> next{};
    TrieNode(){ next.fill(nullptr); }
};
class Trie {
    TrieNode* root;
public:
    Trie(){ root=new TrieNode(); }
    void insert(const string&s){
        TrieNode* p=root;
        for(char ch:s){
            if(!isalpha((unsigned char)ch)) continue;
            int i = tolower(ch)-'a';
            if(!p->next[i]) p->next[i]=new TrieNode();
            p=p->next[i];
        }
        p->end=true;
    }
    bool search(const string&s){
        TrieNode* p=root;
        for(char ch:s){
            if(!isalpha((unsigned char)ch)) continue;
            int i=tolower(ch)-'a';
            if(!p->next[i]) return false;
            p=p->next[i];
        }
        return p && p->end;
    }
};
int main(){
    Trie t; string w;
    while(cin>>w){ if(w=="#") break; t.insert(w); }
    while(cin>>w){ cout << w << ": " << (t.search(w)?"sí":"no") << "\n"; }
    return 0;
}