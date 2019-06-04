#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


//在链表头插入
Node* add(Node* head, int val){
	Node* New=new Node();
	New->data=val;
	New->next=head;
	//head=New;
	//return head;
	return New; //如果Return New就不需要前面两句话，如果Return Head则需要把New的地址传递给Head
}

//考试题：插入的数乘以2
Node* addDouble(Node* head, int val){
  Node *newcreate=new Node;//create the new pointer
  newcreate->data=val*2;//set the number in the new pointer
  newcreate->next=head;//connect all the old result in the new pointer
  return newcreate;//return back the pointer
}

/*//在链表尾插入，需调试
Node *addTail(Node *head, int inputValue){
    int length;
    //尾指针指向头节点
    Node *rearNode = head;
    // 1 新节点插入尾节点后 2 尾节点指向新节点 3 新节点后继置空
    while (inputValue != 0)
    {
        length++;
        Node *newNode = new Node;
        newNode->data = inputValue;
        //rearNode->next即rearNode当前所指向的节点的next，如最初rearNode->next代表head->next，即newNode加入head后
        rearNode->next = newNode;
        //尾指针后移，指向新加入的节点设为新的尾节点
        rearNode = newNode;
        //新节点后继指针为NULL
        rearNode->next = NULL;
        cin >> inputValue;
    }
}
*/

//在链表尾插入
Node* addTail(Node* head, int val){
    Node* temp;
    Node* afterReverse;
    Node* now;
    afterReverse = NULL;
    now = head;
    while(now != NULL){
        temp = now->next;
        now->next = afterReverse;
        afterReverse = now;
        now = temp;
    }
    head = afterReverse;
    //add to head
    Node* newNode = new Node();
    newNode -> data = val;
    newNode -> next = head;
    head = newNode;
    //reverse again
    afterReverse = NULL;
    now = head;
    while(now != NULL){
        temp = now->next;
        now->next = afterReverse;
        afterReverse = now;
        now = temp;
    }
    head = afterReverse;
    return head;
}


//插入指定值到指定位置
void insert(Node *head,int position,int value){
    Node *tempNode = head;
    Node *insertNode = new Node;
    int i = 0;
    //搜索第n-1个节点
    while (tempNode != NULL&&i != position - 1){
        tempNode = tempNode->next;
        i++;
    }
    insertNode->data = value;
    insertNode->next = tempNode->next;
    tempNode->next = insertNode;
}
//来自Kevin.K 我觉得和上面的一样
Node* anyInsert(Node* head, int position, int val){
    Node* n = new Node();
    n->data = val;
    if(position==0){
        n->next=head;
        head=n;
    }
    else{
        struct Node *c=new struct Node;
        int count=1;
        c=head;
        while(count!=position){
            c=c->next;
            count++;
        }
        n->next=c->next;
        c->next=n;
    }
    return head;
}

//得出链表长度
void length(Node *head){
    int i = 0;
    while (head){
        head = head->next;
        i++;
    }
    cout<<"Length :"<<i<<endl;
}

// 从第二位开始用递归计算链表总和/积
int calcSum(Node *listNode){
    if (listNode->next == NULL)
        //乘法返回1，加法返回0
        return 0;
    return listNode->next->data + calcSum(listNode->next);
}

//删除头部元素
Node* deleteHead(Node* head){
    if(head != NULL){
        head = head->next;
         }
    else{
        return NULL;
    }
    return head;
}

//删除尾部元素
Node* deleteTail(Node* head){
    Node* iter;
    for(iter = head; iter != NULL; iter = iter->next){
        if(iter->next->next == NULL){
            iter->next = NULL;
        }
    }
    return head;
}

//删除节点中的某数，设aDate是要删除的结点a中的数
void deletelist(Node *head,int aDate) {
	Node *p,*q; //p用于指向结点a,q用于指向结a的前一个结点
	p=head;
	if(p==NULL) //若是空表
	return;
	if(p->data==aDate){ //若a是第一个结点
		head=p->next;
		delete p;
	}
	else{
	while(p->data!=aDate&&p->next!=NULL){ //a既不是头结点也不是终结点，则查找结点a
	q=p;
	p=p->next;
	}
	if(p->data==aDate){ //若有结点a
	q->next=p->next;
	delete p;
	}
    }
}

//删除指定位置节点
void delete_list_position(Node *head, int position){
    Node *tempNode = head;
    Node *deleteNode = new Node;
    int i = 0;
    //搜索第n-1个节点
    while (tempNode != NULL&&i != position - 1){
        tempNode = tempNode->next;
        i++;
    }
    deleteNode = tempNode->next;
    tempNode->next = deleteNode->next;
    delete deleteNode;
}

//指定Data在List当中的位置
int get_element_of_list(int i, Node* listNode){
    int j = 0;
    Node *tempNode = listNode;
    while (j != i&&tempNode != NULL){
        tempNode = tempNode->next;
        j++;
    }
    if (tempNode == NULL)
        return 0;
    return tempNode->data;
}

