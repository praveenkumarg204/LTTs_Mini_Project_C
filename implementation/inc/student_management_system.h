/**
 * @file student_management_system.h
 * @author Praveen Kumar G
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __STUDENT_MANAGEMENT_SYSTEM_H__
#define __STUDENT_MANAGEMENT_SYSTEM_H__
#define Student struct Stud
struct Stud
{
    char name[100];
    char dept[50];
    int roll;
    float sgpa[12];
    float cgpa;
};

void add(FILE * fp);
void modify(FILE * fp);
void display(FILE * fp);
void Indivisual(FILE *fp);
FILE * del(FILE * fp);
void printChar(char ch,int n);
void title();
#endif
