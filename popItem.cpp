int pop(void){
  if(top == -1){
    cout << "Stack Underflow\n";
    return -1;
  }
  else
    return arr[top--];
}
