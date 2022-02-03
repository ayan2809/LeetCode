Mazaa aa gya iss problem me
so thing is
for every node check if its greater than the mini and lesser than the max
initialize mini =INT_MIN
and maxi= INT_MAX
​
so for every node we send the data and check the above condition
​
iff call needs to be on the left subtree then max should be updated to the root->data
coz left subtree elements will be always smaller than teh root data
​
​
iff call needs to be onthe right subtree then max should be updated  to the root->data coz right subtree elements will be always greater than the root data
​
​
this is the basic logic behind this problem