/**
 * Definition for singly-linked list.
 * class ListNode {
 *     constructor(val = 0, next = null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

class Solution {
    /**
     * @param {ListNode} head
     * @param {number} n
     * @return {ListNode}
     */
    removeNthFromEnd(head, n) {
        const st= new ListNode(0,head)
       let slow=st
        let fast=head
        for(let i=0;i<n;i++){
            fast=fast.next
        }

        while(fast){
            fast=fast.next
            slow=slow.next
        }
        slow.next=slow.next.next

        return st.next
    }
}
