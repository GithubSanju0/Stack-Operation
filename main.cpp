#include<stdio.h>
#define MAX 10
int arr[10], top=-1;

int main(void){
  int item, ch, popEle;
  
  while(1){
    cout << "--------------------\n";
    cout << "1. Push an item\n";
    cout << "2. Pop an item\n";
    cout << "3. Peek item\n";
    cout << "4. Count item\n";
    cout << "5. Exit\n\n";
    cout << "--------------------\n";
  }
  
  cout << "Enter Choice: ";
  cin >> ch;
  
  switch(ch){
    case 1: cout << "Enter an item: ";
            cin >> item;
            push(item);
            break;
            
    case 2: popEle = pop();
            if(popEle != -1)
                cout << popEle "removed successfully.\n";
            break;
            
    case 3: peek();
            break;
            
    case 4: cout << "Number of elements are " << count();
            break;
            
    case 5: return 0;
            break;
            
    default: cout << "Enter valid choice\n\n";
  }
            
  return 0;
}
