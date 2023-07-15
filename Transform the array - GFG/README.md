# Transform the array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr[]</strong> of size <strong>N</strong> containing integers, zero is considered an invalid number, and rest all other numbers are valid. If two nearest valid numbers are equal then double the value of the first one and make the second number as 0. At last move all the valid numbers on the left.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 12
arr[] = {2, 4, 5, 0, 0, 5, 4, 8, 6, 0, 
                                 6, 8}
<strong>Output:</strong>  2 4 10 4 8 12 8 0 0 0 0 0
<strong>Explanation</strong>: After performing above 
given operation we get array as,
2 4 10 0 0 0 4 8 12 0 0 8, then shifting
all zero's to the right, we get resultant
array as - 2 4 10 4 8 12 8 0 0 0 0 0 </span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 2, arr[] = {0, 0}
<strong>Output:</strong> 0 0
<strong>Explanation:</strong> All elements in the array 
are invalid .</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Complete the function <strong>valid</strong>() that takes array<strong>&nbsp;arr[]&nbsp;</strong>and integer<strong> N</strong> as input parameters and returns the resultant&nbsp;array.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup></span></p>

<p>&nbsp;</p>
</div>