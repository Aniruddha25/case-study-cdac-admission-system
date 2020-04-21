
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
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
vector<course> courses;
vector <string> degrees;
vector<student> students;
vector <eligibility> eligibities;
vector <capacity> capacities;
vector <preference> preferences;
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
	unsigned  i;
	student s;
	s.accept();
	students.push_back(s);
	fp.open("students.csv");
	if(!fp) {
		perror("failed to open students file");
		return;
	}

	for(i=0;i<students.size();i++)
	{
		fp << students[i].get_id() << "," << students[i].get_name() << ","
				<< students[i].get_rank_a() << "," << students[i].get_rank_b() << ","
				<< students[i].get_rank_c() << ","<<students[i].get_degree()<<","
				<< students[i].get_degree_marks() << "," << students[i].get_prno()<<","
				<< students[i].get_course() <<","<<students[i].get_cid()<<","
				<<students[i].get_payment()<<","<<students[i].get_reported()<<","<<students[i].get_prn()<<endl;
	}
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
	for(unsigned i=0;i<students.size();i++){

		if (students[i].get_cid() != "NA")
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
		p.display() ;

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
	{
		string s;
		s= students[i].get_cid()+"_"+students[i].get_course()+"_"+to_string(students[i].get_id());
		students[i].set_prn(s);
		cout<<students[i].get_prn()<<endl;
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
void first_round() {
	vector<student>::iterator STU = students.begin() ;
	vector<preference>::iterator PREF = preferences.begin() ;
	vector<capacity>::iterator CAPACITY = capacities.begin() ;
	vector<course>::iterator COURSES = courses.begin() ;
	vector<eligibility>::iterator ELIGIBLE = eligibities.begin() ;

	int counter =0 ;
	int cycle = 1 ;
	while(cycle<6){
		// sort by ranking of A
		sort(students.begin(),students.end(),sort_by_A) ;
		STU = students.begin() ;
		while ((STU != students.end())) {
			if (STU->get_rank_a()!=-1){
				if (STU->get_cid()=="NA") {
					PREF = preferences.begin() ;
					while(PREF != preferences.end()){
						if (PREF->getPrefNo()== cycle){
							if(STU->get_id()==PREF->getFormNo()){
								ELIGIBLE = eligibities.begin() ;
								while(ELIGIBLE != eligibities.end()){
									if (ELIGIBLE->get_coursename()==PREF->getCourseName()){
										if (ELIGIBLE->get_degree()==STU->get_degree()){
											COURSES = courses.begin() ;
											while(COURSES != courses.end()){
												if (COURSES->get_section()=="A") {
													if (PREF->getCourseName()==COURSES->get_name()){
														CAPACITY = capacities.begin() ;
														while (CAPACITY != capacities.end()){
															if (PREF->getCenterId()==CAPACITY->getCenterId()){
																if (PREF->getCourseName()==CAPACITY->getCourseName()){
																	if (CAPACITY->get_filled_capacity() != CAPACITY->get_max_capacity()){


																		counter++ ;
																		STU->set_prno(PREF->getPrefNo()) ;
																		STU->set_course(PREF->getCourseName()) ;
																		STU->set_cid(CAPACITY->getCenterId()) ;
																		CAPACITY->set_filled_capacity(1+CAPACITY->get_filled_capacity()) ;

																	}
																}
															}
															CAPACITY++ ;
														}
													}
												}
												COURSES++ ;
											}
										}
									}
									ELIGIBLE++ ;
								}
							}
						}
						PREF++ ;
					}
				}
			}
			STU++ ;
		}

		// sort by ranking of B
		sort(students.begin(),students.end(),sort_by_B) ;
		STU = students.begin() ;
		while (STU != students.end()) {
			if (STU->get_rank_b()!=-1){
				if (STU->get_cid()=="NA") {
					PREF = preferences.begin() ;
					while(PREF != preferences.end()){
						if (PREF->getPrefNo()==cycle){
							if(STU->get_id()==PREF->getFormNo()){
								ELIGIBLE = eligibities.begin() ;
								while(ELIGIBLE != eligibities.end()){
									if (ELIGIBLE->get_coursename()==PREF->getCourseName()){
										if (ELIGIBLE->get_degree()==STU->get_degree()){
											COURSES = courses.begin() ;
											while(COURSES != courses.end()){
												if (COURSES->get_section()=="B") {
													if (PREF->getCourseName()==COURSES->get_name()){
														CAPACITY = capacities.begin() ;
														while (CAPACITY != capacities.end()){
															if (PREF->getCenterId()==CAPACITY->getCenterId()){
																if (PREF->getCourseName()==CAPACITY->getCourseName()){
																	if (CAPACITY->get_filled_capacity() != CAPACITY->get_max_capacity()){



																		counter++ ;
																		STU->set_prno(PREF->getPrefNo()) ;
																		STU->set_course(PREF->getCourseName()) ;
																		STU->set_cid(CAPACITY->getCenterId()) ;

																		CAPACITY->set_filled_capacity(1+CAPACITY->get_filled_capacity()) ;

																	}
																}
															}
															CAPACITY++ ;
														}
													}
												}
												COURSES++ ;
											}
										}
									}
									ELIGIBLE++ ;
								}
							}
						}
						PREF++ ;
					}
				}
			}
			STU++ ;
		}
		// sort by ranking of c
		sort(students.begin(),students.end(),sort_by_C) ;
		STU = students.begin() ;
		while (STU != students.end()) {
			if (STU->get_rank_c()!=-1){
				if (STU->get_cid()=="NA") {
					PREF = preferences.begin() ;
					while(PREF != preferences.end()){
						if (PREF->getPrefNo()== cycle){
							if(STU->get_id()==PREF->getFormNo()){
								ELIGIBLE = eligibities.begin() ;
								while(ELIGIBLE != eligibities.end()){
									if (ELIGIBLE->get_coursename()==PREF->getCourseName()){
										if (ELIGIBLE->get_degree()==STU->get_degree()){
											COURSES = courses.begin() ;
											while(COURSES != courses.end()){
												if (COURSES->get_section()=="C") {
													if (PREF->getCourseName()==COURSES->get_name()){
														CAPACITY = capacities.begin() ;
														while (CAPACITY != capacities.end()){
															if (PREF->getCenterId()==CAPACITY->getCenterId()){
																if (PREF->getCourseName()==CAPACITY->getCourseName()){
																	if (CAPACITY->get_filled_capacity() != CAPACITY->get_max_capacity()){

																		counter++ ;
																		STU->set_prno(PREF->getPrefNo()) ;
																		STU->set_course(PREF->getCourseName()) ;
																		STU->set_cid(CAPACITY->getCenterId()) ;

																		CAPACITY->set_filled_capacity(1+CAPACITY->get_filled_capacity()) ;
																		//															STU->display() ;
																	}
																}
															}
															CAPACITY++ ;
														}
													}
												}
												COURSES++ ;
											}
										}
									}
									ELIGIBLE++ ;
								}
							}
						}
						PREF++ ;
					}
				}
			}
			STU++ ;
		}



		cycle++ ;

	}


}
void second_round() {

	for (size_t i=0 ; i<students.size(); i++ ){
		if (students[i].get_cid()!="NA"){
			if (students[i].get_payment()!=11800){
				students[i].set_payment(0);
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
	first_round();



}
void round_1_csv_students()
{

	ofstream out ;
	out.open("students_r1.csv") ;

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

void round_1_csv_capacity()
{

	ofstream out ;
	out.open("capacity_r1.csv") ;

	for (size_t i=0 ; i<capacities.size() ; i++ ){
		out<<capacities[i].getCenterId() <<"," ;
		out<<capacities[i].getCourseName() <<"," ;
		out<<capacities[i].get_max_capacity()<<"," ;
		out<<capacities[i].get_filled_capacity()<<endl ;
	}
	out.close()  ;
}
void round_2_csv_students()
{

	ofstream out ;
	out.open("students_r2.csv") ;
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

void round_2_csv_capacity()
{

	ofstream out ;
	out.open("capacity_r2.csv") ;

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
	for(unsigned j=0;capacities.size();j++)
	{


		cout<<capacities[j].getCenterId() <<'\t'<<capacities[j].getCourseName()<<endl;


	}

}
void report_status()
{
	for(unsigned i=0;i<centres.size();i++)
	{
		for(unsigned j=0;j<students.size();j++){
			if(students[j].get_cid()==centres[i].get_cid()){
				if(students[j].get_reported() !=0)
				{
					cout<<students[j].get_name()<<"\t"<<"Reported"<<endl;
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
	do{
		cout<<"Enter the choice"<<endl;
		cin>>schoice;
		switch(schoice){
		case 1:
			register_student();
			break;
		case 2:
			signin();
			break;
		case 3:
			list_course_as_per_eligibilty();
		case 4:
			list_centres();
			break;
		case 5:
			give_preferences();
			break;
		case 6:
			allocated_centres_courses();
			break;
		case 7:
			update_payment();
			break;
		}
	}while(schoice!=0);

}
void admin_menu()
{
	int ch;
	do{
		cout<<"Enter the choice"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			first_round();
			round_1_csv_students();
			round_1_csv_capacity();
			break;
		case 2:
			second_round();
			round_2_csv_students();
			round_2_csv_capacity();
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
			list_allocated_students();
			break;
		case 7:
			list_paid_students();
			break;
		case 8:
			update_rank();
			break;
		case 9:
			list_reported();
			break;
		case 10:
			generate_prn();
			break;
		case 11:
			list_admit_student();
			break;
		}
	}while(ch!=0);

}
void center_menu()
{
	int ch;
	do{
		cout<<"Enter the choice"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			list_students_centrewise();
			break;
		case 2:
			list_courses_centrewise();
			break;
		case 3:
			report_status();
			break;
		case 4:
			list_prn();
			break;

		}

	}while(ch!=0);
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













































