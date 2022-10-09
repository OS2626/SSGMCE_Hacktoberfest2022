"""
A pure Python implementation of the binary search algorithm
This algorithm search a key in a sorted collection by comparing key with middel element.
If the value of the search key is equal to the item then return an index of the search key.
Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
Otherwise, narrow it to the upper half.
Repeatedly check from the second point until the value is found or the interval is empty.
Time Complexity : O(log(n))
Space Complexity: O(1)
"""

def binary_serach(nums:list,key:int) -> int:
    '''
    his algorithm search a key in a sorted collection. 
    if key exist in collection return its index otherwise return -1
    Examples:
    >>> binary_serach([1,2,3,7,9], 2)
    1
    >>> binary_serach([1,2,3,7,9], 9)
    4
    >>> binary_serach([1,2,3,7,9], 5)
    -1
    >>> binary_serach([], 5)
    -1
    '''
    
    L,R = 0,len(nums)-1
    mid = -1
    while L<=R:
        mid = (L+R)//2
        if nums[mid] == key:
            return mid
        elif nums[mid] < key:
            L = mid + 1
        else:
            R = mid - 1
    # value not found 
    return -1


if __name__ == "__main__":
    from doctest import testmod
    testmod()
