/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {//���캯��
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }//�����涨���˳��Ƚ�����һ����Ҫע��
};
*/

class Solution {
public:
    Node* intersect(Node* quadTree1, Node* quadTree2) {
    //�����������������
    //ע����quadTree1��val��isLeafֵΪ����
    if (quadTree1->isLeaf)
    {
        if (quadTree1->val)
        {
            return new Node(true, true);
        }
        return new Node (quadTree2->val, quadTree2->isLeaf, quadTree2->topLeft, quadTree2->topRight, quadTree2->bottomLeft, quadTree2->bottomRight);
    }
    if (quadTree2->isLeaf)
    {
        return intersect(quadTree2, quadTree1);
    }  
    Node* c1 = intersect(quadTree1->topLeft, quadTree2->topLeft);
    Node* c2 = intersect(quadTree1->topRight, quadTree2->topRight);
    Node* c3 = intersect(quadTree1->bottomLeft, quadTree2->bottomLeft);
    Node* c4 = intersect(quadTree1->bottomRight, quadTree2->bottomRight);
    if (c1->isLeaf && c2->isLeaf && c3->isLeaf && c4->isLeaf && c1->val == c2->val && c2->val == c3->val && c3->val == c4->val)
    {
        return new Node (true, c1->val);
    }
    return new Node (false, false, c1, c2, c3, c4); 
    }
};
