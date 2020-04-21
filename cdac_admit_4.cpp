//============================================================================
// Name        : cdac_admit_4.cpp
// Author      : Aniruddha
// Version     : 4.0
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#define condition1   students[i].get_prno() == preferences[k].getPrefNo()
#define condition2   students[i].get_id() == preferences[k].getFormNo()
#define condition3   preferences[k].getCenterId() == capacities[r].getCenterId()
#define condition4   preferences[k].getCourseName() == capacities[r].getCourseName()
using namespace std;
class student {
private:
	int id;//form number
	string name;
	int rank_a,rank_b,rank_c;
	string degree;
	double degree_marks;
	string course_name;
	double payment;
	int reported;
	string prn;
	string centre_id;
	int prefno ;
public:
	student(){}
	student(int pid, string pname,int r_a,int r_b,int r_c, string pdegree,double marks, int pno,string csname,string cid,double p,int r,string rn) {
		id = pid;
		name = pname;
		rank_a=r_a;
		rank_b=r_b;
		rank_c=r_c;
		degree=pdegree;
		degree_marks=marks;
		course_name=csname;
		payment=p;
		reported=r;
		prn=rn;
		prefno=pno;
		centre_id=cid;
	}
	void set_id(int pid) {
		id = pid;
	}
	void set_name(const string& pname) {
		name = pname;
	}

	int get_id() {
		return id;
	}
	string& get_name() {
		return name;
	}
	void set_rank_a(int r_a) {
		rank_a = r_a;
	}
	void set_rank_b( int r_b) {
		rank_b = r_b;
	}
	void set_rank_c(int r_c) {
		rank_c = r_c;
	}
	int get_rank_a() {
		return rank_a;
	}
	int get_rank_b() {
		return rank_b;
	}
	int get_rank_c() {
		return rank_c;
	}
	void set_degree(string deg)
	{
		degree = deg;
	}
	string& get_degree() {
		return degree;
	}
	void set_degree_marks(double dmks)
	{
		degree_marks = dmks;
	}

	double get_degree_marks() {
		return degree_marks;
	}
	void set_course(string cname)
	{
		course_name = cname;

	}
	string& get_course() {
		return course_name;
	}
	double get_payment() {
		return payment;
	}
	void set_payment(double payment)
	{
		this->payment=payment;
	}
	int get_reported() {
		return reported;
	}
	void set_reported(int r)
	{
		reported = r;
	}
	void set_prn(string prn)
	{
		this->prn =prn;
	}
	string& get_prn() {
		return prn;
	}
	void set_prno(int prno)
	{
		this->prefno = prno;

	}
	int get_prno() {
		return prefno;
	}
	void set_cid(string cid)
	{
		centre_id =cid;
	}
	string& get_cid() {
		return centre_id;
	}
	void accept()
	{
		cout<<" Enter ID:"<<endl;
		cin>>id;
		cout<<" Enter name:"<<endl;
		cin>>name;
		cout<<" Enter rank_a:"<<endl;
		cin>>rank_a;
		cout<<" Enter rank_b:"<<endl;
		cin>>rank_b;
		cout<<" Enter rank_c:"<<endl;
		cin>>rank_c;
		cout<<" Enter degree:"<<endl;
		cin>>degree;
		cout<<" Enter degree_marks:"<<endl;
		cin>>degree_marks;
		cout<<" Enter coursename:"<<endl;
		cin>>course_name;
		cout<<" Enter payment:"<<endl;
		cin>>payment;
		cout<<" Enter reported:"<<endl;
		cin>>reported;
		cout<<" Enter prn:"<<endl;
		cin>>prn;
		cout<<" Enter prno:"<<endl;
		cin>>prefno;
		cout<<" Enter centre_id:"<<endl;
		cin>>centre_id;
	}
	void display() {
		cout <<id <<endl;
		cout<<name<<endl;
		cout<<rank_a<<" "<<rank_b<<" "<<rank_c<<endl;
		cout<<degree<<" "<<degree_marks<<endl;
		cout<<course_name;
		cout<<payment<<endl;
		cout<<reported<<endl;
		cout<<prn<<endl;
		cout<<prefno<<endl;
		cout<<centre_id<<endl;

	}
};
class centre{
	string id;
	string name;
	string address;
	string coordinator;
	string password;
public:
	centre(){}
	centre(string id,string name,string address,string coordinator,string pass)
	{
		this->id=id;
		this->name=name;
		this->address=address;
		this->coordinator=coordinator;
		this->password=pass;
	}
	string& get_cid() {
		return id;
	}
	string& get_name() {
		return name;
	}
	string& get_address() {
		return address;
	}
	string& get_password() {
		return password;
	}
	string& get_coordinator() {
		return coordinator;
	}
	void setCenterAddr( string centerAddr) {
		address= centerAddr;
	}
	void setCenterId( string centerid) {
		id=centerid;
	}
	void setCentername( string centername) {
		name= centername;
	}
	void setCentercoordinator( string centercoordinator) {
		coordinator = centercoordinator;
	}
	void setCenterpwd( string centerpass) {
		password= centerpass;
	}
	void display() {
		cout<<"center id : "<<id<<endl ;
		cout<<"center name : "<<name<<endl ;
		cout<<"center address : "<<address<<endl ;
		cout<<"center coordinator : "<<coordinator<<endl ;
		cout<<"center login password : "<<password<<endl ;
	}
};
class course {
private:
	int id;
	string name;
	string section;
	int fees;
public:
	course() {}
	course(int pid, const string& pname, const string& psection, int pfees) {
		id = pid;
		name = pname;
		section = psection;
		fees = pfees;
	}
	void set_id(int pid) {
		id = pid;
	}
	void set_name(const string& pname) {
		name = pname;
	}
	void set_section(const string& psection) {
		section = psection;
	}
	void set_fees(int pfees) {
		fees = pfees;
	}
	int get_id() {
		return id;
	}
	string& get_name() {
		return name;
	}
	string& get_section() {
		return section;
	}
	int get_fees() {
		return fees;
	}
	void display() {
		cout << id << ", " << name << ", " << section << ", " << fees << ", " << endl;
	}
};
class eligibility{

