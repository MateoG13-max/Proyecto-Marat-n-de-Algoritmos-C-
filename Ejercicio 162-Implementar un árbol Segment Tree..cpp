// Ejercicio 962 - Implementar un árbol B+
#include <bits/stdc++.h>
using namespace std;
struct BPlusLeaf;
struct BPlusNode {
    bool is_leaf;
    vector<int> keys;
    vector<BPlusNode*> children; 
    BPlusLeaf* leaf_ptr = nullptr;
    BPlusNode(bool leaf=false): is_leaf(leaf) {}
};
struct BPlusLeaf {
    vector<int> keys;
    vector<int> values;
    BPlusLeaf* next = nullptr;
    BPlusLeaf* prev = nullptr;
};
class BPlusTree {
    BPlusNode* root;
    int t;
public:
    BPlusTree(int t_ = 2) : t(t_) {
        root = new BPlusNode(true);
        root->leaf_ptr = new BPlusLeaf();
    }
    pair<BPlusLeaf*, int> find_leaf(int key) {
        BPlusNode* node = root;
        while (!node->is_leaf) {
            int i = 0;
            while (i < (int)node->keys.size() && key >= node->keys[i]) ++i;
            node = node->children[i];
        }
        BPlusLeaf* leaf = node->leaf_ptr;
        int pos = lower_bound(leaf->keys.begin(), leaf->keys.end(), key) - leaf->keys.begin();
        return {leaf, pos};
    }
    void insert(int key, int value) {
        auto [leaf, pos] = find_leaf(key);
        leaf->keys.insert(leaf->keys.begin() + pos, key);
        leaf->values.insert(leaf->values.begin() + pos, value);
        // si hoja muy grande, dividir (simplificado con umbral 2*t)
        if ((int)leaf->keys.size() > 2*t) {
            BPlusLeaf* newLeaf = new BPlusLeaf();
            int mid = leaf->keys.size() / 2;
            newLeaf->keys.assign(leaf->keys.begin() + mid, leaf->keys.end());
            newLeaf->values.assign(leaf->values.begin() + mid, leaf->values.end());
            leaf->keys.resize(mid);
            leaf->values.resize(mid);
            newLeaf->next = leaf->next; if (newLeaf->next) newLeaf->next->prev = newLeaf;
            leaf->next = newLeaf; newLeaf->prev = leaf;
            insert_in_parent(leaf, newLeaf->keys[0], newLeaf);
        }
    }
    void insert_in_parent(BPlusNode* left_node_rep, int key, BPlusLeaf* newLeaf) {
        vector<BPlusLeaf*> leaves;
        BPlusLeaf* cur = root->leaf_ptr;
        while (cur && cur->prev) cur = cur->prev;
        while (cur) { leaves.push_back(cur); cur = cur->next; }
        vector<BPlusNode*> level;
        for (auto lf : leaves) {
            BPlusNode* node = new BPlusNode(true);
            node->leaf_ptr = lf;
            level.push_back(node);
        }
        while (level.size() > 1) {
            vector<BPlusNode*> next;
            for (size_t i = 0; i < level.size(); i += 2*t) {
                BPlusNode* parent = new BPlusNode(false);
                size_t end = min(level.size(), i + 2*t);
                for (size_t j = i; j < end; ++j) {
                    parent->children.push_back(level[j]);
                    if (!level[j]->leaf_ptr) {
                        parent->keys.push_back(level[j]->keys.empty() ? INT_MAX : level[j]->keys.front());
                    } else {
                        parent->keys.push_back(level[j]->leaf_ptr->keys.front());
                    }
                }
                next.push_back(parent);
            }
            level.swap(next);
        }
        if (!level.empty()) root = level[0];
    }
    // recorrido de todas las hojas (impresión ordenada)
    void print_leaves() {
        BPlusLeaf* cur = root->leaf_ptr;
        while (cur && cur->prev) cur = cur->prev;
        while (cur) {
            for (size_t i = 0; i < cur->keys.size(); ++i)
                cout << "(" << cur->keys[i] << ":" << cur->values[i] << ") ";
            cur = cur->next;
        }
        cout << "\n";
    }
};

int main() {
    BPlusTree t(2);
    int k, v;
    while (cin >> k >> v) {
        t.insert(k, v);
    }
    t.print_leaves();
    return 0;
}