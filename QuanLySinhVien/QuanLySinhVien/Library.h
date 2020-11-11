struct SinhVien {
	int id;
	char ten[30];
	char gioiTinh[5];
	int tuoi;
	float diemToan;
	float diemLy;
	float diemHoa;
	float diemTB = 0;
	char hocluc[10] = "-";
};

typedef SinhVien SV;

void printLine(int n);
void nhapThongTinSV(SV &sv, int id);
void nhapSV(SV a[], int id, int n);
void capNhatThongTinSV(SV &sv);
void capNhatSV(SV a[], int id, int n);
int xoaTheoID(SV a[], int id, int n);
void timKiemTheoTen(SV a[], char ten[], int n);
void tinhDTB(SV &sv);
void xeploai(SV &sv);
int idLonNhat(SV a[], int n);
void sapxepTheoDTB(SV a[], int n);
void sapXepTheoTen(SV a[], int n);
void showStudent(SV a[], int n);
int docFile(SV a[], char fileName[]);
void ghiFile(SV a[], int n, char fileName[]);
void pressAnyKey();