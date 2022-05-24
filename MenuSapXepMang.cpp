#include<stdio.h>
#include<conio.h>
#include <windows.h>
void nhap(int *arr, int n);
void xuat(int *arr, int n);
void swap(int &a, int &b);

void selectionSort_T(int *arr, int n);                      void selectionSort_G(int *arr, int n);  
void insertionSort_T(int *arr, int n);                      void insertionSort_G(int *arr, int n);
void interchangeSort_T(int *arr, int n);                    void interchangeSort_G(int *arr, int n);
void bubbleSort_T(int *arr, int n);                         void bubbleSort_G(int *arr, int n);
void quickSort_T(int *arr, int left, int right);            void quickSort_G(int *arr, int left, int right);
void menu(int *arr, int n);
void Shift (int *arr, int left, int right);
void CreateHeap(int *arr, int n);
void HeapSort (int a[], int n);
int main() 
{
    system("cls");
    int n;
    printf("nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    nhap(arr, n);
    menu(arr, n);
}
void menu(int *arr, int n) 
{
	int KT = true;
	while(KT)
	{
		printf("\n1 Selectionsort" );
	    printf("\n2 Insertionsort "); 
	    printf("\n3 Interchangesort");
	    printf("\n4 BubbleSort");
	    printf("\n5 QuickSort");  
	    printf("\n6 HeapSort");
	    printf("\n0 Exit" );
	    printf("\nChon thuat toan: ");
	    int m, c; scanf("%d", &m);
	    switch (m)
	    {
	    case 0:
	    	KT = false;
	    	break;
	    case 1:
	        printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
	        switch (c)
			{
			case 1:
				selectionSort_T(arr ,n);
				xuat(arr ,n);
				 break;
			case 2:
				selectionSort_G(arr,n);
				xuat(arr ,n);
				break;
			 default:
				 break;
			 }
			break;
	    case 2:
	        printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
			switch (c)
			{
			case 1:
				insertionSort_T(arr ,n);
	   		    xuat(arr ,n);
				 break;
			 case 2:
			 	
				 insertionSort_G(arr ,n);
	   		     xuat(arr,n);
				 break;
			 default:
				 break;
			 }
			break;
	    case 3:
	         printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
			 switch (c)
			 {
			 case 1:
				 	interchangeSort_T(arr ,n);
			        xuat(arr ,n);
				 break;
			 case 2:
				 	interchangeSort_G(arr ,n);
			        xuat(arr ,n);
				 break;
			 default:
				 break;
			 }
			break;
	
			break;
		case 4:
	         printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
			 switch (c)
			 {
			 case 1:
				 	bubbleSort_T(arr ,n);
		            xuat(arr,n);
				 break;
			 case 2:
				 	bubbleSort_G(arr ,n);
		            xuat(arr ,n);
				 break;
			 default:
				 break;
			 }
	
			break;
	    case 5:
			  printf("\n1 Tang dan "); printf("\n2 Giam dan "); printf("\nNhap lua chon: "); scanf("%d", &c);
			 switch (c)
			 {
			 case 1:
				quickSort_T(arr ,1, n);
	            printf("\nSau khi sx:\n");
				 break;
			 case 2:
				quickSort_G(arr ,1, n);
	            printf("\nSau khi sx:\n");
				 break;
			 default:
				 break;
			 }
		case 6:
			Shift(arr,1,n);
		    CreateHeap(arr,n);
		    HeapSort(arr,n);
		    xuat(arr,n);
			break;
			break;
	    default:
	        break;
	    }
	}
}
// nhap/ xuat mang
void nhap(int *arr, int n) 
{
    for(int i = 1; i <= n; i++) 
        {printf("nhap arr[%d]", i); scanf("%d", &arr[i]);}
	printf("\nMang vua nhap\n");
    xuat(arr, n);
}

void xuat(int *arr, int n) 
{
    for(int i = 1; i <= n; i++) 
        printf("%d\t", arr[i]); 
}

// ham swap
void swap(int &a, int &b) 
{
    int t = a;  a = b;   b = t;
}

// 1.selection sort (tang)
void selectionSort_T(int *arr, int n) 
{
	printf("\n sau khi sap xep Selection Sort: ");
	int i, j;
	int min;
	for(i = 1; i <= n; i++) 
    {
    	min = i;
		for(j = i+1; j < n; j++) 
			if(arr[min] > arr[j]) min = j;
		swap(arr[i], arr[min]);
	}
}

// 2. insertion sort (tang)
void insertionSort_T(int *arr, int n) 
{
	printf("\n sau khi sap xep insertion sort: ");
	int i, pos, x;
	for(i = 1; i <= n; i++) 
    {
		x = arr[i];
		pos = i-1;
		while((pos >= 0) && (arr[pos] > x)) 
        {
			arr[pos+1] = arr[pos];
			pos--;
		}
		arr[pos+1]=x;
	}
}

//3. interchange sort (tang)
void  interchangeSort_T(int *arr, int n) 
{
	printf("\n sau khi sap xep interchange Sort: ");
	int i,j;
	for(i = 1; i <= n; i++) 
    {
		for(j= i+1; j <= n; j++) 
			if(arr[j] > arr[i]) 
				swap(arr[j],arr[i]);
	}
}

//4. buble sort (tang)
void bubbleSort_T(int *arr, int n)
{
	printf("\n sau khi sap xep bublle Sort: ");
    int i, j;
    for(i = n; i > 1; i--)
        for(j = 1; j <i; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

//5. Quick sort (tang)
void quickSort_T(int *arr, int left, int right) {
    int i, j , x;
    if(left >= right) return;
    x = arr[(left+right)/2];
    i = left; j = right;
    while(i <= j) {
        while(arr[i] < x) i++;
        while(arr[j] > x) j--;
            if(i <= j)
            {
                swap(arr[i], arr[j]);
                i++;    j--;
            }
    }
    quickSort_T(arr, left, j);
    quickSort_T(arr, i, right);
}
// 6. heapsort
void Shift (int *arr, int left, int right)
{
	int x, curr, joint;
	curr = left; joint =2*curr;
	x = arr[curr];
	printf("curr = %d, joint = %d, x = %d\n", curr, joint, x);
	while (joint <= right)
		{
		if (joint < right) 
		{
			if (arr[joint] < arr[joint+1])
			{
				printf("arr[%d] = %d < arr[%d] = %d => joint = %d\n", joint, arr[joint], joint+1, arr[joint+1], joint+1);
				joint = joint+1;
			}
			
		}
			
			if (arr[joint]<  x) break; 
			else
					{
						printf("arr[%d] = %d > %d\n", joint, arr[joint], x);
						arr[curr] = arr[joint];
						printf("arr[%d] = arr[%d] = %d\n", curr, joint, arr[joint]);
						curr = joint; 
						printf("curr = %d\n", joint);
						joint = 2*curr;
						printf("joint = %d\n", 2*curr);
					}
		printf("arr[%d] = %d\n", curr, x);		
		arr[curr] = x; 		
		}
}


void CreateHeap(int *arr, int n)
{
	int left; 
	for (left = (n)/2; left >= 1; left --)
	{
		printf("shift(arr, %d, %d)\n", left, n);
		Shift(arr, left, n);
	}
		
}


void HeapSort (int *arr, int n)
{	
	printf("\nSau khi sx:\n");
	int right;
	printf("creatHeap(%d,%d)\n", arr, n);
	CreateHeap(arr, n); 
	right = n; 
	printf("right = %d\n", n);
	while (right > 1)
		{
		printf("swap(arr[1], arr[%d])\n", right);
		swap(arr[1],arr[right]);
		right --;
		printf("right-- = %d\n", right);
		printf("shift(arr,%d,%d)\n", 1, right);
		Shift(arr,1,right);
		}
}
// 1.selection sort (Giam)
void selectionSort_G(int *arr, int n) 
{
	printf("\n sau khi sap xep Selection Sort: ");
	int i, j, max;
	for(i = 0; i < n-1; i++)
	{
		max = i;
		for(j = i+1; j < n; j++)
			(arr[max] < arr[j]) ? max = j: max;
		swap(arr[max], arr[i]);
	}
}

// 2. insertion sort (tang)
void insertionSort_G(int *arr, int n) 
{
	printf("\n sau khi sap xep insertion sort: ");
	int i, pos, x;
	for(i = 0; i < n; i++) 
    {
		x = arr[i];
		pos = i-1;
		while((pos >= 0) && (arr[pos] > x)) 
        {
			arr[pos+1] = arr[pos];
			pos--;
		}
		arr[pos+1]=x;
	}
}

//3. interchange sort (tang)
void  interchangeSort_G(int *arr, int n) 
{
	printf("\n sau khi sap xep interchange Sort: ");
	int i,j;
	for(i = 0; i < n; i++) 
    {
		for(j= i+1; j < n; j++) 
			if(arr[j] > arr[i]) 
				swap(arr[j],arr[i]);
	}
}

//4. buble sort (tang)
void bubbleSort_G(int *arr, int n)
{
	printf("\n sau khi sap xep bublle Sort: ");
    int i, j;
    for(i = n; i > 1; i--)
        for(j = 1; j <i; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

//5. Quick sort (tang)
void quickSort_G(int *arr, int left, int right) {
    int i, j , x;
    if(left >= right) return;
    x = arr[(left+right)/2];
    i = left; j = right;
    while(i <= j) {
        while(arr[i] < x) i++;
        while(arr[j] > x) j--;
            if(i >= j)
            {
                swap(arr[i], arr[j]);
                i++;    j--;
            }
    }
    quickSort_G(arr, left, j);
    quickSort_G(arr, i, right);
}