	string course_name;
	string degree;
	double qmarks;//qualifying marks
public:
	eligibility(){}
	eligibility(string name,string deg,double marks)
	{
		course_name = name;
		degree = deg;
		qmarks = marks;
	}
	string& get_coursename() {
		return course_name;
	}
	string& get_degree() {
		return degree;
	}
	double get_marks()
	{
		return qmarks;
	}
	void set_coursename(string cname)
	{
		course_name = cname;
	}
	void set_degree(string deg)
	{
		degree = deg;
	}
	void set_marks(double mks)
	{
		qmarks=mks;
	}
	void display()
	{
		cout<<"Course_name"<<course_name<<endl;
		cout<<"Degree"<<degree<<endl;
		cout<<"Qualifying marks "<<qmarks<<endl;

	}
};
class capacity{
	string center_id, course_name;
	int max_capacity,filled_capacity ;
public:
	capacity(){}
	const string& getCourseName() const {
		return course_name;
	}
	void setCourseName(const string &courseName) {
		course_name = courseName;
	}
	const string& getCenterId() {
		return center_id;
	}
	void setCenterId(const string &centerId) {
		center_id = centerId;
	}
	int get_max_capacity()
	{
		return  max_capacity;
	}
	int get_filled_capacity()
	{
		return  filled_capacity;
	}
	void set_max_capacity(int m)
	{
		max_capacity =m;
	}
	void set_filled_capacity(int f)
	{
		filled_capacity =f;
	}
	void display()
	{
		cout<<"Centre Id "<<center_id<<endl;
		cout<<"Course_name "<<course_name<<endl;
		cout<<"Max_capacity "<<max_capacity<<endl;
		cout<<"Filled_capacity "<<filled_capacity<<endl;
	}
};
class preference{
	int form_no, pref_no ;
	string course_name, center_id ;
public:
	preference() {}
	const string& getCenterId() {
		return center_id;
	}
	void setCenterId(const string &centerId) {
		center_id = centerId;
	}
	const string& getCourseName() const {
		return course_name;
	}
	void setCourseName(const string &courseName) {
		course_name = courseName;
	}
	int  getFormNo() {
		return form_no;
	}
	void set_formno(int formNo) {
		form_no = formNo;
	}
	int getPrefNo() {
		return pref_no;
	}
	void setPrefNo(int prefNo) {
		pref_no = prefNo;
	}

