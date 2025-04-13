<h2><a href="https://www.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1">Merge two binary Max heaps</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two binary max heaps as arrays, merge the given heaps to form a new max heap.</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<div class="pieces-code-wrapper" style="text-align: left; width: 100%; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size:18px"><strong>Input  :</strong> 
n = 4 m = 3
a[] = {10, 5, 6, 2}, 
b[] = {12, 7, 9}
<strong>Output :</strong> 
{12, 10, 9, 2, 5, 7, 6}</span>
<span style="font-size:18px"><strong>Explanation :</strong></span>

<input alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/Merge_max_heap_1.jpg" style="height:160px; width:300px" type="image">
<input alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/Merge_max_heap_2.jpg" style="height:120px; width:200px" type="image">
<span style="font-size:18px"><input alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/Merge_max_heap_3.jpg" style="height:160px; width:300px" type="image"></span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; flex-direction: row; opacity: 0; width: auto; transition: opacity 0.3s ease-out; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy-and-save" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/pieces.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy And Save</span></button><button class="pieces-btn pieces-share" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/link.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Share</span></button><button class="pieces-btn pieces-ask-copilot" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copilot.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Ask Copilot</span></button><button class="pieces-btn pieces-settings" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/settings.png" class="pieces-logo" style="margin: 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px; max-width: 100%;"></button></div></div>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>mergeHeaps</strong><strong>()</strong>&nbsp;which takes the array <strong>a[]</strong>, <strong>b[]</strong>, its size <strong>n </strong>and <strong>m,&nbsp;</strong>as inputs and return&nbsp;the merged max heap.&nbsp;Since there can be multiple solutions, therefore, to check for the correctness of your solution, your answer will be checked by the driver code and will return&nbsp;<strong>1</strong>&nbsp;if it is correct, else it returns&nbsp;<strong>0</strong>.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n.Logn)<br>
<strong>Expected Auxiliary Space:</strong> O(n + m)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n, m &lt;= 10<sup>5</sup><br>
1 &lt;= a[i], b[i] &lt;= 2*10<sup>5</sup></span><br>
&nbsp;</p>

<p><br>
&nbsp;</p>

<p>&nbsp;</p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Heap</code>&nbsp;<code>Data Structures</code>&nbsp;