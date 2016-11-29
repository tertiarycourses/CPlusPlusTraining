#include <cstdio>

struct Employee {
    int id;
    const char *name;
    const char *role;
};

int main() {
    
    Employee john;
    
    john.id = 123456;
    john.name = "Alfred Ang";
    john.role ="engineer";
    
    printf("John ID is %d\n",john.id);
    printf("John full name is %s\n",john.name);
    printf("Hohn role is %s\n",john.role);
    
//    Employee joe = { 42, "Alfred", "Trainer" };
//    
//    printf("%s is the %s and has id %d\n",
//           joe.name, joe.role, joe.id);
    
    return 0;
}
