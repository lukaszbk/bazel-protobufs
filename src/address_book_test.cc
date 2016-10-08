#include "src/address_book.pb.h"
#include "src/person.pb.h"

using ::src::AddressBook;
using ::src::Person;

using PhoneNumber = Person::PhoneNumber;

int main() {
  AddressBook address_book;
  Person* person = address_book.add_person();
  person->set_name("Bajtazar");
  person->set_id(42);
  person->set_email("bajtazar@gmail.com");
  PhoneNumber* phone = person->add_phone();
  phone->set_number("(555) 123-4567");
  phone->set_type(Person::MOBILE);
  return !(address_book.person(0).phone(0).type() == Person::MOBILE);
}
