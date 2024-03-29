-- # 1934. Problem Statement: Confirmation Rate
--                            The confirmation rate of a user is the number of 'confirmed' messages divided by the total number of requested confirmation messages. The confirmation rate of a user that did not request any confirmation messages is 0. Round the confirmation rate to two decimal places.

--                            Write a solution to find the confirmation rate of each user.
                          
--                            Return the result table in any order.


SELECT t1.user_id, COALESCE(ROUND(COUNT(CASE WHEN t2.action = 'confirmed' THEN 1 ELSE NULL END)/ COUNT(t2.action), 2),0) AS confirmation_rate FROM Signups AS t1 LEFT JOIN Confirmations AS t2 ON t1.user_id = t2.user_id GROUP BY t1.user_id;
