#include <iostream>
#include <string>
using namespace std;

class Patient {
public:
    int patientId;
    string patientName;
    int age;
    string disease;
    string bloodGroup;
    int doctorId;
    
    Patient(int pid, string pname, int ageVal, string dis, string bg, int did) {
        patientId = pid;
        patientName = pname;
        age = ageVal;
        disease = dis;
        bloodGroup = bg;
        doctorId = did;
    }
};

class Doctor {
public:
    int doctorId;
    string doctorName;
    string specialization;
    
    Doctor(int did, string dname, string spec) {
        doctorId = did;
        doctorName = dname;
        specialization = spec;
    }
};

class Treatment : public Patient, public Doctor {
public:
    Treatment(int pid, string pname, int ageVal, string dis, string bg, int did,
              int ddid, string dname, string spec)
        : Patient(pid, pname, ageVal, dis, bg, did), Doctor(ddid, dname, spec) {}
    
    void search(int pid, int did) {
        if (patientId == pid && Patient::doctorId == did) {
            cout << "PatientId: " << patientId << endl;
            cout << "PatientName: " << patientName << endl;
            cout << "DoctorId: " << Patient::doctorId << endl;
            cout << "DoctorName: " << doctorName << endl;
        } else {
            cout << "No matching record found." << endl;
        }
    }
    
    void search(int did) {
        if (Doctor::doctorId == did) {
            cout << "PatientId: " << patientId << endl;
            cout << "PatientName: " << patientName << endl;
            cout << "DoctorId: " << Doctor::doctorId << endl;
            cout << "DoctorName: " << doctorName << endl;
        }
    }
    
    static void searchByPatientName(Treatment t[], int size, string pname) {
        for (int i = 0; i < size; i++) {
            if (t[i].patientName == pname) {
                cout << "PatientId: " << t[i].patientId << endl;
                cout << "PatientName: " << t[i].patientName << endl;
                cout << "DoctorId: " << t[i].Doctor::doctorId << endl;
                cout << "DoctorName: " << t[i].doctorName << endl;
                break;
            }
        }
    }
};

int main() {
    int num;
    cout << "Enter Number of Treatments: ";
    cin >> num;
    
    Treatment* treatments[num];
    
    for (int i = 0; i < num; i++) {
        int pid, age, did, ddid;
        string pname, disease, bg, dname, spec;
        
        cout << "\nTreatment " << (i + 1) << "\n";
        cout << "Enter PatientId: ";
        cin >> pid;
        cout << "Enter PatientName: ";
        cin >> pname;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Disease: ";
        cin >> disease;
        cout << "Enter Blood Group: ";
        cin >> bg;
        cout << "Enter DoctorId: ";
        cin >> did;
        cout << "Enter DoctorName: ";
        cin >> dname;
        cout << "Enter Specialization: ";
        cin >> spec;
        
        treatments[i] = new Treatment(pid, pname, age, disease, bg, did, did, dname, spec);
    }
    
    // Menu-driven search (simplified)
    cout << "\nSearch Example:\n";
    treatments[0]->search(1, 1);
    
    for (int i = 0; i < num; i++) {
        delete treatments[i];
    }
    
    return 0;
}