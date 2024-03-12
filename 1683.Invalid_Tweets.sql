-- # 1683.Problem Statement: Invalid tweets
--                           Write a solution to find the IDs of the invalid tweets. The tweet is invalid if the number of characters used in the content of the tweet is strictly greater than 15.

--                           Return the result table in any order.

SELECT tweet_id FROM Tweets WHERE CHAR_LENGTH(content) > 15;
