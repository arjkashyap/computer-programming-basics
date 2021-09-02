#include<iostream>
#include<queue>
#include<vector>

using namespace std;

/*
	CALL CENTER
	Imagine you have a call center with three levels of employees
	
	- respondent
	- manager 
	- director
	
	Incoming telephone calls must be allocated to a respondent
	who is free. If the respondent can't handle the call, he or 
	she must escalate the call to a manager. If the manager is 
	not free, then the call is escalated to director
	
	Design the Classes and Datastructures for this problem.
	
	Implement a method dispatchCall() which assings a call to 
	firt available employee.
	
*/


class Call
{

};


// handles the incoming calls and 
// assignes them to the caller 

class CallHandler
{
	private:
		const int LEVELS = 3;		// number of levels in the heirarchy

		const int DIRECTORS = 3;
		const int MANAGERS = 7;
		const int EMPLOYEE = 14;

	public: 
		static queue<Call> callQueue;
		static vector<vector<Employee>> employee;  
		
		// Gets an employee who is free for handling the call
		Employee getCallHandler();

		void dispatchCall(Call call){
			// assign the call according to who is free
			Employee emp = getCallHandler();
			if(emp != NULL){
				emp.assignCall(call);
			}else{
				cout << "Please wait your call is on hold";
				Call.standBy();
			}
		}

};

//employees working in the call center who'll recieve the call
// Abstract Base class
class Employee
{
	protected:
		int Rank;
		bool isOccupied = false;  // if the employee is occupied in a call or unavailabe

	public: 

		virtual void assignCall(Call call) = 0;   // assiugn a call to the employee

		virtual void resolveAndEndCall() = 0; 	// the employee was able to reolve the caller 
		virtual void resignAndEsclate() = 0; 	// employee could not resolve the call and the call is escalated

		// non abstract methods
		int getRank(){return Rank;}
		bool isFree() {return !isOccupied} 

};

class Director : public Employee
{
	public: 
		void assignCall() 
		{
			// call is assigned
		}
		 void resolveAndEndCall(){

		 }

		 void resignAndEsclate(){} 

};

class Manager : public Employee
{

	public: 
		void assignCall() 
		{
			// call is assigned
		}
		 void resolveAndEndCall(){

		 }

		 void resignAndEsclate(){} 
};

class Respondent : public Employee
{
	public: 
		void assignCall() 
		{
			// call is assigned
		}
		 void resolveAndEndCall(){

		 }

		 void resignAndEsclate(){} 
	
};


int main()
{
	
	
}