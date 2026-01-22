-- Last updated: 1/22/2026, 7:55:38 PM
SELECT e.name
FROM Employee AS e 
INNER JOIN Employee AS m ON e.id=m.managerId 
GROUP BY m.managerId 
HAVING COUNT(m.managerId) >= 5