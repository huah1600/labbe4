/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   car.h
  * Author: hussein
  *
  * Created on den 13 december 2019, 22:23
  */
#ifndef EMAIL_H
#define  EMAIL_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>



struct CompWhoDateSubject;
struct CompDateWhoSubject;

struct CompSubjectWhoDate;
class Email {



public:


	friend std::ostream& operator<<(std::ostream& stream, const Email& rhs);
	Email(std::string name = "", std::string date = "", std::string subject = "");

	friend  CompWhoDateSubject;

	friend  CompDateWhoSubject;

	friend  CompSubjectWhoDate;
private:
	std::string who;

	std::string date;

	std::string subject;

};

std::ostream& operator<<(std::ostream&, const Email& rhs);

struct CompWhoDateSubject

{

	bool operator()(const Email& lhs, const Email& rhs) const;

};

struct CompDateWhoSubject

{

	bool operator()(const Email& lhs, const Email& rhs) const;

};

struct CompSubjectWhoDate

{
	bool operator()(const Email& lhs, const Email& rhs) const;

};
#endif /* EMAIL*/

