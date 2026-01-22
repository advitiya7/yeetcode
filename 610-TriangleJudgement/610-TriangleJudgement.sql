-- Last updated: 1/22/2026, 7:55:32 PM
# Write your MySQL query statement below
SELECT x, y, z, IF((x+y>z) AND (x+z>y) AND (y+z>x), "Yes", "No") AS triangle
FROM Triangle;
