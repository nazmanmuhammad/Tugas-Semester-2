#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Book {
    string title;
    int rack;
};

// fungsi untuk membandingkan dua buku berdasarkan judul
bool compareBookTitle(Book a, Book b) {
    return a.title < b.title;
}

// fungsi binary search untuk mencari rak buku berdasarkan judul
int binarySearch(vector<Book>& books, string title) {
    int left = 0;
    int right = books.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (books[mid].title == title) {
            return books[mid].rack;
        }
        else if (books[mid].title < title) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1; // jika buku tidak ditemukan
}

int main() {
    vector<Book> books = { {"Algoritma dan Struktur Data", 1}, {"Dasar Pemrograman", 2}, {"Kalkulus", 3}, {"Fisika Dasar", 4}, {"Kimia Dasar", 5} };
    string title;

    cout << "Masukkan judul buku yang dicari: ";
    getline(cin, title);

    // sort terlebih dahulu berdasarkan judul agar dapat menggunakan binary search
    sort(books.begin(), books.end(), compareBookTitle);

    int rack = binarySearch(books, title);

    if (rack == -1) {
        cout << "Buku tidak ditemukan" << endl;
    }
    else {
        cout << "Buku ditemukan pada rak nomor " << rack << endl;
    }

    return 0;
}