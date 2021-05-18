# DAA-practicals-2021
Sem IV Practical Exam
## Applications of Red black Tree
1. Most of the self-balancing BST library functions like map and set in C++ (OR TreeSet and TreeMap in Java) use Red-Black Tree.
2. It is used to implement CPU Scheduling Linux. Completely Fair Scheduler uses it.
3. used in the K-mean clustering algorithm for reducing time complexity.
4. MySQL also uses the Red-Black tree for indexes on tables.
## Applications of Kruksal's Algorithm
1. Landing Cables
2. TV Network
3. Tour Operations
## Applications of Sorting algorithms
### Insertion Sort
The insertion sort is used when:
1. the array is has a small number of elements
2. there are only a few elements left to be sorted
### Selection Sort
1. Selection sort almost always outperforms bubble sort and gnome sort.
2. Can be useful when memory write is a costly operation.
3. While selection sort is preferable to insertion sort in terms of number of writes (Θ(n) swaps versus Ο(n^2) swaps).
### Bubble Sort
1. It is used in academia to introduce 1st-year computer science students to the concept of a sorting algorithm.
2. It is comparably simpler to understand than some other sorting algorithms. 
### Merge Sort
1. Merge Sort is useful for sorting linked lists in O(n Log n) time.
2. Merge sort can be implemented without extra space for linked lists.
### Quicksort
1. Quicksort algorithm is used in many scientific simulations.
2. Quicksort algorithm is also used frequently in commercial computing.




---------------------------------------------------------------------------------------------------------------------------------
## Analysis of Time Complexities
1.Complexity of Red Black Tree:
|Algorithm        |TimeComplexity |  
|-----------------|:-------------:|
|Search           | O(log n)      | 
|Insert	          | O(log n)      |
|Delete	          | O(log n)      |

---------------------------------------------------------------------------------------------------------------------------------

2.Complexity of Kruskal’s Minimum Spanning Tree: O(ElogE) or O(ElogV)

---------------------------------------------------------------------------------------------------------------------------------
3.Complexity of Sorting algorithms:
|Algorithm        |TimeComplexity |             |           |
|-----------------|:-------------:|:-----------:|:---------:|
|                 | Best          | Average     | worst     |
|Insertion sort   | Ω(n)          |θ(n^2)       | O(n^2)    |
|Selection Sort	  |  Ω(n^2)       | θ(n^2)      |	O(n^2)    |
|Quick Sort       | Ω(n log(n))   |	θ(n log(n))	| O(n^2)    |
|Merge Sort	      | Ω(n log(n))  	|θ(n log(n))	|O(n log(n))|
|Bubble Sort	    |Ω(n)           | 	θ(n^2)	  | O(n^2)    |
