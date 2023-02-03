cards="AAAABBBB"
n=len(cards)
cnt=0							
countA=0
countB=0
for i in range(n):			
	if cards[i]=='A':		
		cnt+=1		
	if cards[i]=='B' or i==n-1:		
		if cnt>=3:			
			countA+=cnt-2
		cnt=0
cnt=0
for i in range(n):
	if cards[i]=='B':
		cnt+=1
	if cards[i]=='A' or i==n-1:
		if cnt>=3:
			countB+=cnt-2
		cnt=0
print(countA)
print(countB)
if countA>countB:
	print(True)
else:
	print(False)

