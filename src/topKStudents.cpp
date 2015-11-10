/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the names and scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and K value is 2.
return top 2 students [ { "stud2", 30 }, { "stud3", 40 } ]

INPUTS: array of structures of type student, length of the array, integer K.

OUTPUT: Return top K students from array. Output need not be in decreasing order of scores.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <iostream>
#include <malloc.h>

struct student {
	char *name;
	int score;
};

struct student ** topKStudents(struct student *students, int len, int k) {
	int highest,index=0,i; struct student** returnValue=NULL;
	if (students != NULL&&len > 0 && k>0)
	{
		if (k>len)
			k = len;
		returnValue = (struct student**)malloc(k*sizeof(struct student*));
		for (i = 0; i < k; i++)
			returnValue[i] = (struct student*)malloc(sizeof(struct student));
		while (k>0)
		{
			highest = 0;
			for (i = 1; i < len; i++)
			{
				if (students[i].score>students[highest].score)
				{
					highest = i;
				}
			}
			returnValue[index]->score = students[highest].score;
			returnValue[index]->name = students[highest].name;
			students[highest].score = -1;
			++index;
			--k;
		}
	}
	return returnValue;
}