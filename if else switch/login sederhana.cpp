#include <iostream>
using namespace std;

int main() {
	string username,password;
	cout << "\tSISTEM LOGIN SEDERHANA" << endl;
	cout << "Masukan Username : "; cin >> username;
	cout << "Masukan Password : "; cin >> password;
	if(username == "user11" && password == "aqa2143") { // jika benar
		cout << "Anda Berhasil Login" << endl;
	} else if(username != "user11" && password == "aqa2143") { // jika username salah dan password benar
		cout << "Username Anda Salah" << endl;	
	} else if(username == "user11" && password != "aqa2143") { // jika username benar dan password salah
		cout << "Password Anda Salah" << endl;	
	} else { // jika salah
		cout << "Username dan Password Anda Salah" << endl;
	}
return 0;	
}
