class Student
{
public:
    Student();                        
    Student(int n, const char* nam, char s); 
    void display();
    void set_value(int n, const char* nam, char s);
private:
    int num;
    char name[20];
    char sex;
};