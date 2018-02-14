// Implement a BST (Binary Search Tree) Data Structure in C++. Also implement Insertion into a BST and Inorder Traversal.
// You will not be required to implement Deletion into a BST and any other Tree Traversals in this Lab.

template <class ItemType >


class TreeType {
		public:
		TreeType ( );
		~TreeType ( );
		bool IsEmpty ( ) const;
		bool IsFull ( ) const;
		int NumberOfNodes ( ) const;
		void InsertItem ( ItemType item );
		void DeleteItem (ItemType item );
		void RetrieveItem ( ItemType& item, bool& found );
		void PrintTree (ofstream& outFile) const;

		private:
		TreeNode<ItemType>* root;
};

