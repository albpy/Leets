-- comments 
{- Multiline comments-}
import Data.List
import System.IO
-----------------------------------------------------------DataTypes-------------------------------------------------------------------------
--Int -2^63 2^63
maxInt = maxBound :: Int

minInt = minBound :: Int

--Integer unbound

--Float
--Double precesion upto 11 points

bigFloat = 3.999999999999+0.000000000005

--Bool True False
--Char ''
--Tuple

always5 :: Int
always5 = 5
----------------------------------------------------------Mathfunctions--------------------------------------------------------------------
sumOfNums = sum [1..1000]

addEx = 5+4
subEx= 5-4
multEx=5*4
divEx = 5/4


modEx = mod 5 4 --prefix operator
modEx2 = 5 `mod` 4 --infix operator

--addition with negative number
negNumEx = 5+(-4)

--squareroot
num9 = 9 :: Int
sqrtOf9 = sqrt (fromIntegral num9)


-------------------------------------------------------------Logical operators--------------------------------------------------------------
trueAndFalse = True&&False
trueOrFalse = True||False
notTrue=not(True)
-------------------------------------------------------------List---------------------------------------------------------------
primeNumbers = [3,5,7,11]
morePrimes = primeNumbers ++ [3,17,19,23,29]

favNums = 2 : 7 : 2 : 66 :[]
multList = [[3,5,7],[11,13,17]]
--value infront of list
morePrimes2= 2 : morePrimes
--length of list
lenPrime = length morePrimes2
--reverse list
revPrime = reverse morePrimes2

isListEmpty = null morePrimes2
---Index values
secondPrime = morePrimes2 !! 1
firstPrime = head morePrimes2
lastPrime = last morePrimes2

--eliminate last value
primeInit = init morePrimes2
--First 3 value in list
first3Primes = take 3 morePrimes2
--eliminate first 3 value
removedPrimes= drop 3 morePrimes2
--check a value in a list
is7InList = 7 `elem` morePrimes2

--maximum value in list

maxPrime = maximum morePrimes2
minPrime = minimum morePrimes2

--product of vale in list
newList = [2,3,5]
prodPrimes = product newList

--generate list from 0 to 10
zeroToTen =[0..10]

evenList = [2,4..20]
letterList = ['A','C'..'Z']

many2s = take 10 (repeat 2)

--replicate function
many3s = replicate 10 3
cycleList = take 10 (cycle[1,2,3,4,5])