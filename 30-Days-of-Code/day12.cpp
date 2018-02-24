class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
            Student(string fName, string lName, int sID, vector<int> sScores): Person(fName, lName, sID){
                this->testScores = sScores;
            }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
            string calculate(){
                int average = 0;
                for(int i = 0; i < testScores.size(); i++){
                    average += testScores[i];
                }
                average /= testScores.size();
                if(average >= 90 and average <= 100) return "O";
                else if(average >= 80) return "E";
                else if(average >= 70) return "A";
                else if(average >= 55) return "P";
                else if(average >= 40) return "D";
                else return "T";
                
            }
};