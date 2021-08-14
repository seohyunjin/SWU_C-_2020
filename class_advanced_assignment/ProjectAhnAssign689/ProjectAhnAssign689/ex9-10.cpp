#define _CRT_SECURE_NO_WARNINGS  //strcpy()를 <cstring>헤더를 추가해도 오류생길때 실행시키려고 작성

#include<iostream>
#include<cstring>
using namespace std;


class Person {
	int id;
public:
	Person(int id = 0) {
		this->id = id;
	}
	virtual ~Person() {
		cout << "id = " << id << endl;
	}

};

class Student :public Person {
	char* name;
public:
	Student(int id, const char* name) : Person(id) { // 생성자
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name); 
	}

	/*
	Student(const Student& student) { // 복사생성자
		int len = strlen(student.name);
		this->name = new char[len + 1];
		strcpy(this->name, student.name);
	}*/
	


	virtual ~Student() {
		cout << "name = " << name << endl;
		delete[]name;
	}

};

int main() {
	Person* p = new Student(10, "손연재");
	delete p;
}