<h2><a href="https://www.geeksforgeeks.org/problems/binary-tree-representation/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-tree-representation">Binary Tree Representation</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p dir="ltr"><span style="font-size:18px">You are given an array nodes. It contains 7 integers, which represents the value of nodes of the binary tree in level order traversal. You are also given a root of the tree which has a value equal to nodes[0].</span></p>

<p dir="ltr"><span style="font-size:18px">Your task to construct a binary tree by creating nodes for the remaining 6 nodes.</span></p>

<p dir="ltr"><strong><span style="font-size:18px">Example:</span></strong></p>

<div class="pieces-code-wrapper" style="text-align: left; width: 100%; margin-top: 10px;"><pre style="margin-bottom: 0px; margin-top: 0px;"><span style="font-size:18px"><strong>Input:</strong> </span>
<span style="font-size:18px">nodes = [1 2 3 4 5 6 7]</span>
<span style="font-size:18px"><strong>Output:</strong> </span>
<span style="font-size:18px">         1
&nbsp;      /   \
</span><span style="font-size:18px">     2       3
</span>   /  \     /  \
<span style="font-size:18px">   4  5    6   7</span>
<strong><span style="font-size:18px">Explanation: </span></strong>
<span style="font-size:18px">The 7 node binary tree is represented above.</span></pre><div class="pieces-btn-wrapper" style="border: none; display: flex; flex-direction: row; opacity: 0; width: auto; transition: opacity 0.3s ease-out; height: 26px; margin-top: 10px; margin-bottom: 10px;"><button class="pieces-btn pieces-copy-and-save" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/pieces.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Copy And Save</span></button><button class="pieces-btn pieces-share" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255); opacity: 1;"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/link.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Share</span></button><button class="pieces-btn pieces-ask-copilot" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px 6px 4px 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/copilot.png" class="pieces-logo" style="margin: 0px 4px 0px 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px;"><span class="pieces-btn-text">Ask Copilot</span></button><button class="pieces-btn pieces-settings" style="width: auto; font-size: 12px; border: 1px solid rgb(33, 33, 33); border-radius: 16px; margin-right: 4px; padding: 4px; line-height: normal; height: fit-content; cursor: pointer; user-select: none; display: flex; align-items: center; background-color: rgb(33, 33, 33); color: rgb(255, 255, 255);"><img src="https://storage.googleapis.com/pieces-web-extensions-cdn/settings.png" class="pieces-logo" style="margin: 0px; border-radius: 50%; filter: none; float: left; width: 16px; height: 16px; max-width: 100%;"></button></div></div>

<p dir="ltr"><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p dir="ltr"><span style="font-size:18px">Complete the function v<strong>oid create_tree(node* root0, vector &amp;vec)</strong>, which takes a root of a Binary tree and vector array vec containing the values of nodes.</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(1).</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>Expected Auxiliary Space:</strong> O(1).</span></p>

<p dir="ltr"><strong><span style="font-size:18px">Constraints:</span></strong></p>

<p dir="ltr"><span style="font-size:18px">vec.length = 7</span></p>

<p dir="ltr"><span style="font-size:18px">1&lt;=vec[i]&lt;=100</span></p>

<p dir="ltr"><span style="font-size:18px">&nbsp;</span></p>

<p><br>
&nbsp;</p>
</div>