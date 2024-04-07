-- # 1280. Problem Statement: Students and Examinations
--                            Write a solution to find the number of times each student attended each exam.
                          
--                            Return the result table ordered by student_id and subject_name.

SELECT S.student_id, S.student_name, sub.subject_name, IFNULL(COUNT(e.subject_name), 0) AS attended_exams FROM Students AS S CROSS JOIN Subjects AS sub LEFT JOIN Examinations AS e ON S.student_id = e.student_id AND e.subject_name = sub.subject_name GROUP BY S.student_id, S.student_name, sub.subject_name ORDER BY S.student_id, S.student_name;