	void display() {
		cout<<"form no : "<<this->getFormNo()<<endl ;
		cout<<"pref no :  : "<<this->getPrefNo()<<endl ;
		cout<<"course name : "<<this->getCourseName()<<endl ;
		cout<<"cent_id : "<<this->getCenterId()<<endl ;
		cout<<"\n"<<endl ;
	}
};
vector <centre> centres;
vector<string> cid;//1
vector<string> coursename;//2
vector <int>  coursefees;//3 other vectors
vector<course> courses;
vector <string> degrees;
vector<student> students;
vector <eligibility> eligibities;
vector <capacity> capacities;
vector <preference> preferences;
vector <double> Qmarks;
void load_courses() {
	ifstream fp;
	string line;
	int i;
	fp.open("courses.csv");
	if(!fp) {
		perror("failed to  open file");
		return;
	}
	i=0;
	while(getline(fp, line)) {
		stringstream str(line);
		int id;
		string name, section;
		int fees;
		char ch;
		str >> id >> ch;
		getline(str, name, ',');
		str >> fees >> ch;
		getline(str, section, ',');
		course b(id, name, section, fees);
		courses.push_back(b);
		i++;
	}
	fp.close();
	cout << "courses loaded." << endl;
}
void load_centres()
{
	ifstream fp;
	string line;
	unsigned i;
	fp.open("centers.csv");
	if(!fp) {
		perror("failed to open courses file");
		return;
	}
	i=0;
	while(getline(fp, line)) {
		stringstream str(line);
		string id;
		string name, address,password,coordinator;
		getline(str, id,',');
		getline(str, name, ',');
		getline(str, address,',');
		getline(str, coordinator,',');
		getline(str, password,',');
		centre c(id, name, address,coordinator,password);
		centres.push_back(c);
		i++;
	}
	for(i=0;i<centres.size();i++)
	{
		cid.push_back(centres[i].get_cid());
	}
	fp.close();
	cout << "centers loaded." << endl;
}
void load_students()
{
	ifstream fp;
	string line;
	fp.open("students.csv");
	if(!fp) {
		perror("failed to open file");
		return;
	}
	while(getline(fp, line)) {
		stringstream str(line);
		int id;
		string name;
		int ra,rb,rc;
		string deg;
		double marks;
		string csname;
		string cid,prn;
		int payment,reported,prno;
		char ch;
		str >> id >> ch;
		getline(str, name, ',');
		str >> ra >> ch;
		str >> rb >> ch;
		str >> rc >> ch;
		getline(str, deg, ',');
		str>>marks>>ch;
		str >> prno>> ch;
		getline(str, csname, ',');
		getline(str, cid, ',');
		str >> payment >> ch;
		str >> reported >> ch;
		getline(str, prn, ',');
		student s(id, name,ra,rb,rc,deg,marks,prno,csname,cid,payment,reported,prn);
		students.push_back(s);
	}
}
void load_degrees()
{
	ifstream  file;
	file.open("degrees.txt",ios::in);
	string s;
	while(getline(file,s))
	{
		degrees.push_back(s);
	}
	cout<<"Degrees loaded"<<endl;
}
void load_eligibility()
{
	ifstream fp;
	string line;
	fp.open("eligibilities.csv");
	if(!fp) {
		perror("failed to open courses file");
		return;
	}
	while(getline(fp, line)) {
		stringstream str(line);

		string csname, degree;
		double marks;
		char ch;
		getline(str, csname,',');
		getline(str, degree, ',');
		str>>marks>>ch;
		eligibility e(csname,degree,marks);

		eligibities.push_back(e);
	}
	for(unsigned i=0;i<eligibities.size();i++)
	{
		Qmarks.push_back(eligibities[i].get_marks());
	}
}
void load_capacity()
{
	ifstream fp;
	string line;
	fp.open("capacities.csv");
	if(!fp) {
		perror("failed to open courses file");
		return;
	}
	while(getline(fp, line)) {
		stringstream str(line);
		string csname, cid;
		int m,f;
		char ch;
		getline(str, cid, ',');
		getline(str, csname,',');
		str>>m>>ch;
		str>>f>>ch;
		capacity c;
		c.setCourseName(csname);
		c.setCenterId(cid);
		c.set_max_capacity(m);
		c.set_filled_capacity(f);
		capacities.push_back(c);

	}

}
void load_preference()
{
	ifstream fp;
	string line;
	fp.open("preferences.csv");
	if(!fp) {
		perror("failed to open courses file");
		return;
	}
	while(getline(fp, line)) {
		stringstream str(line);
		string csname, cid;
		int m,f;
		char ch;
		str>>m>>ch;
		str>>f>>ch;
		getline(str, csname,',');
		getline(str, cid, ',');
		preference p;
		p.set_formno(m);
		p.setPrefNo(f);
		p.setCourseName(csname);
		p.setCenterId(cid);
		preferences.push_back(p);
	}
}
//student functions
void signin()//common for all users
{
	cout<<" -----Login------"<<endl;
	int uid;
	string pass;
	cout<<"Enter id"<<endl;
	cin>>uid;
	cout<<"Enter password"<<endl;
	cin>>pass;
	cout<<"You have  logged in successfully"<<endl;

}
void register_student() {
	ofstream fp;
	student s;
	s.accept();
	fp.open("students.csv",ios::app);
	if(!fp) {
		perror("failed to open students file");
		return;
	}
	fp << s.get_id() << "," << s.get_name() << ","
			<< s.get_rank_a() << "," << s.get_rank_b() << ","
			<< s.get_rank_c() << ","<<s.get_degree()<<","
			<< s.get_degree_marks() << "," << s.get_prno()<<","
			<< s.get_course() <<","<<s.get_cid()<<","
			<<s.get_payment()<<","<<s.get_reported()<<","<<s.get_prn()<<endl;

	fp.close();
	cout << "students saved." << endl;
}
void list_course_as_per_eligibilty()
{
	for(unsigned i=0;i<students.size();i++)
	{
		for (unsigned j=0 ; j<eligibities.size();j++ ){
			if (eligibities[j].get_degree()==students[i].get_degree()){
				cout<<eligibities[j].get_coursename() <<endl ;
			}
		}

	}
}

