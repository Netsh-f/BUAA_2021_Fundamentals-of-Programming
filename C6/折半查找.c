int findl(int key,int low,int high){
	int mid;
	if(low>high)
		return -1;
	mid=(low+high)/2;
	if(key==a[mid])
		return mid;
	else if(key>a[mid])
		return findl(key,mid+1,high);
	else
		return findl(key,low,mid-1);
}
