//
//  main.cpp
//  Algorithm-ChengYun Zuo
//
//  Created by Yan on 2022/6/18.
//

#include <iostream>
#include <vector>
#include "class01.hpp"
#include "class02.hpp"
#include "class03.hpp"
#include "class04.hpp"
#include "class05.hpp"
#include "class06.hpp"


using namespace std;

int main(int argc, const char * argv[]){
    
//    vector<int> arr1 = {3,8,6,3,2,1,10,5,4,9};
//    printArr(arr1);
        
    /*
     class 01 认识复杂度和简单排序算法
     */

//        cout<<"select sort: ";
//        selectSort(arr1);
//        printArr(arr1);
//
//        cout<<"bubble sort: ";
//        bubbleSort(arr);
//        printArr(arr);
//
//        异或运算
//        1. 一种数出现了奇数次，其他所有数出现了偶数次，怎么找到出现奇数次的数？
//        2. 两种数出现了奇数次，其他所有数出现了偶数次，怎么找到这两种出现奇数次的数？
//
//        vector<int> arr2_1 = {1,1,2,2,3,3,6,6,7,7,7,8,8,9,9};
//        vector<int> arr2_2 = {1,1,1,2,2,3,3,6,6,7,7,7,8,8,9,9};
//
//        printOddTimesNum1(arr2_1);
//        printOddTimesNum2(arr2_2);
//
//        cout<<"insert sort: ";
//        insertSort(arr1);
//        printArr(arr1);
//        
//        二分法
//        1）在一个有序数组中，找某个数是否存在？
//        vector<int> sortedArr1 = {1,2,3,4,5,6,7,8,9,10};
//        int searchNum1 = 5, searchNum2 = 11;
//        cout<<"search the first num: "<<BSExist(sortedArr1, searchNum1)<<" "<<"search the second num: "<<BSExist(sortedArr1, searchNum2)<<endl;
//        2）在一个有序数组中，找>=某个数最左侧的位置？
//        vector<int> sortedArr2 = {1,1,2,2,3,3,3,4,4,5,5,6,6,6,7,7,8,8,8,9,9,9,10};
//        cout<<BSNearLeft(sortedArr2, 5)<<endl;
//        3）局部最小值问题？
//        vector<int> arr3 = { 6, 5, 3, 4, 6, 7, 8 };
//        printArr(arr3);
//        cout<<FindOneLessValueIndex(arr3)<<endl;
//
//        求最大值（递归）
//        vector<int> arr4 = {6, 5, 3, 4, 6, 7, 8, 11, 12, 34, 1};
//        cout<<getMax(arr4)<<endl;
        
    /*
     class 02 认识nlog(n)的排序
     */
    
//    `归并排序
//    MergeSort::mergeSort(arr1);
//    cout<<"merge sort: ";
//    printArr(arr1);
    
//    `小和问题
//    cout<<"Small Sum: ";
//    printArr(arr1);
//    cout<<SmallSum::smallSum(arr1)<<endl;
    
//    `荷兰国旗问题
//    vector<int> res = NetherlandsFlag::partition(arr1, 0, arr1.size() - 1, 5);
//    printArr(res);
    
//    `快速排序
//    QuickSort::quickSort(arr1, 0, arr1.size()-1);
//    printArr(arr1);
    
//    `堆排序
//    HeapSort::heapSort(arr1);
//    printArr(arr1);
    
//    test priority_queue with small Heap;
//    priority_queue<int, vector<int>, greater<int>> smallHeap;
//    vector<int> vals = {11, 77, 33, 55, 44, 66, 99, 88, 22};
//    for(auto &e : vals) smallHeap.push(e);
//    while(!smallHeap.empty()){
//        cout << smallHeap.top() << " ";
//        smallHeap.pop();
//    }
//    cout<<endl;
//    priority_queue<int, vector<int>, greater<int>> heap;
//    for(auto &e : arr1) heap.push(e);
//    while(!heap.empty()){
//        cout << heap.top() << " ";
//        heap.pop();
//    }
//    `堆排序扩展问题
    //要满足数组几乎有序，即数组中每个元素移动距离不超过k
//    printArr(arr1);
//    SortArrayDistanceLessK::sortArrayDistanceLessK(arr1, 8);
//    printArr(arr1);
    
    /*
     class 03 详解桶排序以及排序内容大总结
     */
    
//    `比较器（c++仿函数）的使用
    /*
     1.比较器的实质就是重载比较运算符
     2.特殊标准的排序
     */
    
    //抽象类与接口的使用(to be continue...)
//    Student o1;
//    Student o2("yan", 2021020989, 25);
//    vector<Student> students = {o1, o2};
    //Student::printStudents(students);
    
    //cpp仿函数
    //1.使用STL提供的仿函数（greater, less, greater_equal, less_equal）
    //静态数组
//    int arr7[10] = {65,59,96,13,21,80,72,33,44,99};
//    printArr(arr7, 10);
//    sort(arr7, arr7+10, greater<int>());
//    printArr(arr7, 10);
    //vector
//    vector<int> arr8 = {65,59,96,13,21,80,72,33,44,99,100,12,3,2,1,7,6,9};
//    printArr(arr8);
//    sort(arr8.begin(), arr8.begin() + arr8.size(), greater<int>());
//    printArr(arr8);
//    //2.自己编写仿函数，用于特定抽象数据类型
//    Stu stu[3];
//    string name;
//    int id, age;
    
//    for(int i = 0;i < 3;i++){
//        cin>>name>>id>>age;
//        stu[i] = Stu(name,id,age);
//    }
//    stu[1] = {"yan liang", 1, 21};
//    stu[0] = {"wang aobo", 2, 23};
//    stu[2] = {"he zhaopu", 3, 24};
    
//    printStudents(stu, 3);
//    sort(stu, stu+3, idAscendingComparator);
//    printStudents(stu, 3);
//    sort(stu, stu+3, idDescendingComparator);
//    printStudents(stu, 3);
//    sort(stu, stu+3, ageAscendingComparator);
//    printStudents(stu, 3);
//    sort(stu, stu+3, ageDescendingComparator);
//    printStudents(stu, 3);

    
    
//    `非基于比较的排序-需要根据具体数据状况来制定比较规则
//    `基数排序
//    int digit = RadixSort::maxBits(arr1);
//    cout<<digit<<endl;
//    cout<<RadixSort::getDigit(89, 2)<<endl;
//    vector<int> arr5 = {31,82,63,32,25,13,107,534,421,92,321,31,9021,2192};
//    printArr(arr5);
//    RadixSort::radixSort(arr5);
//    printArr(arr5);
//    `计数排序
//    vector<int> arr6 = {32,45,23,12,34,54,89,45,3,187};
//    printArr(arr6);
//    CountSort::countSort(arr6);
//    printArr(arr6);
    
    /*
     class 04 链表
     */
    
    //HashSet: only key
    //1. 增删改查- O(1)
    //2. 基础类型-值传递；非基础类型-引用传递
//    HashAndTree::testForUnorderedSet();
//    HashAndTree::testForUnorderedMap();
//    HashAndTree::testForOrderedSet();
//    HashAndTree::testForOrderedMap();
    
    //=====链表=====
    //链表反转
    //单链表
//    Node* head1 = new Node(1);
//    head1->next = new Node(2);
//    head1->next->next = new Node(3);
//    head1->next->next->next = new Node(4);
//    head1->next->next->next->next = new Node(5);
//    ReverseList::printLinkedList(head1);
//    head1 = ReverseList::reverseList(head1);
//    ReverseList::printLinkedList(head1);
    //双链表
//    DoubleNode* head2 = new DoubleNode(1);
//    head2->next = new DoubleNode(2);
//    head2->next->pre = head2;
//    head2->next->next = new DoubleNode(3);
//    head2->next->next->pre = head2->next;
//    head2->next->next->next = new DoubleNode(4);
//    head2->next->next->next->pre = head2->next->next;
//    head2->next->next->next->next = new DoubleNode(5);
//    head2->next->next->next->next->pre = head2->next->next->next;
//    ReverseList::printDoubleLinkedList(head2);
//    head2 = ReverseList::reverseList(head2);
//    ReverseList::printDoubleLinkedList(head2);
    
    //打印公共部分
//    Node* head3 = new Node(1);
//    head3->next = new Node(2);
//    head3->next->next = new Node(3);
//    head3->next->next->next = new Node(4);
//    head3->next->next->next->next = new Node(5);
//    ReverseList::printLinkedList(head3);
//    Node* head4 = new Node(0);
//    head4->next = new Node(2);
//    head4->next->next = new Node(3);
//    head4->next->next->next = new Node(5);
//    head4->next->next->next->next = new Node(6);
//    head4->next->next->next->next->next = new Node(7);
//    ReverseList::printLinkedList(head4);
//    PrintCommonPart::printCommonPart(head3, head4);
    
    //回文链表
//    Node* head5 = new Node(1);
//    head5->next = new Node(2);
//    head5->next->next = new Node(3);
//    head5->next->next->next = new Node(4);
//    head5->next->next->next->next = new Node(5);
//    head5->next->next->next->next->next = new Node(4);
//    head5->next->next->next->next->next->next = new Node(3);
//    head5->next->next->next->next->next->next->next = new Node(2);
//    head5->next->next->next->next->next->next->next->next = new Node(1);
//    //head5->next->next->next->next = new Node(1);
//    ReverseList::printLinkedList(head5);
//    cout<<"是否为回文链表: "<<endl;
//    cout<<"Based Stack(need n extra space)[way one]: ";
//    cout<<(IsPalindromeList::isPalindromeList1(head5) ? "YES" : "NO")<<endl;
//    cout<<"Based Stack(need n/2 extra space)[way two]: ";
//    cout<<(IsPalindromeList::isPalindromeList2(head5) ? "YES" : "NO")<<endl;
//    cout<<"Double Pointer(need 1 extra space)[way three]: ";
//    cout<<(IsPalindromeList::isPalindromeList3(head5) ? "YES" : "NO")<<endl;
    
    //SmallerEqualBigger
//    Node* head6 = new Node(2);
//    head6->next = new Node(5);
//    head6->next->next = new Node(0);
//    head6->next->next->next = new Node(9);
//    head6->next->next->next->next = new Node(4);
//    head6->next->next->next->next->next = new Node(1);
//    ReverseList::printLinkedList(head6);
//    SmallerEqualBigger::listPartition1(head6, 5);
//    cout<<"ArrPartition: "<<endl;
//    ReverseList::printLinkedList(head6);
//    cout<<"List Partition: "<<endl;
//    SmallerEqualBigger::listPartition2(head6, 5);
//    ReverseList::printLinkedList(head6);
    
    //CopyListWithRandom
//    RandomNode* head7 = new RandomNode(0);
//    head7->next = new RandomNode(1);
//    RandomNode* p1 = head7->next;
//    head7->next->next = new RandomNode(2);
//    //RandomNode* p2 = head7->next->next;
//    head7->next->next->next = new RandomNode(3);
//    RandomNode* p3 = head7->next->next->next;
//    head7->next->next->next->next = new RandomNode(4);
//    //RandomNode* p4 = head7->next->next->next->next;
//    head7->rand = p1;
//    //head7->next->rand = p3;
//    head7->next->next->rand = p3;
//    head7->next->next->next->next->rand = p1;
//    CopyListWithRandom::printRandLinkedList(head7);
    //copy thr list
//    RandomNode* head7Copy1 = CopyListWithRandom::copyListWithRandom1(head7);
//    CopyListWithRandom::printRandLinkedList(head7Copy1);
//    RandomNode* head7Copy2 = CopyListWithRandom::copyListWithRandom2(head7);
//    CopyListWithRandom::printRandLinkedList(head7Copy2);
    
    //FindFirstIntersectNode
//    Node* head8 = new Node(1);
//    head8->next = new Node(2);
//    head8->next->next = new Node(3);
//    head8->next->next->next = new Node(4);
//    head8->next->next->next->next = new Node(5);
//    Node* p5 = head8->next->next->next->next;
//    head8->next->next->next->next->next = new Node(6);
//    head8->next->next->next->next->next->next = new Node(7);
//    head8->next->next->next->next->next->next->next = new Node(8);
//    head8->next->next->next->next->next->next->next->next = p5;
//
//    Node* head9 = new Node(1);
//    head9->next = new Node(2);
//    //head9->next->next = head8->next->next;//环外
//    //head9->next->next = head8->next->next;//无环
//    //head9->next->next = head8->next->next->next->next->next;//环内
//    Node* res = FindFirstIntersectNode::getIntersectNode(head8, head9);
//    //ReverseList::printLinkedList(res);
    
    /*
     class 05 二叉树
     */
    
    binaryNode* bHead1 = new binaryNode(5);
    bHead1->left = new binaryNode(3);
    bHead1->right = new binaryNode(8);
    bHead1->left->left = new binaryNode(2);
    bHead1->left->right = new binaryNode(4);
    bHead1->left->left->left = new binaryNode(1);
    bHead1->right->left = new binaryNode(7);
    bHead1->right->left->left = new binaryNode(6);
    bHead1->right->right = new binaryNode(10);
    bHead1->right->right->left = new binaryNode(9);
    bHead1->right->right->right = new binaryNode(11);
    
    //满二叉树
    binaryNode* bHead2 = new binaryNode(1);
    bHead2->left = new binaryNode(2);
    bHead2->right = new binaryNode(3);
    bHead2->left->left = new binaryNode(4);
    bHead2->left->right = new binaryNode(5);
    bHead2->right->left = new binaryNode(6);
    bHead2->right->right = new binaryNode(7);
    
    //非平衡二叉树
    binaryNode* bHead3 = new binaryNode(1);
    bHead3->left = new binaryNode(1);
    bHead3->right = new binaryNode(1);
    bHead3->left->left = new binaryNode(1);
    bHead3->left->left->left = new binaryNode(1);
    bHead3->left->left->left->left = new binaryNode(1);
    
    //二叉树的遍历
//    cout<<"==============recursive=============="<<endl;
//    cout<<"pre-order: ";
//    PreInPosTraversal::preOrderRecur(bHead1);
//    cout<<endl;
//    cout<<"in-order: ";
//    PreInPosTraversal::inOrderRecur(bHead1);
//    cout<<endl;
//    cout<<"pos-order: ";
//    PreInPosTraversal::posOrderRecur(bHead1);
//    cout<<endl;
//    cout<<"============unrecursive============="<<endl;
//    PreInPosTraversal::preOrderUnRecur(bHead1);
//    PreInPosTraversal::inOrderUnRecur(bHead1);
//    PreInPosTraversal::posOrderUnRecur1(bHead1);
//    PreInPosTraversal::posOrderUnRecur2(bHead1);
    
    //打印二叉树
    //PrintBinaryTree::printTree(bHead1); //乱码
    
    //求二叉树的最大宽度
//    cout<<"The Max Width Of The Tree is: "<<TreeMaxWidth::getMaxWidth(bHead1)<<endl;
    
    //二叉树的相关概念及其实现判断
    //1.如何判断一颗二叉树是否是搜索二叉树（BST）？
//    cout<<(IsBST::isBST1(bHead1) ? "True" : "False")<<" ";
//    cout<<(IsBST::isBST2(bHead1) ? "True" : "False")<<" ";
//    cout<<(IsBST::isBST3(bHead1) ? "True" : "False")<<endl;
    
    //2.如何判断一棵二叉树是完全二叉树（CBT）？
//    cout<<(IsCBT::isCBT(bHead1) ? "True" : "False")<<endl;
    
    //3.如何判断一棵二叉树是满二叉树？
//    cout<<(Info::isFull(bHead2) ? "True" : "False")<<endl;
    
    //4.如何判断一棵二叉树是平衡二叉树？
//    cout<<(IsBalancedTree::isBalanced(bHead1) ? "True" : "False")<<endl;
//    cout<<(IsBalancedTree::isBalanced(bHead2) ? "True" : "False")<<endl;
//    cout<<(IsBalancedTree::isBalanced(bHead3) ? "True" : "False")<<endl;
    
    //LowestCommonAncestor
//    cout<<LowestCommonAncestor::lowestCommonAncestor1(bHead1, bHead1->right->left->left, bHead1->right->right->right)->value<<endl;
//    cout<<LowestCommonAncestor::lowestCommonAncestor1(bHead1, bHead1->left->right, bHead1->right->left)->value<<endl;
//    cout<<LowestCommonAncestor::lowestCommonAncestor2(bHead1, bHead1->left->right, bHead1->right->left)->value<<endl;

    //在二叉树中找到一个节点的后继节点
//    nodeS* headS = new nodeS(6);
//    headS->left = new nodeS(3);
//    headS->left->parent = headS;
//    headS->left->left = new nodeS(1);
//    headS->left->left->parent = headS->left;
//    headS->left->left->right = new nodeS(2);
//    headS->left->left->right->parent = headS->left->left;
//    headS->left->right = new nodeS(4);
//    headS->left->right->parent = headS->left;
//    headS->left->right->right = new nodeS(5);
//    headS->left->right->right->parent = headS->left->right;
//    headS->right = new nodeS(9);
//    headS->right->parent = headS;
//    headS->right->left = new nodeS(8);
//    headS->right->left->parent = headS->right;
//    headS->right->left->left = new nodeS(7);
//    headS->right->left->left->parent = headS->right->left;
//    headS->right->right = new nodeS(10);
//    headS->right->right->parent = headS->right;
//    nodeS* test = headS->left->left;
//    cout<<test->value<<" next: "<<SuccessorNode::getSuccessorNode(test)->value<<endl;
//    test = headS->left->left->right;
//    cout<<test->value<<" next: "<<SuccessorNode::getSuccessorNode(test)->value<<endl;
//    test = headS->left->right;
//    cout<<test->value<<" next: "<<SuccessorNode::getSuccessorNode(test)->value<<endl;
    
    //SerializeAndReconstructTree
    
    //PaperFolding
    
    
    
    /*
     class 06 图
     */
    
    
    
    
    
    return 0;
}
