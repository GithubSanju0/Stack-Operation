void push(int item){
  if(top == MAX-1)
    cout << "Stack overflow\n";
  else{
    arr[++top] = item;
    cout << "Item added successfully\n";
  }
}
