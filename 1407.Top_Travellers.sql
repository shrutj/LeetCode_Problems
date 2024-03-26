-- # 1407. Problem Statement: Top Travellers
--                            Write a solution to report the distance traveled by each user.
                          
--                            Return the result table ordered by travelled_distance in descending order, if two or more users traveled the same distance, order them by their name in ascending order.

SELECT t1.name, COALESCE(SUM(t2.distance),0) AS travelled_distance FROM Users AS t1 LEFT JOIN Rides AS t2 ON t1.id = t2.user_id GROUP BY t2.user_id ORDER BY travelled_distance DESC, t1.name ASC;
