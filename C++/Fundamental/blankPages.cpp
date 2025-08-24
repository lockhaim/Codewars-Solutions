int paperwork(int n, int m){
    int pages;
    if (m >= 0 && n >= 0){
      pages = m*n;
    } else {
      pages = 0;
    }
    return pages; 
}