#include <bits/stdc++.h>
using namespace std;

struct CongNhan
{
    string hoTen;
    double luong;
};

int n = 10;
CongNhan d[15] = {
    {"Kha", 50000000},
    {"Hang", 49000000},
    {"Manh", 18000000},
    {"Huynh", 17000000},
    {"Minh", 16000000},
    {"Khanh", 15000000},
    {"Tan", 14000000},
    {"Thanh", 12000000},
    {"Tuoi", 11000000},
    {"Hong", 10000000}};

int binary_search(CongNhan arr[], int l, int r, CongNhan cn)
{
    double x = cn.luong;
    int kq;
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        // if (arr[mid] == x)
        //     return mid;
        if (x > arr[mid].luong)
            r = mid - 1;

        else
            l = mid + 1;
        kq = r;
    }
    return kq;
}

void chen(int index, CongNhan x){
    for (int i = n; i > index;i--){
        d[i] = d[i - 1];
    }
    d[index] = x;
}

void HienThi(){
    for (int i = 0; i < n + 1; i++){
        cout << "     " << d[i].hoTen << "        " << d[i].luong;
        cout << endl;
    }
    cout<<endl;
}

int dem = 0;
void greddy_algo(double x)
{
    int i = 0;
    while (x > 0)
    {
        dem++;
        x = x - d[i].luong;
        i++;
    }
}

int main()
{
    CongNhan temp;
    temp = {"temp", 13000000};
    int result = binary_search(d, 0, n - 1, temp);
    cout << "Can chen cong nhan tren vao vi tri d[" << result + 1 << "] trong danh sach" << endl;
    chen(result, temp);
    cout << "Danh sach cong  nhan moi: " << endl;
    HienThi();
    cout << endl;

    double p = 150000000;
    greddy_algo(p);
    cout << "Can lay it nhat luong cua  " << dem << " cong nhan de duoc " << p << endl;
}