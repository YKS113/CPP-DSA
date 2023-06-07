/*
P-1 selection sort
Link-https://www.codingninjas.com/codestudio/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

TC- O(n^2)
SC- O(1)
TC in Best case (i.e. sorted array- 1 2 3 4 5 ) => O(n^2)
TC in Worst case (i.e. reversely sorted array- 5 4 3 2 1 ) => O(n^2)
It's an In-place algorithm i.e. An in-place algorithm is an algorithm that does not need an extra space and produces an output in the same memory that contains the data by transforming the input ‘in-place’. However, a small constant extra space used for variables is allowed.

It's an Unstable sorting algo-- changes the order of occurence of repeated elements
eg. [23',12',4,6,12*,23*] ' => first, * => second
o/p [4,6,12*,12',23*,23']
    since, minIndex is updated for every iteration of arr[j]<arr[i], mminIndex takes value of second(last) occurance of repeated element
    for, multiple occurences resulting order becomes messy


Use- When array size is small and you've space constaints
*/

/*
P-2 Bubble sort
Link--- first submission ---https://www.codingninjas.com/codestudio/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2 

TC- O(n^2)
SC- O(1)
TC in Best case (i.e. sorted array- 1 2 3 4 5 ) => O(n)
since, we optimized code in second submission
TC in Worst case (i.e. reversely sorted array- 5 4 3 2 1 ) => O(n^2)
It's an In-place algorithm

It's a stable sorting algo-- changes the order of occurence of repeated elements
eg. [23',12',4,6,12*,23*] ' => first, * => second
o/p [4,6,12',12*,23',23*]
    since, repeated elments come adjacent and are not swapped so first occuring elements remain first and last occuring remain last


Use- When array size is small and you've space constaints
*/