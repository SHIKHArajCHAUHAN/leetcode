# Equal Sums
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array A of positive integers, find the smallest non-negative integer (i.e. greater than or equal to zero) that can be placed between any two elements of the array such that the sum of elements in the subarray occurring before it,&nbsp; is equal to the sum of elements occurring in the subarray after it, with the newly placed integer included in either of the two subarrays.</span><br>
<br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> Arr[] = {3, 2, 1, 5, 7, 8}
<strong>Output :</strong> 4 5 1
<strong>Explanation:
</strong>The smallest possible number that we can 
insert is 4, at position 5 (i.e. between 
5 and 7) as part of first subarray so that 
the sum of the two subarrays becomes 
equal as, 3+2+1+5+4=15 and 7+8=15.

</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong> Arr[] = {9, 5, 1, 2, 0}
<strong>Output :</strong> 1 2 2
<strong>Explanation:
</strong>The smallest possible number that we can 
insert is 1,at position 2 (i.e. between 9 
and 5) as part of second subarray in 
order to get an equal sum of 9.
 </span></pre>

<p><span style="font-size:18px"><strong>Output:</strong></span></p>

<p><span style="font-size:18px">For each test case there is only one line of input comprising of three space separated integers. First, the new number that can be inserted. Second, the position (starting from 2 to N-1 , because new number can only be inserted between any two existing elements) where it should be inserted. Third, the subarray in which it is included (1 or 2) to get equal sums. If the smallest integer to be inserted has more than one possible position in the array to get equal sums, print the smallest position out of all possibilities. In case equal sums are obtained without adding any new element, the value of new element will be zero, followed by the position number, and is always included in the first subarray.</span></p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>EqualSum()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n),</strong> and return the array of <strong>3 values</strong> define in the output format. The driver code takes care of the printing.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>

<p><span style="font-size:18px"><strong>Note: </strong>Position of first element of array should be considered as 1.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">2 ≤ N ≤ 10<sup>4</sup></span></p>

<p><span style="font-size:18px">0 ≤ A[i] ≤ 10<sup>3</sup>, where i is an integer such that 0 ≤ i </span></p>
</div>