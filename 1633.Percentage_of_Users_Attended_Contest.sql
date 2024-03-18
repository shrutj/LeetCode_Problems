-- # 1633. Problem Statement: Percentage of Users Attended Contest.
--                            Write a solution to find the percentage of the users registered in each contest rounded to two decimals.

--                            Return the result table ordered by percentage in descending order. In case of a tie, order it by contest_id in ascending order.

SELECT DISTINCT contest_id, ROUND(COUNT(contest_id)/(SELECT COUNT(user_id) FROM Users) * 100, 2) AS percentage FROM Register GROUP BY contest_id ORDER BY percentage DESC, contest_id ASC;
