#ifndef MAILBOX_H
#define  MAILBOX_H
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   MailBox.h
  * Author: hussein
  *
  * Created on den 13 december 2019, 22:23
  */
#include <stdio.h>
#include  "Email.h"
#include <string>
#include <vector>

#include <iostream>


class MailBox {


public:
	MailBox(size_t size);

	void push(const Email& email);
	std::vector<Email>::iterator begin();
	std::vector<Email>::iterator end();
	void sortWho();
	void SortDate();
	void SortSubject();
	Email& operator[](size_t pos);


private:
	std::vector<Email>mail;
};
#endif /* MAILBOX*/