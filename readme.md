s.erase(pos,i) sẽ xoá thực sự string s, chứ không phải dạng copy, vì vậy trong dòng for string k được reset, s được tham chiếu.