//find mid node
Node* FindMidNode(Node * head){
    Node *fast = head;
    Node *slow = head;
    while (fast&&fast->next ){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

/*
//显示指定值所在的所有位置
void get_position(){
    cin >> i;
    int *position = new int[50];
    memset(position, 0, 50);
    search(i, head, position);
    cout << i << " is the ";
    for (int i = 0;position[i] > 0;i++)
    {
        cout << position[i] << " ";
    }
    cout << "th value in your linked list." << endl << endl;
    delete[] position;
}
*/


//链表逆序（递归方法）
Node* ReverseList2(Node *head){
	if (!head){
		return NULL;
	}
	Node* temp = ReverseList2(head->next);
	if (!temp){
		return head;
	}
	head->next->next = head;
	head->next = NULL;
    return temp;
}

//链表逆序（非递归方法）
Node* NoRecursion(Node *head){
        if(head==NULL)return NULL;
        Node *first=NULL;
        Node *middle=head;
        Node *last;
        while(middle!=NULL){
            last=middle->next;
            middle->next=first;

            first=middle;
            middle=last;
        }
        return first;
    }


//打印所有元素
void printall(Node* head){
	cout<<"HEAD"<<"->";
	while(head){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

//打印偶数
void printEven(Node* head){
cout<<"HEAD->";
    while(head){
            if(head->data%2==0){
                cout<<head->data<<"->";
                head = head->next;
            }
            else{
                cout<<"ODD->";
                head = head->next;
            }
   }
cout<<"NULL";
}

//考试题：去除两节点当中的最小值，链表递减
Node* removeMin(Node* n1, Node* n2){
Node *pointer;
    int minimum = n2->data;
    for(Node *i=n2; i>n1; i=i->next){
        if((i->data)<minimum){
            minimum = i->data;
            pointer = i;
        }
    }
    for(Node *i=n2; i>n1; i=i->next){
            if(i->next == pointer){
                i->next = i->next->next;
            }
     }
     return pointer;
}

//考试题：翻转两节点当中的最小值的数与最大值的数，链表递减
void reverse(Node* n1, Node* n2){
    int minimum = n2->data;
    int maximum = n2->next->data;
    Node *position;
    for(Node *i=n2; i>n1; i=i->next){
        if((i->data)<minimum){
            minimum = i->data;
            position = i;}
    }
    for(Node *i=n2; i>n1; i=i->next){
        if((i->data) == maximum){
                i->data = minimum;
                position->data = maximum;
            }
    }
}

//考试题：求偶数位数字之和，第2、4、6..等位    (待改进，啰嗦)
int sumEven(Node* head){
  int sum=0;//set the sum to zero
  int position=0;//set the position to zero
  while(head->next!=NULL){//if next is not null
    position++;//get next position
    if (position%2==0){//if position is even
      sum+=head->data;//add the sum
    }
    head=head->next;//do next
  }
  position++;//move the next position when next equal to NULL but still have data
  if (position%2==0){
    sum+=head->data;//there is one more data
  }
  return sum;//return the sum
}

//考试题：把两节点之数涂抹成2，链表递减
void magic(Node* p1, Node* p2) {
    if(p1==p2){                       //special case of which p1 and p2 point to the same node
	return;
    }

    for(Node *i=p2->next; i>p1; i=i->next){
             i->data = 2;
        }
}


// You are not supposed to change the main function
int main() {

    Node* head = NULL;
    Node *p4, *p7;

    for(int i = 1; i < 10; i++) {
        head = add(head, i);
        if (i==4) p4 = head;
        if (i==7) p7 = head;
    }
    // at this point, we have created the following list: HEAD->9->8->7->6->5->4->3->2->1->NULL
    // p4 now points to node 4 (the node containing 4); p7 now points to node 7 (the node containing 7)

    //removeMin(p4, p7);
    // between p4 and p7, there are 2 nodes. The minimum node is node 5.
    // The resulting list is HEAD->9->8->7->6->4->3->2->1->NULL

    //You can uncomment this line to test.
    //the output should be: HEAD->ODD->8->ODD->6->4->ODD->2->ODD->NULL
    //Please remember to comment this line out before submitting
    // printEven(head);

    head = add(head, 16);
    head = add(head, 20);
    // at this point, the list is: HEAD->20->16->9->8->7->6->4->3->2->1->NULL

    //head =  addTail(head, 99); //在尾部插入
    //deletelist(head,16); //删除节点中的某数
    // head= ReverseList2(head);  //链表逆序
    // head =  NoRecursion(head); //链表逆序 非递归
    //insert(head,5,5); //插入某节点
    // head=deleteTail(head); //删除尾节点
    // length(head);  //打印总长度
    // head = deleteHead(head); //删除头指针
    //cout<<calcSum(head);// 从第二位开始用递归计算链表之和
    //cout<<get_element_of_list(9,head);//指定Data在List当中的位置
    //delete_list_position(head, 5);//删除指定位置节点
    printall(head);
    insert(head,3,100);
    printall(head);  //打印所有节点
    // removeMin(p7, head); //去除两节点当中的最小值，链表递减
    // printEven(head);  //打印偶数
    //许多操作要在Main当中更新Head指针，即head = function。

    // between p7 and head, there are 3 nodes (16, 9 and 8). The minimum node is node 8
    // the output should be: HEAD->20->16->ODD->ODD->6->4->ODD->2->ODD->NULL


    // free all nodes
    Node* tmp;
    while (head) {
        tmp = head;
        head = head->next;
        delete tmp;
    }
    return 0;

}
