#include <vector>
#include <iostream>

using namespace std;
void sort(vector<int>& x)
{
  for (vector<int>::size_type i = 0; i < x.size(); i++){
    for (vector<int>::size_type j = 0; j < x.size() - 1; j++){
      if(x[j] > x[j+1]){
        int tmp;
        tmp = x[j];
        x[j] = x[j+1];
        x[j+1] = tmp;
      }
    }
  }
}
int main()
{
  vector<int> x;
  cout << "整数を入力せよ" << endl;
  while (true) {
    int temp;
    cin >> temp;
    if (temp == 9999) break;
    x.push_back(temp);
  }

  for (vector<int>::size_type i = 0; i < x.size(); i++)
    cout << "x[" << i << "] = " << x[i] << endl;

  sort(x);

  for (vector<int>::size_type i = 0; i < x.size(); i++)
    cout << "x[" << i << "] = " << x[i] << endl;

}