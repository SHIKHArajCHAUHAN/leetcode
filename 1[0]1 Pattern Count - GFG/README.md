# 1[0]1 Pattern Count
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string S, your task is to find the number of patterns of form 1[0]1 where [0] represents any number of zeroes (minimum requirement is one 0) there should not be any other character except 0 in the [0] sequence.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "100001abc101"<strong>
Output: </strong>2
<strong>Explanation:
</strong>The two patterns are "100001" and "101".</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>S = "1001ab010abc01001"
<strong>Output: </strong>2
<strong>Explanation:
</strong>The two patterns are "1001"(at start)
and "1001"(at end).</span></pre>

<p><br>
<span style="font-size:18px"><strong>User Task:</strong><br>
Your task is to complete the function&nbsp;<strong>patternCount()&nbsp;</strong>which takes a single argument(string S) and returns the count of patterns. You need not take any input or print anything.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=Length of String&lt;=10^5</span></p>
</div>