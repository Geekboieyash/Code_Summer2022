/*
 tree define:
 struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *Right;
	TreeNode() : val(x), Left(nullptr), right(nullptr) {}

 }
*/

/**
public:
	vector<int> preoderTra(TreeNode*  root)
	{
	vecctor<int> preorder;
	if(root == NULL) return preorder;
	stack<TreeNode> st;
	st.push(root);
	while(!st.empty()){
	root = st.top();
	st.pop();
	preorder.push_back(root->val);
	if(root->right != NULL)
	{
	st.push(root->right);
	}
	if(root->left != NULL){
	st.push(root->;eft);
	}
	}
	return preorder;
	}
**/