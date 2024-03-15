-- # 1581. Problem Statement: Customer who visited but did not make any transactions
--                            Write a solution to find the IDs of the users who visited without making any transactions and the number of times they made these types of visits.
                          
--                            Return the result table sorted in any order.

SELECT t1.customer_id, COUNT(t1.customer_id) AS count_no_trans FROM Visits AS t1 LEFT JOIN Transactions AS t2 ON t1.visit_id = t2.visit_id WHERE t2.visit_id IS NULL GROUP BY t1.customer_id;
