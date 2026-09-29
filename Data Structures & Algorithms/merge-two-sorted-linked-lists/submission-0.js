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
     * @param {ListNode} list1
     * @param {ListNode} list2
     * @return {ListNode}
     */
    mergeTwoLists(list1, list2) {

        let li1=list1
        let lis2=list2

        let dummy= new ListNode(0)
        let curr=dummy

        while(li1&&lis2){
            if(li1.val>lis2.val){
                curr.next=lis2
                lis2=lis2.next
            }else {
                console.log(li1)
                     curr.next=li1

                     console.log(curr)
                li1=li1.next
            }

            curr=curr.next

        }


        if(li1){
            curr.next=li1
        }
        if(lis2){
            curr.next=lis2
        }

        return dummy.next

    }
}
