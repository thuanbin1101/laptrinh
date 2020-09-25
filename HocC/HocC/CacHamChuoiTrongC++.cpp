﻿#include <string>

string str;

============ XÓA ========== =
str.erase(str.begin() + 3) : xóa 1 kí tự tại vị trí 3
str.erase(x, y); // Xóa đi y ký tự bắt đầu tại vị trí x.
str.erase(str.begin() + x); // Xóa đi ký tự tại vị trí x.
str.erase(str.begin() + x, str.begin() + y); // Xóa đi các ký tự từ chỉ số x đến chỉ số y - 1

============ THÊM ============ =
str.insert(str.begin() + 3, 'y') : thêm 1 kí tự 'y' tại vị trí số 3
str.insert(x, "y", z); // Thêm z ký tự từ chuỗi y vào vị trí x. Nếu z có độ dài lớn hơn độ dài chuỗi y thì tiếp tục thêm vào 1 khoảng trắng và sau đó lại bắt đầu thêm vào các ký tự của chuỗi từ vị trí 0 --> sao cho đủ z thì thôi.

str.insert(x, y, 'z'); // Thêm y lần ký tự z vào vị trí x.
str.insert(str.begin() + x, 'y'); // Thêm ký tự y vào vị trí x.
str.insert(str.begin() + x, y, 'z'); // Thêm y lần ký tự z vào vị trí x.
str.insert(str.begin() + x, str2.begin() + y, str2.begin() + z); // Thêm chuỗi ký tự con của chuỗi str2 bắt đầu từ vị trí y cho đến vị trí z - 1 vào vị trí x trong chuỗi str.

============ LẤY CHUỖI CON ================
string str2 = str.substr(x, y); // Lấy ra chuỗi con của chuỗi str bắt đầu từ vị trí x và lấy ra y ký tự.
string str2 = str.substr(x); // Lấy ra chuỗi con của chuỗi str bắt đầu từ vị trí x cho đến cuối chuỗi.

============ TÌM KIẾM ============
int found = str.find('x');
if (found != string::npos) = > trả về found chính là vị trí xuất hiện đầu tiên của ký tự x trong chuỗi str.
else = > Không tồn tại ký tự x trong chuỗi str.

int found = str.find("x");
if (found != string::npos) = > trả về found chính là vị trí xuất hiện đầu tiên của chuỗi x trong chuỗi str.
else = > Không tồn tại chuỗi x trong chuỗi str.

int found = str.find("x", y, z);
if (found != string::npos) = > trả về found chính là vị trí xuất hiện đầu tiên của chuỗi x lấy ra z ký tự và sẽ bắt đầu tìm kiếm từ vị trí y trong chuỗi str.
else = > Không tồn tại chuỗi x trong chuỗi str.