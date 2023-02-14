# Balance with respect to an array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">As a programmer, it is very necessary to maintain balance in the life.<br>
Here is task for you to maintain a balance. Your task is to find whether a given number <strong>x</strong> is balanced with respect to a given array <strong>a[ ]</strong>&nbsp;which is sorted in&nbsp;non-decreasing order.<br>
Given a sorted array <strong>a[ ],</strong> the ceiling of <strong>x</strong>&nbsp;is the smallest element in the array greater than or equal to <strong>x</strong>, and the floor of <strong>x</strong> is the greatest element smaller than or equal to <strong>x</strong>. The number '<strong>x</strong>' is said to be balanced if the absolute difference between&nbsp;floor of <strong>x</strong> and <strong>x</strong> is equal to the absolute difference between&nbsp;ceil of <strong>x</strong> and <strong>x</strong> <em>i.e</em>. if <strong>absolute(x - floor(x, a[])) = absolute(ceil(x, a[]) - x)</strong>.<br>
If one of floor or ceil does not exist assume '<strong>x</strong>' to be balanced.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 7  
x = 5
a[] = {1, 2, 8, 10, 10, 12, 19} 
<strong>Output:</strong> 
Balanced
<strong>Explanation</strong>: Here 2 is the floor value and 
8 is the ceil value and (5 - 2) = (8 - 5).  </span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 8  
x = 9 
a[] = {1, 2, 5, 7, 8, 11, 12, 15} 
<strong>Output:</strong> 
Not Balanced</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>FindElement</strong>() that takes <strong>array a[ ], its size N&nbsp;</strong>and<strong> integer x</strong>&nbsp;as input parameters and returns the string "<strong>Balanced</strong>"&nbsp;if the absolute difference between&nbsp;floor of x and x is equal to the absolute difference between&nbsp;ceil of x and x or else returns string "<strong>Not Balanced</strong>".</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(LogN)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>6</sup></span></p>
</div>