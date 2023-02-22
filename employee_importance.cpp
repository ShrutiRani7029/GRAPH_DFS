/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
 int sum=0;///globally defined
 void addsum(vector<Employee*>employees,int id)
 {
     for(int i=0;i<employees.size();i++)
     {
         if(employees[i]->id==id)
         {
             sum+=employees[i]->importance;
             if(employees[i]->subordinates.size()==0)return;
             for(int j=0;j<employees[i]->subordinates.size();j++)
             {
                 addsum(employees,employees[i]->subordinates[j]);
             }
         }
     }
 }
    int getImportance(vector<Employee*> employees, int id) {
        addsum(employees,id);
        return sum;
    }
};
