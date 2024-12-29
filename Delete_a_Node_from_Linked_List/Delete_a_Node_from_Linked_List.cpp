/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
int countList(Node* head)
{
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    if(head == NULL || head->next == NULL)
    return head;

     if(pos>=countList(head))
     return head;
    
    if(pos== 0){
        Node* temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
        return head;
    }
    Node* curr = head;
    Node* temp = head;
    Node* prev = NULL;
    int cnt= 0;
    
      while (cnt < pos) {
        prev = curr;
        curr = curr->next;
        cnt++;

      }
      prev->next = curr->next;
      curr->next = NULL;
      delete curr;
    
    
return head;
}