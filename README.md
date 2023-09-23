# C++ Person Class

This C++ code defines a `Person` class that represents an individual with attributes like ID, first name, last name, email, and phone number. It provides methods for interacting with these attributes, including sending emails and SMS messages.

## Introduction

The `Person` class is designed for managing individual person-related data within a C++ program. It encapsulates common attributes and operations associated with a person's information.

## Getting Started

To use the `Person` class in your C++ program, follow these steps:

1. **Copy the `Person` Class Definition:** Include the `Person` class definition in your code.

2. **Create `Person` Objects:** Instantiate `Person` objects by providing values for the ID, first name, last name, email, and phone number attributes.

3. **Interact with `Person` Objects:** Use the provided methods to interact with `Person` objects, including sending emails, SMS messages, or modifying attributes.

4. **Compile and Run:** Finally, compile and run your C++ program.

## Class Structure

The `Person` class has the following attributes:

- `int id` (read-only)
- `string firstName`
- `string lastName`
- `string email`
- `string phone`

## Methods

The `Person` class provides the following methods:

- `int getId()`
- `string getFirstName()`
- `void setFirstName(string fName)`
- `string getLastName()`
- `void setLastName(string lName)`
- `string getEmail()`
- `void setEmail(string eMail)`
- `string getPhone()`
- `void setPhone(string phoneNumber)`
- `void sendEmail(string subject, string body)`
- `void sendSms(string message)`
- `void print()`

## Example

Here's an example of how to create a `Person` object and use its methods:

```cpp
int main() {
    Person person1(1, "John", "Doe", "johndoe@example.com", "1234567890");
    person1.print();
    person1.sendEmail("Hello", "How are you?");
    person1.sendSms("How are you");
    return 0;
}
