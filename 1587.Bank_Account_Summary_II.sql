-- # 1587. Problem Statement: Bank Account Summary II
--                            Write a solution to report the name and balance of users with a balance higher than 10000. The balance of an account is equal to the sum of the amounts of all transactions involving that account.

--                            Return the result table in any order.


SELECT t1.name, SUM(t2.amount) AS balance FROM Users AS t1 LEFT JOIN Transactions AS t2 ON t1.account = t2.account GROUP BY t1.account HAVING balance > 10000;
