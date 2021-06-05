
void in(TrieNode * root,string &key, int index=0){
    // code here
    //if(root==NULL) return;
    //cout<<key[index];
    if(root->children[CHAR_TO_INDEX(key[index])]==NULL){
        root->children[CHAR_TO_INDEX(key[index])] = getNode();
    }
    if(index==key.size()-1) {root->children[CHAR_TO_INDEX(key[index])]->isLeaf = true; return;}
    else{
        //index++;
        in(root->children[CHAR_TO_INDEX(key[index])],key,index+1);
    }
}
//Function to insert string into TRIE.
void insert(struct TrieNode *root, string key)
{
    in(root,key);
}

bool se(TrieNode* root, string &key, int index=0){
    if(root==NULL) return false;
    //cout<<key[index];
    if(root->children[CHAR_TO_INDEX(key[index])]==NULL){
        return false;
    }
    if(index==key.size()-1 ) {
        return (root->children[CHAR_TO_INDEX(key[index])]->isLeaf==true);
    }
    else{
        //index++;
        return se(root->children[CHAR_TO_INDEX(key[index])],key,index+1);
    }
    return false;
    // code here
}
//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    //return true;
    return se(root,key);
}
