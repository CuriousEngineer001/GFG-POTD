// THE C++ CODE

class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
      struct Node* temp = head;
      int cnt= 0;
      while(temp != NULL){
          if(temp->data == key) cnt++;
          temp = temp->next;
      }
      return cnt;
    }
};