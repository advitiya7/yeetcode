-- Last updated: 1/22/2026, 7:53:00 PM
# Write your MySQL query statement below
select tweet_id from Tweets where CHAR_LENGTH(content)>15;