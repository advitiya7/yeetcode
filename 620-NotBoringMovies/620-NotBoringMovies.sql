-- Last updated: 1/22/2026, 7:55:31 PM
# Write your MySQL query statement below
select * from cinema where id%2!=0 and description NOT IN('boring') order by rating desc