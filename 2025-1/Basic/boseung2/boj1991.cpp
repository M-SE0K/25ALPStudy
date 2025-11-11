#include<bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n = 0;
  cin >> n;
  
  int arr[n];
  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }

  int sum = 0;
  for(int i=0; i<n; i++) {
    if(arr[i] == 0) {
      sum = sum - 1;
      continue;
    }
    sum += arr[i];
  }

  int rest = sum % 4;
  if(rest == 0) {
    cout << -1 << "\n";
  } 
  if (rest > 0) {
    if(rest == 1) {
      cout << "1";
    }
    if(rest == 2) {
      cout << "1 1";
    }
    if(rest == 3) {
      cout << "0";
    }
  } 
  if ( rest < 0) {
    rest = -rest;
    if(rest == 1) {
      cout << "0";
    }
    if(rest == 2) {
      cout << "1 1";
    }
    if(rest == 3) {
      cout << "1";
    }
  }
}