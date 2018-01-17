#include<iostream>
#include<cmath>

using namespace std;


void swapcolumn(int a[50][50], int r, int c, int b);
void swaprow(int a[50][50], int r, int c, int b);
int swapmx(int arr[50][50], int m, int n, int a, int b);
void array(int arr1[50][50], int arr2[50][50], int sizemx1, int p, int q);



int main()
{
	//-------defining variables and initializing them-------------    
	int e, flag = 0, i, j, flag1 = 0;
	int array1[50][50], array2[50][50], array3[50][50], array4[50][50], array5[50][50], array6[50][50], array7[50][50], array8[50][50];
	int k, sizemx1, p, q, r, x, y, temp = 0;
	int m, n, a, b, l;
	char operation, redo;
	//--------Printing the name of the project along with the student name on the screen//    
	cout << "Welcome to your Matrix calculating Intellingent Assistant{Aldrich Fernandes} " << endl;
	cout << "****************************************************************************" << endl;
	cout << endl << endl << endl;

	cout << "The instruction menu:" << endl << endl << endl;
	cout << "    1. Initialize Matrices" << endl;
	cout << "    2. Print Matrices" << endl;
	cout << "    3. Multiply Matrices" << endl;
	cout << "    4. Transpose of Second Matrix" << endl;
	cout << "    5. Switch Row and Column of 2nd Matrix" << endl;
	cout << "    6. Exit" << endl << endl;

	//--here do loop is used so that the program can be used more then one time
	//without exiting the run screen---------------------------//    
	do
	{
		do
		{


			cout << "Please enter your requested instruction (Between 1..6)?=  ";
			while (!(cin >> operation))  //Reciving vaiables from input : is it no/character ?
			{
				cout << "Please  enter a number!  Try again: ";//shows an error is the entered quantity does not mathch the required specification//
				cin.clear();
				cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
				// whichever comes first.
			}
			//cin>>operation ;
			cout << endl;




			//---used switch function so that the operater can be decided and swithched between the 6 menu options//  
			switch (operation)
			{
				//------calculating the requested equation for inputs------------- 
				//-------at the same time printing the results on screen-----------          
			case'1':
				cout << "Enter the Size of 1st square Matrix" << endl;
				cout << "Row & Column=";
				while (!(cin >> sizemx1))  //Reciving vaiables from input : is it no/character ?
				{
					cout << "Please  enter a number!  Try again: ";
					cin.clear();
					cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
					// whichever comes first.
				}
				//cin>>sizemx1;
				if (sizeof(sizemx1)<4){
					cout << "unknown command" << endl;//display error//
				}
				cout << "Enter the  of 2nd Matrix" << endl;
				cout << "Row=";
				while (!(cin >> p))  //Reciving vaiables from input : is it no/character ?
				{
					cout << "Please  enter a number!  Try again: ";
					cin.clear();
					cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
					// which ever comes first.
				}

				//cin>>p;

				cout << "Column=";
				while (!(cin >> q))  //Reciving vaiables from input : is it no/character ?
				{
					cout << "Please  enter a number!  Try again: ";
					cin.clear();
					cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
					// whichever comes first.
				}
				//cin>>q;
				flag = flag + 1;
				//cout<<"flag="<<flag<<endl;


				break;
			case'2': //2. Print Matrices
				//cout<<"flag="<<flag<<endl;
				//cout<<"flag1="<<flag1<<endl;

				if (flag<1){
					cout << "flag=" << flag << endl;
					cout << "Please perforform operation no.1 firest" << endl;
				}
				if (flag >= 1){
					cout << "flag=" << flag << endl;
					// array( array1,array2, sizemx1, p,q);
					/*cout<<"Enter the elements in the 1st Array"<<endl;
					for(i=0;i<sizemx1;i++)
					{
					for(j=0;j<sizemx1;j++)
					{
					cin>>array1[i][j];
					}
					}
					cout<<"Enter the elements in the 2nd Array"<<endl;
					for(i=0;i<p;i++)
					{
					for(j=0;j<q;j++)
					{
					cin>>array2[i][j];
					}
					}*/




					cout << "\nDisplaying the 1st Array" << endl;
					for (i = 0; i<sizemx1; i++)
					{
						for (j = 0; j<sizemx1; j++)
						{
							array1[i][j] = 50 + rand() % (100 - 50 + 1);

							cout << array1[i][j] << "\t";

						}
						cout << endl;
					}
					cout << "\nDisplaying the 2nd Array" << endl;
					for (i = 0; i<p; i++)
					{
						for (j = 0; j<q; j++)
						{
							array2[i][j] = 50 + rand() % (100 - 50 + 1);

							cout << array2[i][j] << "\t";
						}
						cout << endl;
					}
					flag1 = flag1 + 1;
				}
				array2[10][10] = array4[10][10];

				for (i = 0; i<p; i++)
				{
					for (j = 0; j<q; j++)
					{
						array5[i][j] = array2[i][j];
						array6[i][j] = array2[i][j];
					}
				}

				break;
			case'3':      //3. Multiply Matrices
				//cout<<"flag1="<<flag1<<endl;
				if (flag1<1){
					cout << "Please perforform operation no.1 and no.2 firest" << endl;
				}
				else{
					if (sizemx1 != p){
						cout << "Multiplication is not possible" << endl;
					}
					if (sizemx1 == p)
					{
						for (i = 0; i<sizemx1; i++)
						{
							for (j = 0; j<q; j++)
							{
								array3[i][j] = 0;
								for (k = 0; k<p; k++)
								{
									array3[i][j] = array3[i][j] + array1[i][k] * array2[k][j];
								}
							}
						}
						cout << "\nDisplaying the array elements after multiplication" << endl;
						for (i = 0; i<sizemx1; i++)
						{
							for (j = 0; j<q; j++)
							{
								cout << array3[i][j] << "\t";
							}
							cout << endl;
						}
					}
				}
				break;
			case'4':   //4. Transpose of 2nd Matrix

				if (flag1<1){
					cout << "Please perforform operation no.1 and no.2 firest" << endl;
				}
				else{
					for (i = 0; i<p; i++)
					{
						for (j = 0; j<q; j++)
						{
							array7[i][j] = array6[i][j];

						}
					}
					cout << "\nDisplaying trannspose the 2nd Matrix" << endl;

					for (i = 0; i <= q - 1; i++)
					{
						for (j = 0; j <= p - 1; j++)
						{
							temp = array7[j][i];
							array7[j][i] = array4[i][j];
							array4[i][j] = temp;

							//cout<<i<<j;
							cout << temp << "\t";
						}
						cout << endl;
					}
				}

				break;
			case'5': //5. Move Row and Column of 2nd Matrix

				if (flag1<1){
					cout << "Please perforform operation no.1 and no.2 firest" << endl;
				}
				else{

					cout << "enter the row number you want to swap:" << endl;
					// cin>>x>>y;

					while (!(cin >> x))  //Reciving vaiables from input : is it no/character ?
					{
						cout << "Please  enter a number!  Try again: ";
						cin.clear();
						cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
						// whichever comes first.
					}
					cout << endl;
					cout << "enter the column number you want to swap:" << endl;
					while (!(cin >> y))  //Reciving vaiables from input : is it no/character ?
					{
						cout << "Please  enter a number!  Try again: ";
						cin.clear();
						cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
						// whichever comes first.
					}
					cout << endl;

					for (i = 0; i<p; i++)
					{
						for (j = 0; j<q; j++)
						{
							array8[i][j] = array5[i][j];

						}
					}
					cout << "The original matrix is" << endl;
					cout << endl;

					for (i = 0; i<p; i++)
					{
						for (j = 0; j<q; j++)
						{


							cout << array8[i][j] << "\t";
						}
						cout << endl;
					}

					swapmx(array8, p, q, x, y);
					cout << endl;

				}
				break;
			case'6':  //  6. Quit
				cout << "Thanks do u want to start again:";
				cout << endl << endl;
				goto label;
				break;
			default:
				cout << "unknown command" << endl;

			}
		} while (operation == '1' || operation == '2' || operation == '3' || operation == '4' || operation == '5' || operation == '6');


		//----now once again the program will ask the user if want to continue or not          
		cout << "enter y or Y to continue:";
		cin >> redo;
		cout << endl << endl;
	} while (redo == 'y' || redo == 'Y');
label:

	system("pause");
	return 0;

}
void array(int arr1[50][50], int arr2[50][50], int sizemx1, int p, int q)
{

	cout << "Enter the elements in the 1st Array" << endl;
	for (int i = 0; i<sizemx1; i++)
	{
		for (int j = 0; j<sizemx1; j++)
		{
			//cin>>arr1[i][j];
			while (!(cin >> arr1[i][j]))  //Reciving vaiables from input : is it no/character ?
			{
				cout << "Please  enter a number!  Try again: ";
				cin.clear();
				cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
				// whichever comes first.
			}

		}
	}
	cout << "Enter the elements in the 2nd Array" << endl;
	for (int i = 0; i<p; i++)
	{
		for (int j = 0; j<q; j++)
		{
			//cin>>arr2[i][j];
			while (!(cin >> arr2[i][j]))  //Reciving vaiables from input : is it no/character ?
			{
				cout << "Please  enter a number!  Try again: ";
				cin.clear();
				cin.ignore(1000, '\n');  // Skip to next newline or 1000 chars,
				// whichever comes first.
			}
		}
	}
}
void swapcolumn(int a[50][50], int r, int c, int b)
// r -> row, c ->col
{
	int t, s;
	while (b < (c - 1))
	{
		for (int i = 0; i<r; i++)
		{
			t = a[i][b];
			a[i][b] = a[i][b + 1];
			a[i][b + 1] = t;
		}
		b++;
	}


}
void swaprow(int a[50][50], int r, int c, int b)
// r -> row, c ->col
{
	int t;
	while (b < (r - 1))
	{
		for (int i = 0; i<c; i++)
		{
			t = a[b][i];
			a[b][i] = a[b + 1][i];
			a[b + 1][i] = t;
		}
		b++;
	}

	/*for(int i = 0; i< c ; i++)
	{
	t = a[b-1][i];
	a[b-1][i] = a[r-1][i];
	a[r-1][i] = t;
	}*/
}
int swapmx(int arr[50][50], int m, int n, int a, int b)
{

	int  i, j, k, l;

	//for( l = 0; l <=a-1; l ++){
	/* Swap function call */
	cout << "The matrix after shifting row" << endl;
	swaprow(arr, m, n, a - 1);
	for (i = 0; i < m; i++)
	{
		cout << endl;
		for (j = 0; j < n; j++)

			cout << arr[i][j] << "\t";
	}
	cout << endl;
	cout << endl;


	//}
	cout << endl << endl;
	cout << "The matrix after shifting column" << endl;
	//for( k = 0; k <=b ; k ++){


	swapcolumn(arr, m, n, b - 1);
	//cout<<"k="<<k<<endl;
	/* Display Array in Matrix form */
	//}
	for (i = 0; i < m; i++)
	{
		cout << endl;
		for (j = 0; j < n; j++)
			cout << arr[i][j] << "\t";
	}
	cout << endl;
	return 1;
}

