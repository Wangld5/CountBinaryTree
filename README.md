# CountBinaryTree
## 根据二叉树前序遍历和后序遍历确定二叉树个数
#### 首先我们知道第一个和最后一个对应的数为根节点，就可以排除。接下来设pre[100]和pos[100]作为前后遍历，顺序为s1--e1,s2--e2。当pre[s1+1]==pos[i]且i==e2-1时确定存在一棵二叉树。接着递归遍历s1+1--s1+1+i-s2, s2--i。s1+1+i-s2+1--e1, i+1--e2-1。遍历停止条件为s1>=e1。而输入时为e1为pre.length()-1,同理e2为pos.length()-1。保证第一位被排除。最后再通过count乘2得出结果。
