# Sum of Lengths of Non-Overlapping SubArrays
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-family:tahoma,geneva,sans-serif"><span style="font-size:18px">Given an array <strong>arr[]</strong> of <strong>N</strong> elements, the task is to find the&nbsp;maximum sum of lengths of all non-overlapping subarrays&nbsp;with <strong>K</strong>&nbsp;as the maximum element in the subarray.</span></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 9, K = 4
arr[] = {2, 1, 4, 9, 2, 3, 8, 3, 4} 
<strong>Output:</strong> 5
<strong>Explanation</strong>: {2, 1, 4} =&gt; Length = 3
             {3, 4} =&gt; Length = 2
             So, 3 + 2 = 5 is the answer.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 7, K = 4
arr[] = {1, 2, 3, 2, 3, 4, 1} 
<strong>Output:</strong> &nbsp;7
<strong>Explanation:</strong> {1, 2, 3, 2, 3, 4, 1} 
             =&gt; Length = 7.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>calculateMaxSumLength</strong>() that takes array <strong>arr,</strong> integer<strong> N</strong>, and integer<strong> K&nbsp;</strong>as parameters and returns <span style="font-family:arial,helvetica,sans-serif">the sum of the length of all such subarrays.</span></span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N).&nbsp;<br>
<strong>Expected Auxiliary Space:</strong> O(1).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>6</sup></span></p>
</div>