void update_payment()
{
	//int ch;//1 or 0
	for(unsigned i=0;i<students.size();i++)
	{
		/*cout<<"enter want to proceed for payment"<<endl;
		cin>>ch;*/
		if (students[i].get_cid() != "NA" /*and ch == 1*/)
		{
			students[i].set_payment(11800);
			students[i].set_reported(1);
		}

	}

}
void give_preferences()
{
	for(unsigned i =0;i<students.size();i++)
	{
		preference p;
		p.setCenterId(students[i].get_cid());
		p.setCourseName(students[i].get_course());
		p.setPrefNo(students[i].get_prno());
		p.set_formno(students[i].get_id());
		for (unsigned z=0 ; z < eligibities.size(); z++ ){
			if (p.getCourseName()==eligibities[z].get_coursename()){
				if (eligibities[z].get_degree()==students[i].get_degree()){
					preferences.push_back(p) ;
				}
			}
		}
	}
	ofstream file;
	file.open("preferences.csv");
	for(unsigned i=0;i<preferences.size();i++)
	{
		file<<preferences[i].getFormNo()<<","
				<<preferences[i].getPrefNo()<<","<<
				preferences[i].getCourseName()<<","<<
				preferences[i].getCenterId()<<endl;

	}

}
void list_centres()
{
	for(unsigned i =0;i<students.size();i++)
	{
		for(unsigned j=0;j<centres.size();j++)
		{
			if(students[i].get_cid()==centres[j].get_cid())
			{
				cout<<centres[j].get_name()<<endl;
			}
		}
	}

}
void allocated_centres_courses(){
	for(unsigned i =0;i<students.size();i++)
	{
		cout<<"allocated center : "<<students[i].get_cid()<<"\t\t"
				<<"allocated course : "<<students[i].get_course()<<endl ;
	}
}
//admin functions
void list_course_eligibility()
{
	for (size_t i=0 ; i<eligibities.size() ; i++ ){
		cout<<eligibities[i].get_coursename()<<"\t"
				<<eligibities[i].get_degree()
				<<eligibities[i].get_marks()<<endl ;

	}
}
void list_centre_capacity()
{
	for (size_t i=0 ; i<capacities.size() ; i++ ){
		cout<<capacities[i].getCenterId()<<"\t"
				<<capacities[i].getCourseName()<<"\t"
				<<capacities[i].get_max_capacity()<<endl ;
	}

}
void list_students()
{
	for(unsigned i=0;i<students.size();i++)
	{
		cout<<"  Form no. :"<<students[i].get_id()<<endl;
		cout<<"Name :"<<students[i].get_name()<<endl;
	}

}
void update_rank()
{
	int formno;
	int ra,rb,rc;
	cout<<"Enter the Formno."<<endl;
	cin>>formno;
	for(unsigned i=0;i<students.size();i++)
	{
		if(students[i].get_id()==formno)
		{
			cout<<"Updated rank_a"<<endl;
			cin>>ra;
			cout<<"Updated rank_b"<<endl;
			cin>>rb;
			cout<<"Updated rank_c"<<endl;
			cin>>rc;
			students[i].set_rank_a(ra);
			students[i].set_rank_b(rb);
			students[i].set_rank_c(rc);

		}

	}
}
void list_allocated_students()
{
	for (size_t i=0 ; i<students.size() ; i++ ){
		if (students[i].get_cid() != "NA"){
			if (students[i].get_payment() != 0){
				cout<<students[i].get_id()<<"\t"
						<<students[i].get_name()<<"\t"
						<<students[i].get_cid()<<"\t"
						<<students[i].get_course()<<endl ;
			}
		}
	}

}
void list_paid_students()
{
	for (size_t i=0 ; i<students.size() ; i++ )
	{
		if(students[i].get_payment()== 11800)
		{
			students[i].display();
		}
	}

}
void list_reported()
{
	for(unsigned i =0;i<students.size();i++)
	{
		if(students[i].get_reported() == 1)
		{
			students[i].display();
		}

	}
}
void generate_prn()
{
	for(unsigned i = 0;i<students.size();i++)
	{   if(students[i].get_payment()== 11800)
	{
		string s;
		s= students[i].get_cid()+"_"+students[i].get_course()+"_"+to_string(students[i].get_id());
		students[i].set_prn(s);

	}
	}
}
void list_admit_student()
{
	for(unsigned i =0;i<students.size();i++)
	{
		if(students[i].get_cid()!="NA" && students[i].get_course()!="NA")
		{
			students[i].display();
		}
	}
}
bool sort_by_A (student a,student b)
{
	int rank_1 = a.get_rank_a() ;
	int rank_2 = b.get_rank_a() ;
	return (rank_1 < rank_2);
}
bool sort_by_B (student a,student b)
{
	int rank_1 = a.get_rank_b() ;
	int rank_2 = b.get_rank_b() ;
	return (rank_1 < rank_2);

}
bool sort_by_C (student a,student b)
{
	int rank_1 = a.get_rank_c() ;
	int rank_2 = b.get_rank_c() ;
	return (rank_1 < rank_2);
}
void round_1_allocation() {
	for(int n=0;n<10;n++)
	{
		for(unsigned i=0;i<students.size();i++)
		{
			for(unsigned k =0;k<preferences.size();k++)
			{

				for(unsigned j =0;j<courses.size();j++)
				{
					if(condition2 && preferences[k].getCourseName() == courses[j].get_name())
					{
						if(courses[j].get_section() == "A")
						{
							sort(students.begin(),students.end(),sort_by_A);


							students[i].set_course("PG_DGI");
							for(unsigned r =0;r<capacities.size();r++)
							{
								if(condition3 && condition4 && preferences[k].getPrefNo() == (n+1))
								{
									students[i].set_cid(preferences[k].getCenterId());
									students[i].set_prno(n+1);
									if(capacities[r].get_filled_capacity()< capacities[r].get_max_capacity())
									{
										capacities[r].set_filled_capacity(1+capacities[r].get_filled_capacity());
									}
								}
							}




						}
						if(courses[j].get_section()== "C")
						{
							sort(students.begin(),students.end(),sort_by_C);

							students[i].set_course("PG_DESD");
							for(unsigned r =0;r<capacities.size();r++)
							{
								if(condition3 && condition4 && preferences[k].getPrefNo() == (n+1))
								{
									students[i].set_prno(n+1);
									students[i].set_cid(preferences[k].getCenterId());
									if(capacities[r].get_filled_capacity()< capacities[r].get_max_capacity())
									{
										capacities[r].set_filled_capacity(1+capacities[r].get_filled_capacity());
									}
								}
							}

						}
						if(courses[j].get_section() == "B")
						{
							sort(students.begin(),students.end(),sort_by_B);

							students[i].set_course(courses[j].get_name());


							for(unsigned r =0;r<capacities.size();r++)
							{
								if(condition3 && condition4 && preferences[k].getPrefNo() == (n+1))
								{
									students[i].set_prno(n+1);
									students[i].set_cid(preferences[k].getCenterId());
									if(capacities[r].get_filled_capacity()< capacities[r].get_max_capacity())
									{
										capacities[r].set_filled_capacity(1+capacities[r].get_filled_capacity());
									}

								}
							}
						}
					}
				}
			}
		}

	}
}
void round_2_allocation()
{
	for (size_t i=0 ; i<students.size(); i++ ){
		if (students[i].get_cid()!="NA"){
			if (students[i].get_payment()!=11800)
			{

				students[i].set_reported(0) ;
				students[i].set_prn("NA") ;

				for (size_t j=0 ; j<capacities.size(); j++ ){
					if (students[i].get_cid()==capacities[j].getCenterId()){
						if (students[i].get_course()==capacities[j].getCourseName()){

							int filled  = capacities[j].get_filled_capacity() ;

							filled-- ;
							capacities[j].set_filled_capacity(filled) ;
						}
					}
				}
			}

		}

	}
	round_1_allocation();

}
void round_csv_students()
{
	ofstream out ;
	out.open("students_updated.csv") ;
	for (size_t i=0 ; i<students.size() ; i++ ){
		out<<students[i].get_id() <<"," ;
		out<<students[i].get_name() <<"," ;
		out<<students[i].get_rank_a()<<"," ;
		out<<students[i].get_rank_b()<<"," ;
		out<<students[i].get_rank_c()<<"," ;
		out<<students[i].get_degree()<<",";
		out<<students[i].get_degree_marks()<<"," ;
		out<<students[i].get_prno()<<"," ;
		out<<students[i].get_course()<<",";
		out<<students[i].get_cid()<<"," ;
		out<<students[i].get_payment()<<",";
		out<<students[i].get_reported()<<",";
		out<<students[i].get_prn()<<endl ;
	}
	out.close()  ;
}

