-- Last updated: 1/22/2026, 7:54:02 PM
# Write your MySQL query statement below
select query_name, ROUND(AVG(rating/position),2) as quality,ROUND(AVG(IF(rating<3,1,0))*100,2) as poor_query_percentage from queries where query_name IS NOT NULL  group by query_name