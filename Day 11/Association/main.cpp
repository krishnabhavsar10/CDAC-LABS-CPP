#include "Student.h"
#include "Address.h"

int main()
{

    Address addr("CDAC ACTS", "PUNE", "INDIA");

    Student student("Krishna", 79, &addr);

    student.display();

    return 0;
}
