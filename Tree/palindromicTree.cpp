/*

Invented by Mikhail Rubinchik.
It solve palindromic problem in linear time.
Tree nodes store palindromic substrings of given string by storing their indices.

There are two type of edge
 1) Insertion edge(weighted edge)
 2) Maximum Palindromic Suffix edge(un-weighted)

Insertion edge
--------------
  Insertion edge from node u to v with some edge x means, we can get palindrom at node v by adding x in front and end of 
  palindrom string at node u.

Maximum Palindromic Suffix Edge
-------------------------------
  It points to maximum palindromic siffix string, we will not consider whole string as suffix string as it creates
  self loop(means maximum palindromic string except complete string).
 


It has rwo root dummy nodes, root1 describe string of length -1, root2 describes string of length 0.
root1 has a suffix edge to itself, root2 has a suffix edge to root1.


BUILDING THE PALINDROMIC TREE
-----------------------------


  



*/
