-- Last updated: 1/22/2026, 7:52:18 PM
# Write your MySQL query statement below
select teacher_id,count(distinct subject_id) as cnt from teacher group by teacher_id