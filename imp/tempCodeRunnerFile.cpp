
// int partition(int arr[], int s, int e) {
//   //step1: chooose pivotelement
//   int pivotIndex = s;
//   int pivotElement = arr[s];

//   //step2: find right positio for pivot Element and place it there
//   int count = 0;
//   for(int i=s+1; i<=e; i++) {
//     if(arr[i] <= pivotElement) {
//       count++;
//     }
//   }
//   //jab main loop se bahar hua, toh mere paas pivot ki right position ka index ready h 
//   int rightIndex = s + count;
//   swap(arr[pivotIndex], arr[rightIndex]);
//   pivotIndex = rightIndex;

//   //Step3: left me chote and right me bade
//   int i = s;
//   int j = e;

//   while( i < pivotIndex && j > pivotIndex) {
//     while(arr[i] <= pivotElement) {
//       i++;
//     }
//     while( arr[j] > pivotElement){
//       j--;
//     }

//     //2 case ho sakte h -> 
//     //A-> you found the elements to swap
//     //B-> no need to swap
//     if(i < pivotIndex && j > pivotIndex)
//       swap(arr[i],arr[j]);
//   }
//   return pivotIndex;
// }
