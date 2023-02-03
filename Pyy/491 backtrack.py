def findSubsequences(nums: list[int]) -> list[list[int]]:
	n = len(nums)
	result = set()
	def find(i, last, current):
		if i==n:
			if len(current)>=2:
				result.add(tuple(current))
				# print(i)
			return		
		if nums[i]>=last:
			print(i)
			current.append(nums[i])
			find(i+1, nums[i], current)
			current.pop()
		find(i+1, last, current)
		print(i)

	find(0,-10000,[])
	return result


print(findSubsequences([4,6,7,7]))