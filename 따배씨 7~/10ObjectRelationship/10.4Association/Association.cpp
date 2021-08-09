#include <iostream>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Doctor;
//Association 관계에선 전방선언이 필요해짐
//파일이 거대해지면 헤더파일에 전방선언을 몰아넣음
//전방선언으론 멤버에 무엇이 있는지 알 수 없음
//이럴 땐 함수를 밖으로 빼서 다른 클래스의 뒤에 배치한다

class Patient
{
    private:
        string m_name;
        vector<Doctor*> m_doctors;

    public:
        Patient(string name_in)
            : m_name(name_in)
        {}

        void addDoctor(Doctor* new_doctor)
        {
            m_doctors.push_back(new_doctor);
        }

        void meetDoctors();

        friend class Doctor;
};

class Doctor
{
    private:
        string m_name;
        vector<Patient*> m_patients;

    public:
        Doctor(string name_in)
            : m_name(name_in)
        {}

        void addPatient(Patient * new_patient)
        {
            m_patients.push_back(new_patient);
        }

        void meetPatients()
        {
            for(auto & element : m_patients)
            {
                cout << "Meet patients : " << element->m_name << endl;
            }
        }

        friend class Patient;
};

void Patient::meetDoctors()
{
    for(auto & element : m_doctors)
    {
        cout << "Meet doctor : " << element->m_name << endl;
    }
}

int main()
{
    Patient *p1 = new Patient("Jack");
    Patient *p2 = new Patient("Jack");
    Patient *p3 = new Patient("Jack");

    Doctor *d1 = new Doctor("Doctor K");
    Doctor *d2 = new Doctor("Doctor L");

    p1->addDoctor(d1);
    d1->addPatient(p1);

    p2->addDoctor(d2);
    d2->addPatient(p2);

    p2->addDoctor(d1);
    d1->addPatient(p2);

    //patients meet doctors
    p1->meetDoctors();

    //doctors meet patients
    d1->meetPatients();

    //deletes
    delete p1;
    delete p2;
    delete p3;

    delete d1;
    delete d2;

    return 0;
}