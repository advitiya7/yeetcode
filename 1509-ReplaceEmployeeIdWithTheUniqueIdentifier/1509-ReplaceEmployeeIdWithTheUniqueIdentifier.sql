-- Last updated: 1/22/2026, 7:53:40 PM
# Write your MySQL query statement below
select em.unique_id,e.name from Employees e left join EmployeeUNI em on e.id=em.id