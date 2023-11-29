#include <iostream>
using namespace std;
int main(){
	int nomor_hari;
	cout << "Masukan hari dalam bentuk Angka 1 - 7: ";
	cin >> nomor_hari;
	
	switch(nomor_hari){
		case 1 :
			cout << "SENIN";
			break;
			case 2:
				cout << "SELASA";
				break;
				case 3:
					cout << "RABU";
					break;
					case 4 :
						cout << "KAMIS";
						break;
						case 5 :
							cout << "JUM'AT";
							break;
							case 6 :
								cout << "SABTU";
								break;
								case 7:
									cout << "MINGGU";
									break;
									default:
										cout << "Bukan Hari Yang Benar";
			
				}
				}