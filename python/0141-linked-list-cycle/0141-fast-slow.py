class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        slow = head
        fast = head

        while fast:
            slow = slow.next

            if fast is None or fast.next is None:
                return False
            else:
                fast = fast.next.next
            
            if fast == slow:
                return True
            
        return False