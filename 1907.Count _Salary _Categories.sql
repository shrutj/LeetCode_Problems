-- # 1907. Count Salary Categories
--         Write a solution to calculate the number of bank accounts for each salary category. The salary categories are:
        
--         "Low Salary": All the salaries strictly less than $20000.
--         "Average Salary": All the salaries in the inclusive range [$20000, $50000].
--         "High Salary": All the salaries strictly greater than $50000.
--         The result table must contain all three categories. If there are no accounts in a category, return 0.
        
--         Return the result table in any order.

SELECT 'High Salary' AS category, COALESCE(SUM(CASE WHEN income > 50000 THEN 1 END), 0) AS accounts_count FROM Accounts
UNION
SELECT 'Low Salary' AS category, COALESCE(SUM(CASE WHEN income < 20000 THEN 1 END),0) AS accounts_count FROM Accounts
UNION
SELECT 'Average Salary' AS category,COALESCE(SUM(CASE WHEN income >= 20000 AND income<= 50000 THEN 1 END),0) AS accounts_count FROM Accounts;
