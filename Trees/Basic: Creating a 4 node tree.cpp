// We are going to create the given tree   
//       tree
//       ----
//        1    <-- root
//      /   \
//     2     3  
//    /   
//   4

#include <bits/stdc++.h>
using namespace std;

struct Node{
      int data;
      struct Node* left;
      struct Node* right;
      
      Node(int val)     //val is the value that has to be added at the data part
      {
            data =val;
            
            // Left and Right child of the node will be initialized to null
            left = NULL;
            right= NULL;
      }
};

int main()
{
      // 1st step is to create the root 
      struct Node* root = new Node(1);
      
      /* after above statement we will get something just like this
                                     1
                                 /       \
                               NULL     NULL
      */
      root -> left =new Node(2);
      root -> right =new Node(3);
      
      /* 2 and 3 become left and right children of 1
                    1
                  /    \
                 2       3
               /  \     /  \
            NULL NULL  NULL NULL
      */
      
    root-> left-> left =new Node(4);
      /* 4 becomes left child of 2
                    1
                 /     \
                2       3
               / \     / \
              4  NULL NULL NULL
             / \
          NULL NULL
     */
 
      
}
