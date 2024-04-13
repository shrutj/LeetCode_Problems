-- # 180. Problem Statement: Consecutive Numbers
--                           Find all numbers that appear at least three times consecutively.
                          
--                           Return the result table in any order.

SELECT t1.num AS ConsecutiveNums FROM (SELECT t1.id, t1.num FROM Logs AS t1 LEFT JOIN Logs AS t2 ON t1.num = t2.num WHERE t2.id - t1.id = 1) AS t1 LEFT JOIN (SELECT t1.id, t1.num FROM Logs AS t1 LEFT JOIN Logs AS t2 ON t1.num = t2.num WHERE t2.id - t1.id = 1) AS t2 ON t1.num = t2.num WHERE t1.id - t2.id =1 GROUP BY ConsecutiveNums;
