#ifndef BIS_H
#define BIS_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct user//账户结构体
{
    char name[100];
    long long int IDnumber;
    long long int account;
    double deposit;
    char password[100];

}user;


void Add_user();

void Delete_user();

void Check_information();

void Deposit();

void Withdrawal();

void Deposit_transfer();

















#endif
