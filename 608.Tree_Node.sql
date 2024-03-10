-- # 608. Tree Node
--        Each node in the tree can be one of three types:

--        "Leaf": if the node is a leaf node.
--        "Root": if the node is the root of the tree.
--        "Inner": If the node is neither a leaf node nor a root node.
--        Write a solution to report the type of each node in the tree.

--        Return the result table in any order.


SELECT id, 'Root' AS type FROM Tree WHERE p_id IS NULL
UNION
SELECT id, 'Inner' AS type FROM Tree WHERE id IN (SELECT p_id FROM Tree) AND p_id IS NOT NULL
UNION 
SELECT id, 'Leaf' AS type FROM Tree WHERE id NOT IN (SELECT id FROM Tree WHERE p_id IS NULL
UNION
SELECT id FROM Tree WHERE id IN (SELECT p_id FROM Tree) AND p_id IS NOT NULL);
