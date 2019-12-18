#include <iostream>
#include "MailBox.h"
#include "Email.h"



void Show(const Email& email) {

	std::cout << email << "\n";

}



int main() {

	Email a("Anders", "2002-02-28", "Lab 1");

	Email b("Anders", "2002-02-28", "Lab 2");

	Email c("Jonas", "2002-03-01", " Lab 3");

	Email d("Pipi", "2001-04-05", " Lab 4");

	Email e("Kalle", "2018-12-14", " Lab 5");



	MailBox box(3);


	box[0] = a;

	box[1] = b;

	box[2] = c;
	box.push(d);

	box.push(e);








	box.sortWho();

	std::for_each(box.begin(), box.end(), Show);





	//box.SortDate();

	//std::for_each(box.begin(), box.end(), Show);





	//box.SortSubject();

	//std::for_each(box.begin(), box.end(), Show);




	system("pause");
	return 0;

}