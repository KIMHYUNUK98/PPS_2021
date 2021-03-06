int get_parent(struct TreeNode *root, int x, int h, struct TreeNode **p, int *d) {
    if(root == 0 || *p != NULL) return NULL;

    if(root->val == x) {
        *d = h;
        return 1;
    }
    if(root->left) {
        if(get_parent(root->left, x, h + 1, p, d))*p = root;
    }
    if(root->right) {
        if(get_parent(root->right, x, h + 1, p, d)) *p = root;
    }

    return 0;
}

bool isCousins(struct TreeNode* root, int x, int y){
    int xd = -1, yd = -1;
    struct TreeNode *xp = NULL, *yp = NULL;
    
    get_parent(root, x, 0, &xp, &xd);
    get_parent(root, y, 0, &yp, &yd);

    if(xd == yd && xp != yp) return true;

    return false;
}