-- Last updated: 1/22/2026, 7:54:05 PM
# Write your MySQL query statement below


select person_name from (select person_id,person_name,weight,turn,sum(weight) over(order by turn) as total_weight from queue) q1  where total_weight<=1000 order by turn DESC limit 1