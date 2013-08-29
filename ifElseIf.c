  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * IfElseIf - This program describes the if else if construct in C
   */

#include <stdio.h>

int main()
{
	int marks;
	
	printf("Enter Marks : ");
	scanf("%d", &marks);
	
	if(marks >= 75 && marks <=100 )
	{
		printf("\nGrade A");
	}
	else if(marks < 75 && marks >= 60)
	{
		printf("\nGrade B");
	}
	else if(marks < 60 && marks >= 50)
	{
		printf("\nGrade C");
	}
	else if(marks < 50 && marks >= 33)
	{
		printf("\nGrade D");
	}
	else if(marks < 33 && marks >=0 )
	{
		printf("\nFail");
	}
	else
	{
		printf("\nInvalid Marks");
	}

	return 0;
}

