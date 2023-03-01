#include <string>

struct Teacher {
  std::string name;
};

class Lesson {
  Teacher t;

  virtual Lesson* Create() {
    return new Lesson;
  }
};

class Lecture: Lesson {
  Teacher t{"Redkozubov"};

  Lecture* Create() override {
    return new Lecture;
  }
};

class Seminar: Lesson {
  Teacher t{"Zagramamont"};

  Seminar* Create() override {
    return new Seminar;
  }
};
