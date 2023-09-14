class studnt{

    private:
//    string name;
   int roll_no;
   int makrks;
   char grade;
   int phone;

   public:
   char class_student;



};
class teach{

    private:
    int id_no;
   int Salary;
   int phone;

   public:
   char class_tech;

   char setstu(char c){

     studnt().class_student=c;
   };

   char getstu(){

     return studnt().class_student;
   };



};