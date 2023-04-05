//Nguon : https://blog.luyencode.net/thuat-toan-tim-kiem-nhi-phan/

void Interchange_Sort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);//hoán v? a[i] và a[j]
			}
		}
	}
}
