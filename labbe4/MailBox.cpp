#include "MailBox.h"
#include <algorithm>


MailBox::MailBox(size_t size) :mail(size)
{
}

void MailBox::push(const Email& email)
{
	mail.push_back(email);
}

std::vector<Email>::iterator MailBox::begin()
{
	return mail.begin();
}

std::vector<Email>::iterator MailBox::end()
{
	return mail.end();
}


void MailBox::sortWho()
{

	std::sort(mail.begin(), mail.end(), CompWhoDateSubject());

}

void MailBox::SortDate()
{
	std::sort(mail.begin(), mail.end(), CompDateWhoSubject());
}

void MailBox::SortSubject()
{
	std::sort(mail.begin(), mail.end(), CompSubjectWhoDate());
}

Email& MailBox::operator[](size_t pos)
{
	return mail[pos];
}
