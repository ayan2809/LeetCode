each number will be at max 2^32 ie 32 bits long. So we need to check which number overlaps certain bits. It means that the overlapping bits will form a combination and form the maximum bitwise AND of those numbers. The formula to get the bits is
​
i>>j &1
​
it will give either 1 or 0 based on the number
where
i = original number
j = position