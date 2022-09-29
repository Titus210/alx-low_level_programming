#		HASHING
***
##	Introduction
Hashing is a technique or process of mapping keys, and values into the hash table by using a hash function.
Hash table data structure stores elements in key-value pairs where:
-		Key- unique integer that is used for indexing the values
-		Value - data that are associated with keys.
A new index is processed using the keys. And, the element corresponding to hat key is stored in the index. This process is called hashing.
### Hash collidion
When the hash function generates the same index for multiple keys, there will be a conflict (what value to be stored in that index). This is called a hash collision.
#### REsolving hash collidion
1. **Chaning**
If a hash function produces the same index for multiple elements, these elements are stored in the same index by using a doubly-linked list.<br/>
If j is the slot for multiple elements, it contains a pointer to the head of the list of elements. If no element is present, j contains NIL.
2.**Open Addressing**
Unlike chaining, open addressing doesn't store multiple elements into the same slot. Here, each slot is either filled with a single key or left NIL.<br/>
Methods of open adressing
-	Linear Probing: <br/>
collision is resolved by checking the next slot.
The problem with linear probing is that a cluster of adjacent slots is filled. When inserting a new element, the entire cluster must be traversed. This adds to the time required to perform operations on the hash table.
-	Quadratic Probing<br/>
It works similar to linear probing but the spacing between the slots is increased (greater than one) by using the following relation.
```
	h(k, i) = (h′(k) + c1i + c2i2) mod m
```
-	Double hashing<br/>
If a collision occurs after applying a hash function h(k), then another hash function is calculated for finding the next slot.
```
	h(k, i) = (h1(k) + ih2(k)) mod m
```
##	Application of Hashing
1. Where constant time lookup and insertion is required
2. cryptographic applications
3. indexing data is required
***
