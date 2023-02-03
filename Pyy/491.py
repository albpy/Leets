
# def findSubsequences(nums: list[int]) -> list[list[int]]:
#     n = len(nums)
#     result = set()
#     for bitmask in range(1, 1 << n):
#         # build the sequence
#         sequence = [nums[i] for i in range(n) if (bitmask >> i) & 1]
#         # check if its length is at least 2, and it is increasing
#         if len(sequence) >= 2 and all([sequence[i] <= sequence[i + 1] for i in range(len(sequence) - 1)]):
#             result.add(tuple(sequence))
#     return result

# print(findSubsequences([4,6,7,7]))

nums=[4,4,3,2,1]
n=len(nums)
sequence=[]
result=set()
count=0
for bitmask in range(1,1<<n):
    for i in range(n):
        if bitmask>>i & 1:
            sequence.append(nums[i]) 
            print(5*"*")
    if len(sequence)>=2:
        for j in range(len(sequence)-1):
            if sequence[j]>sequence[j+1]:
                count=1
        if count==0:
            result.add(tuple(sequence))
            print(10*"*")
            print(count)

    print(sequence)
    sequence=[]
    count=0
print(result)
