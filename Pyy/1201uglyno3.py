n=1000000000
a=2
b=217983653
c=336916467
# a=1061;
# b=2495;
# c=4989;
# n=10000;
#Eucledian algorithm							| why it works: remainder is consequently decreasing to 0
"""Takes 2 + integer a,b 						|Thm: if a=bq+r, then gcd(a,b)=gcd(b,r)
	a=bq+r  	0<=r<r 							|	gcd(a,b)=gcd(b,r)
	b=rq1+r1 	0<=r1<r 						|	gcd(b,r)=gcd(r,r1)
	r=r1q2+r2 	0<r2<=r1 						|	gcd(r,r1)=gcd(r1,r2)
			...									|			.
(continue until remainder is zero) 				|			.
												|			.
	r(i-2)=r(i-1)qi+ri  0<=ri<r(i-1) 			|  =gcd(r(i-1),ri)=gcd(ri,0)=r0		
	r(i-1)=riqi+1+0								|	   -------
	The last nonzero remainder is the gcd		|	  ||Proof||
	gcd(a,b)=ri									|	   -------
												|d be any common divisor
												|d|a, d|b-->d|(a-bq)-->d|r
	a should always greater than b				|Let e be any common divisor of b and r
	 											|e|b,e|r-->e|bq+r->e|a
				 								|==>d is a common divisor of a and b iff
												|	d is common divisor of b and r."""




def gcd(x,y):
	# print(a,b)
	if(y>x):
		temp=y
		y=x
		x=temp
	if(y==0):
		return x
	else:
		return gcd(y,x%y)
def lcm(x,y):
	return x*y//gcd(x,y)
gcd(1061,2495)
a_b=lcm(a,b)
b_c=lcm(b,c)
a_c=lcm(a,c)
a_b_c=lcm(a, b_c)
print(a_b,"'",b_c,",",a_c,",",a_b_c)


low=1
high=2000000000
while(low<high):
	mid=low+(high-low)//2
	o=(mid//a) + (mid//b) + (mid//c) - (mid//lcm(a,b)) - (mid//lcm(a,c)) - (mid//lcm(b,c)) + (mid//lcm(a, lcm(b,c)))
	if(o<n):
		low=mid+1
	else:
		high=mid
	# print(o,mid,low,high)
print(int(low))