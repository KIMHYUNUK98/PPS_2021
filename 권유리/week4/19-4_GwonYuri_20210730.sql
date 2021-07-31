select Email
FROM Person
group by Email
having count(*) > 1