#include <iostream>
#include <vector>

using namespace std;

class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:

        Student(string firstName, string lastName, int identification, vector<int>scores) : Person(firstName, lastName, identification){
            this->testScores = scores;
        }

        char calculate(){
            int total= 0;
            int average;
            for(int i = 0; i < int(this->testScores.size()); i++){
                total = total + testScores[i];
            }
            average = int(total/this->testScores.size());
            if(90 <= average && average <= 100){
                return 'O';
            }else if(80 <= average && average <= 90){
                return 'E';
            }else if(70 <= average && average <= 80){
                return 'A';
            }else if(55 <= average && average <= 70){
                return 'P';
            }else if(40 <= average && average <= 55){
                return 'D';
            }
            return 'T';
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
