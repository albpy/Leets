# num=int(input())
# steps=0
# while num:
# 	if num%2==0:
# 		num=num//2
# 	else:
# 		num=num-1
# 	steps+=1
# print(steps)

class solution(object):
	def numberOfSteps(num):
		
	
		steps=0
		while num:
			if num%2==0:
				num=num//2
			else:
				num=num-1
			steps+=1
		print(steps)
		return(steps)

	numberOfSteps(40)