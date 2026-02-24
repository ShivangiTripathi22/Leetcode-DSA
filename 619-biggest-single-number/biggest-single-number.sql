# Write your MySQL query statement below
SELECT max(num)as num
FROM MyNumbers
where num IN(
    SELECT num FROM MyNumbers
    GROUP BY num
    HAVING COUNT(num)=1
);