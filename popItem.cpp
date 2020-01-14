int pop(void){
  if(top == -1)
    cout << "Stack Underflow\n";
  else
    cout << arr[top--] "removed successfully\n";
}
