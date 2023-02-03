
def is_Valid_inTeger( str_to_test):
	if not str_to_test:
		return(False)

	number_seen=False

	i=0
	if str_to_test[i] in ['+','-']:
		i+=1
	while i<len(str_to_test):
		cur_char=str_to_test[i]

		if not cur_char.isdigit():
			return(False)
		else:
			number_seen=True

		i+=1
	return number_seen
s=str(input())
decimal_used=False
number_seen=False
i=0
if s[i] in ['+','-']:
	i+=1
while i<len(s):
	cur_char=s[i]
	if cur_char.isalpha():
		if cur_char not in ['e', 'E']:
			print(False)
		else:
			print(number_seen and is_Valid_inTeger(s[i+1:]))
	elif cur_char ==".":
		if decimal_used:
			print(False)
		else:
			decimal_used = True
	elif cur_char in ['-', '+']:
		print(False)
	else:
		number_seen=True
	i+=1
print(number_seen)


