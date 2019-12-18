#include "Email.h"

std::ostream& operator<<(std::ostream& stream, const Email& rhs)
{
	stream << "\nDisplaying Information." << std::endl;
	stream << "Name: " << rhs.who << std::endl;
	stream << "date: " << rhs.date << std::endl;
	stream << "subbject: " << rhs.subject << std::endl;
	return stream;
}

Email::Email(std::string name, std::string date, std::string subject) :who(name), date(date), subject(subject) {}


bool CompDateWhoSubject::operator()(const Email& lhs, const Email& rhs) const
{
	if (lhs.date < rhs.date) { return true; }
	else if (lhs.date == rhs.date)
	{
		if (lhs.who < rhs.who) { return true; }
		else if (lhs.who == rhs.who) {
			if (lhs.subject < rhs.subject) { return true; }
		}
	}

	return false;

}

bool CompWhoDateSubject::operator()(const Email& lhs, const Email& rhs) const
{
	if (lhs.who < rhs.who) { return true; }

	else if (lhs.who == rhs.who)
	{
		if (lhs.date < rhs.date) { return true; }
		else if (lhs.date == rhs.date) {
			if (lhs.subject < rhs.subject) return true;
		}
	}

	return false;

}

bool CompSubjectWhoDate::operator()(const Email& lhs, const Email& rhs) const
{
	if (lhs.subject < rhs.subject) { return true; }

	else if (lhs.subject == rhs.subject)
	{
		if (lhs.who < rhs.who) { return true; }

		else if (lhs.who == rhs.who) {
			if (lhs.date < rhs.date) return true;
		}
	}

	return false;
}
