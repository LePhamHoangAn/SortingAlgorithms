#include "sorting.h"
#include "visualize_sorting.h"
#include <iostream>
#include <iostream>

// FOR PASS ALL SORTING ALGORITHMS NEEDS TO BE IMPLEMENTED CORRECTLY
// 
// 
// YOU CAN VISUALIZE THE LIST WITH visualize_sorting() DRAWS EACH ELEMENT IN THE VECTOR AS A LINE WITH
// THE VALUE THE LENGTH OF THE LINE




// IN IS AN UNSORTED LIST OF VALUES, OUT SHOULD BE THE SORTED LIST OF VALUES
void insertion_sort(const std::vector<int> &in, std::vector<int> &out) 
{
	// STUDENT WRITES IMPLEMENTATION

	/*visualize_sorting(out);
	*/
	 int k, j;

	/* std::cout << out.size() << std::endl;*/


	 for (int i = 0; i < in.size(); i++)
	 {
		 out.push_back(in[i]);
		/* std::cout << out.size() << std::endl;*/
	 }
	
	/* visualize_sorting(out);*/


	for ( int i = 0; i < out.size(); i++)
	{
		k = out[i];
		j = i ;
		
		while (j > 0 && k<out[j-1])
		{
			out[j] = out[j-1];
			j = j - 1;
		}
		
		out[j] = k;
	}

	
}

void bubble_sort(std::vector<int> &in_out) 
{
	// STUDENT WRITES IMPLEMENTATION
	int i, j, k;
	
	for (i = 0;i<in_out.size(); i++)
	{
		for (j = i + 1;j<in_out.size(); j++)
		{
			if (in_out[i] > in_out[j])
			{
				k = in_out[j];
				in_out[j] = in_out[i];
				in_out[i] = k;
			}
		}
	}
}

int Partition(std::vector<int>& in_out, int a, int b) 
{
	int index = (a+(b-a)/2);
	int pivot = in_out[index];
	int swap;
	
	while (a<= b)
	{
		while (in_out[a] < pivot)
		{
			a = a + 1;
		}
		while (in_out[b] > pivot)
		{
			b = b - 1;
		}
		if (a <= b)
		{
			swap = in_out[a];
			in_out[a] = in_out[b];
			in_out[b] = swap;
			a++;
			b--;
		}
	}
	return a;
}

void Quicksortjunior(std::vector<int>& in_out,int a, int b)
{
	if (a < b)
	{
		int partition = Partition(in_out, a, b);
		Quicksortjunior(in_out, a, (partition - 1));
		Quicksortjunior(in_out, (partition ), b);
	}
	
}

void quick_sort(std::vector<int>& in_out)
{
	// STUDENT WRITES IMPLEMENTATION
	int a = 0;
	int b =(int)in_out.size()-1;
	Quicksortjunior(in_out,a,b);
	
}



