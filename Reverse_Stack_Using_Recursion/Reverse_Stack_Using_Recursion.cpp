void insertAtBottom(stack<int> &s, int element) {
    //basecase
    if(s.empty()) {
        s.push(element);
      	return ;
    }
    
    int num = s.top();
    s.pop();
    
    //recursive call
    insertAtBottom(s, element);
    
    s.push(num);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty())
        return;

    int num = stack.top();
    stack.pop();

    reverseStack(stack);
    insertAtBottom(stack, num);

}