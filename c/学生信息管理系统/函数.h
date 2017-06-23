struct obtain_class
{
	int class_id;
	char class_name[10];
	int study_grades;
	int exam_grades;
	int pr_grades;
	int all_grades;
};
struct students
{
	char students_class[10];
	int students_id;
	char students_name[10];
	char students_sex[2];
	int students_age;
	struct obtain_class first;
	students *next;


};
struct students *students_creat(struct students *h);
students *delete_students(students *h);
void select(struct students *h);
void insert(students *h);
void cout(students *x);
void change(students *h);
void showall(students *h);
void wquit(students *h);