void round_csv_capacity()
{

	ofstream out ;
	out.open("capacity_updated.csv") ;

	for (size_t i=0 ; i<capacities.size() ; i++ ){
		out<<capacities[i].getCenterId() <<"," ;
		out<<capacities[i].getCourseName() <<"," ;
		out<<capacities[i].get_max_capacity()<<"," ;
		out<<capacities[i].get_filled_capacity()<<endl ;
	}
	out.close()  ;
}
void final_csv_students()
{
	ofstream out ;
	out.open("students_final.csv") ;
	for (size_t i=0 ; i<students.size() ; i++ ){
		out<<students[i].get_id() <<"," ;
		out<<students[i].get_name() <<"," ;
		out<<students[i].get_rank_a()<<"," ;
		out<<students[i].get_rank_b()<<"," ;
		out<<students[i].get_rank_c()<<"," ;
		out<<students[i].get_degree()<<",";
		out<<students[i].get_degree_marks()<<"," ;
		out<<students[i].get_prno()<<"," ;
		out<<students[i].get_course()<<",";
		out<<students[i].get_cid()<<"," ;
		out<<students[i].get_payment()<<",";
		out<<students[i].get_reported()<<",";
		out<<students[i].get_prn()<<endl ;
	}
	out.close()  ;
}
void final_csv_capacity()
{

	ofstream out ;
	out.open("capacity_final.csv") ;

	for (size_t i=0 ; i<capacities.size() ; i++ ){
		out<<capacities[i].getCenterId() <<"," ;
		out<<capacities[i].getCourseName() <<"," ;
		out<<capacities[i].get_max_capacity()<<"," ;
		out<<capacities[i].get_filled_capacity()<<endl ;
	}
	out.close()  ;
}
//centre coordinator functions
void list_students_centrewise()
{
	for(unsigned i =0;i<centres.size();i++)
	{
		for(unsigned j =0;j<students.size();j++)
		{
			if (students[j].get_cid()==centres[i].get_cid()){
				if (students[j].get_payment()!= 0){
					cout<<students[j].get_id() <<"\t\t"
							<<students[j].get_name()<<"\t\t"
							<<students[j].get_course()<<"\t\t"
							<<students[j].get_cid()<<endl ;
				}
			}

		}
	}


}
void list_courses_centrewise()
{
	for(unsigned k=0;k<capacities.size();k++)
	{
		cout<<capacities[k].getCenterId()<<" : "
				<<capacities[k].getCourseName()<<endl;
	}



}
void report_status()
{
	cout<<"Reported students :"<<endl;
	for(unsigned i=0;i<centres.size();i++)
	{
		for(unsigned j=0;j<students.size();j++){
			if(students[j].get_cid()==centres[i].get_cid()){
				if(students[j].get_reported() !=0)
				{
					cout<<students[j].get_name()<<endl;
				}
			}
		}
	}
}
void list_prn()
{
	for(unsigned i=0;i<centres.size();i++)
	{
		for(unsigned j=0;j<students.size();j++){
			if(students[j].get_cid()==centres[i].get_cid()){
				if(students[i].get_payment() !=0)
				{
					cout<<students[j].get_name()<<endl;
					cout<<students[j].get_id()<<endl;
					cout<<students[j].get_prn()<<endl;
				}
			}
		}
	}

}
void load_data()
{
	load_courses();
	load_centres();
	load_degrees();
	load_eligibility();
	load_capacity();
	load_preference();
	load_students();
}
void student_menu()
{
	int schoice;
	signin();
	do{
		cout<<"Enter the schoice"<<endl;
		cin>>schoice;
		switch(schoice){
		case 1:
			register_student();
			break;
		case 2:
			list_course_as_per_eligibilty();
		case 3:
			list_centres();
			break;
		case 4:
			give_preferences();
			break;
		case 5:
			allocated_centres_courses();
			break;
		case 6:
			update_payment();
			break;
		}
	}while(schoice!=0);

}
void admin_menu()
{

	int ch;
	signin();
	do{
		cout<<"Enter the admin choice"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			//round 1
			round_1_allocation();
			list_allocated_students();
			update_payment();
			list_paid_students();
			generate_prn();
			list_reported();
			round_csv_students();
			round_csv_capacity();

			break;
		case 2:
			// round 2
			round_2_allocation();
			list_allocated_students();
			update_payment();
			list_paid_students();
			generate_prn();
			list_reported();
			round_csv_students();
			round_csv_capacity();
			break;
		case 3:
			list_course_eligibility();
			break;
		case 4:
			list_centre_capacity();
			break;
		case 5:
			list_students();
			break;

		case 6:
			update_rank();
			break;
		case 7:
			list_admit_student();
			break;
		}
	}while(ch!=0);

}
void center_menu()
{
	int cchoice;
	signin();
	do{
		cout<<"Enter the cchoice"<<endl;
		cin>>cchoice;
		switch(cchoice){
		case 1:
			list_students_centrewise();
			break;
		case 2:
			list_prn();

			break;
		case 3:
			report_status();
			break;

		case 4:
			list_courses_centrewise();


			break;

		}
	}while(cchoice!=0);

}
int main(){
	load_data();
	int choice;//students choice
	do{
		cout<<"enter the choice"<<endl;
		cin>>choice;

		switch(choice)
		{
		case 1:
			student_menu();
			break;
		case 2:
			admin_menu();
			break;
		case 3:
			center_menu();
			break;

		}
	}while(choice!=0);


	return 0;
}

















































