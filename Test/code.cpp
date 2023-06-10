#include<bits/stdc++.h>
using namespace std;
int v;//the number of vertices
int e;//the number of edges
int u;//source 
int n;//destination
int matrix[101][101];//adjacency matrix of graph
int check[101];//to check a vertex passed or not
int before[101];//to save the way among vertices
vector<int>ov;//to contain vertices have odd degree
int hamilton[101];//to contain a hamilton process
int hp;//the number of hamilton processes
int dijkstra[101];//to contain the shortest way between 2 vertices
int bellmanford[101];//to contain the shortest way between 2 vertices
int beforefloyd[101][101];//to contain the vertices before
int floyd[101][101];//to contain the shortest way between 2 vertices
int begintree[101];//to contain beginning vertex of tree
int endtree[101];//to contain ending vertex of tree
int res;//to count the number of checked vertices
int sortkruskal[101][101];//to contain weight, beginning vertex and ending vertex of each edges
int prim[101];//to contain the length of shortest covering tree
void InputMatrix(){//input an adjacent matrix of graph
	cin>>v>>e>>u>>n;
	for(int i=1; i<=v; i++)
		for(int j=1; j<=v; j++)
			cin>>matrix[i][j];
	memset(check, 0, sizeof(check));
	memset(before, 0, sizeof(before));
	memset(hamilton, 0, sizeof(hamilton));
	memset(begintree, 0, sizeof(begintree));
	memset(endtree, 0, sizeof(endtree));
	memset(sortkruskal, 0, sizeof(sortkruskal));
	memset(prim, 0, sizeof(prim));
	ov.clear();
	hamilton[0]=1;
	res=1;
}
void InputEdgeList(){//input edges list of a graph
	cin>>v>>e>>u>>n;
	memset(matrix, 0, sizeof(matrix));
	for(int i=1; i<=e; i++){
		int x, y;
		cin>>x>>y;
		matrix[x][y]=1;
		matrix[y][x]=1;
	}
	memset(check, 0, sizeof(check));
	memset(before, 0, sizeof(before));
	memset(hamilton, 0, sizeof(hamilton));
	memset(begintree, 0, sizeof(begintree));
	memset(endtree, 0, sizeof(endtree));
	memset(sortkruskal, 0, sizeof(sortkruskal));
	memset(prim, 0, sizeof(prim));
	ov.clear();
	hamilton[0]=1;
	res=1;
}
int convertNumber(string s){
	int res = 0;
	for (int i = 0; i < s.length(); i++){
		res = res * 10 + (s[i] - 48);
	}
	return res;
}
void Input_adjacency_list(){
	cin >> v >> e >> u >> n;
	memset(matrix, 0, sizeof(matrix));
	for (int i = 1; i <= v;i++){
		string s = "";
		while(s != "#"){
			cin >> s;
			matrix[i][convertNumber(s)] = 1;
			// s = "";
		}
	}
	memset(check, 0, sizeof(check));
	memset(before, 0, sizeof(before));
	memset(hamilton, 0, sizeof(hamilton));
	memset(begintree, 0, sizeof(begintree));
	memset(endtree, 0, sizeof(endtree));
	memset(sortkruskal, 0, sizeof(sortkruskal));
	memset(prim, 0, sizeof(prim));
	ov.clear();
	hamilton[0]=1;
	res=1;
}
void ReInput(){//to reset all values of some arrays
	memset(check, 0, sizeof(check));
}
void DFS(int u){//to run the DFS algorithm secretly
	stack<int>stk;
	stk.push(u);
	check[u]=1;
	while(!stk.empty()){
		int x=stk.top();
		stk.pop();
		for(int i=1; i<=v; i++)
			if(!check[i]&&matrix[x][i]){
				stk.push(x);
				stk.push(i);
				check[i]=1;
				break;
			}
	}
}
void OutputDFS(int u){//run the DFS algorithm and output the result
	cout<<"DFS("<<u<<")={ ";
	stack<int>stk;
	stk.push(u);
	check[u]=1;
	cout<<u<<"(0) ";
	while(!stk.empty()){
		int x=stk.top();
		stk.pop();
		for(int i=1; i<=v; i++)
			if(!check[i]&&matrix[x][i]){
				cout<<i<<"("<<x<<") ";
				stk.push(x);
				stk.push(i);
				check[i]=1;
				break;
			}
	}
	cout<<"}";
}
void BFS(int u){//to run the BFS algorithm secretly
	queue<int>que;
	que.push(u);
	check[u]=1;
	while(!que.empty()){
		int x=que.front();
		que.pop();
		for(int i=1; i<=v; i++)
			if(!check[i]&&matrix[x][i]){
				que.push(i);
				check[i]=1;
			}
	}
}
void OutputBFS(int u){//run the BFS algorithm and output the result
	cout<<"BFS("<<u<<")={ ";
	queue<int>que;
	que.push(u);
	check[u]=1;
	cout<<u<<"(0) ";
	while(!que.empty()){
		int x=que.front();
		que.pop();
		for(int i=1; i<=v; i++)
			if(!check[i]&&matrix[x][i]){
				cout<<i<<"("<<x<<") ";
				que.push(i);
				check[i]=1;
			}
	}
	cout<<"}";
}
int ConnectivePart(){//to count the number of connective part in a graph
	int count=0;
	for(int i=1; i<=v; i++)
		if(!check[i]){
			count++;
			BFS(i);
		}
	return count;
}
void OutputConnectivePart(){//output connective part of a graph
	for(int i=1; i<=v; i++)
		if(!check[i]){
			OutputBFS(i);
			cout<<endl;
		}
}
void FindingWayByDFS(int u){//to find a way betwen 2 vertices by DFS algorithm
	stack<int>stk;
	stk.push(u);
	check[u]=1;
	while(!stk.empty()){
		int x=stk.top();
		stk.pop();
		for(int i=1; i<=v; i++)
			if(!check[i]&&matrix[x][i]){
				check[i]=1;
				stk.push(x);
				stk.push(i);
				before[i]=x;
				break;
			}
	}
}
void FindingWayByBFS(int u){//to find a way between 2 vertices by BFS algorithm
	queue<int>que;
	que.push(u);
	check[u]=1;
	while(!que.empty()){
		int x=que.front();
		que.pop();
		for(int i=1; i<=v; i++)
			if(!check[i]&&matrix[x][i]){
				check[i]=1;
				que.push(i);
				before[i]=x;
			}
	}
}
void OutputWay(int u, int n){//output the way between 2 vertices
	if(!before[n]) return;
	else{
		int i=n;
		cout<<i<<"<-";
		while(before[i]!=u){
			cout<<before[i]<<"<-";
			i=before[i];
		}
		cout<<u;
	}
}
int CountingVertexByDFS(int u){//to count the number of vertices of a graph
	int count=1;
	stack<int>stk;
	stk.push(u);
	check[u]=1;
	while(!stk.empty()){
		int x=stk.top();
		stk.pop();
		for(int i=1; i<=v; i++)
			if(!check[i]&&matrix[x][i]){
				count++;
				stk.push(x);
				stk.push(i);
				check[i]=1;
				break;
			}
	}
	return count;
}
int CountingVertexByBFS(int u){//to count the number of vertices of a graph
	int count=0;
	queue<int>que;
	que.push(u);
	check[u]=1;
	while(!que.empty()){
		int x=que.front();
		que.pop();
		count++;
		for(int i=1; i<=v; i++)
			if(!check[i]&&matrix[x][i]){
				que.push(i);
				check[i]=1;
			}
	}
	return count;
}
bool StrongConnection(){//to check whether a graph is strongly connective
	for(int i=1; i<=v; i++){
		OutputBFS(i);
		cout<<endl;
		ReInput();
		if(CountingVertexByBFS(i)!=v) return false;
		ReInput();
	}
	return true;
}
void ScanningPillar(){//to check whether a vertex of graph is a pillar
	int resP = 0;
	int cp=ConnectivePart();
	memset(check, 0, sizeof(check));
	for(int i=1; i<=v; i++){
		check[i]=1;
		cout<<"Dinh "<<i<<": ";
		OutputConnectivePart();
		memset(check, 0, sizeof(check));
		check[i]=1;
		if(ConnectivePart()!=cp) {
			cout<<i<<" la dinh tru";
			resP++;
		}
		else cout<<i<<" khong phai dinh tru";
		cout<<endl<<endl;
		memset(check, 0, sizeof(check));
	}
	cout << resP << endl;
}
void ScanningBridge(){
	int resB = 0;
	int cp=ConnectivePart();
	memset(check, 0, sizeof(check));
	for(int i=1; i<=v; i++)
		for(int j=1; j<=v; j++)
			if(matrix[i][j]&&i<j){
				matrix[i][j]=0;
				matrix[j][i]=0;
				cout<<"Canh ("<<i<<" "<<j<<"): ";
				OutputConnectivePart();
				memset(check, 0, sizeof(check));
				if(ConnectivePart()!=cp) {
					resB++;
					cout<<"("<<i<<", "<<j<<") la canh cau";
				}
				else cout<<"("<<i<<", "<<j<<") khong la canh cau";
				cout<<endl<<endl;
				memset(check, 0, sizeof(check));
				matrix[i][j]=1;
				matrix[j][i]=1;
			}
	cout << resB << endl;
}
bool EulerProcessCheck(){//to check whether a graph is euler
	int count=0;
	for(int i=1; i<=v; i++){
		int c=0;
		for(int j=1; j<=v; j++)
			if(matrix[i][j]) c++;
		if(c%2!=0) count++;
	}
	if(count==0&&ConnectivePart()==1) return true;
	else return false;
}
void EulerProcess(int u){//to find an euler process of a graph
	if(!EulerProcessCheck()) return;
	else{
		ReInput();
		for(int i=1; i<=v; i++){
			int c=0;
			for(int j=1; j<=v; j++)
				if(matrix[i][j]) c++;
			cout<<"deg("<<i<<"🙁"<<c<<", ";
		}
		cout<<endl;
		OutputConnectivePart();
		ReInput();
		stack<int>stk;
		stk.push(u);
		vector<int>vtr;
		while(!stk.empty()){
			int x=stk.top();
			int count=0;
			for(int i=1; i<=v; i++)
				if(!matrix[x][i]) count++;
			if(count==v){
				vtr.push_back(x);
				stk.pop();
			}
			else{
				for(int i=1; i<=v; i++)
					if(matrix[x][i]){
						stk.push(i);
						matrix[x][i]=0;
						matrix[i][x]=0;
						break;
					}
			}
		}
		for(int i=vtr.size()-1; i>=1; i--)
			cout<<vtr[i]<<"-";
		cout<<vtr[0];
	}
}
bool EulerWayCheck(){//to check whether a graph is half euler
	int count=0;
	for(int i=1; i<=v; i++){
		int c=0;
		for(int j=1; j<=v; j++)
			if(matrix[i][j]) c++;
		if(c%2!=0){
			ov.push_back(i);
			count++;
		}
	}
	if((count==0||count==2)&&ConnectivePart()==1) return true;
	else return false;
}
void EulerWay(){//to find an euler way of a graph
	if(!EulerWayCheck()) return;
	else if(ov.size()==0) return;
	else{
		ReInput();
		for(int i=1; i<=v; i++){
			int c=0;
			for(int j=1; j<=v; j++)
				if(matrix[i][j]) c++;
			cout<<"deg("<<i<<"🙁"<<c<<", ";
		}
		cout<<endl;
		OutputConnectivePart();
		ReInput();
		stack<int>stk;
		stk.push(ov[0]);
		vector<int>vtr;
		while(!stk.empty()){
			int x=stk.top();
			int count=0;
			for(int i=1; i<=v; i++)
				if(!matrix[x][i]) count++;
			if(count!=v){
				for(int i=1; i<=v; i++)
					if(matrix[x][i]){
						stk.push(i);
						matrix[x][i]=0;
						matrix[i][x]=0;
						break;
					}
			}
			else{
				vtr.push_back(x);
				stk.pop();
			}
		}
		for(int i=vtr.size()-1; i>=1; i--)
			cout<<vtr[i]<<"-";
		cout<<vtr[0];
	}
}
void OutputHamilton(){//output a hamilton process of a graph
	for(int i=0; i<=v; i++){
		cout<<hamilton[i]<<" ";
	}
	hp++;
	cout<<endl;
}
void Hamilton(int u){//to find all hamilton processes of a graph (only start by vertex 1)
	for(int i=1; i<=v; i++){
		if(matrix[hamilton[u-1]][i]&&!check[i]){
			hamilton[u]=i;
			check[i]=1;
			if(u<v) Hamilton(u+1);
			else if(hamilton[u]==hamilton[0]) OutputHamilton();
			check[i]=0;
		}
	}
}
// void Hamilton(int u){//to find all hamilton processes of a graph (only start by vertex 1)
// 	for (int i = 1; i <= v; i++){
// 		if (matrix[hamilton[u - 1]][i] && !check[i]){
// 			hamilton[u] = i;
// 			check[i] = 1;
// 			if (u < v)
// 				Hamilton(u + 1);
// 			else if (hamilton[u] == hamilton[0])
// 				OutputHamilton();
// 			check[i]=0;
// 		}
// 	}
// }
void RefreshDijkstra(){
	for(int i=1; i<=v; i++)
		for(int j=1; j<=v; j++)
			if(matrix[i][j]==0&&i!=j) matrix[i][j]=6969;
}
void RefreshBellmanFord(){
	for(int i=1; i<=v; i++)
		for(int j=1; j<=v; j++)
			if(matrix[i][j]==0) matrix[i][j]=6969;
}
void RefreshFloyd(){
	for(int i=1; i<=v; i++)
		for(int j=1; j<=v; j++)
			if(matrix[i][j]==0&&i!=j) matrix[i][j]=6969;
}
void OutputDijkstra(int u){//output the shortest way from source vertex to another vertex 
	for(int i=1; i<=v; i++){
		if(i==u) continue;
		else{
			int j=before[i];
			cout<<u<<"->"<<i<<": ";
			cout<<i<<" ";
			while(j!=u){
				cout<<j<<" ";
				j=before[j];
			}
			cout<<u;
			cout<<"; "<<dijkstra[i]<<endl;
		}
	}
}
void Dijkstra(int u){//to find the shortest way between 1 vertex to another vertex
	RefreshDijkstra();
	for(int i=1; i<=v; i++){
		dijkstra[i]=matrix[u][i];
		before[i]=u;
	}
	dijkstra[u]=0;
	before[u]=0;
	check[u]=1;
	while(res<v){
		int Min=6969, x=0;
		for(int i=1; i<=v; i++){
			if(!check[i]&&dijkstra[i]<Min){
				x=i;
				Min=dijkstra[i];
			}
		}
		for(int i=1; i<=v; i++)
			cout<<dijkstra[i]<<"|"<<before[i]<<" ";
		cout<<x;
		cout<<endl;
		if(x==0) return;
		else{
			check[x]=1;
			for(int i=1; i<=v; i++)
				if(!check[i]&&dijkstra[i]>dijkstra[x]+matrix[x][i]){
					dijkstra[i]=dijkstra[x]+matrix[x][i];
					before[i]=x;
				}
		}
		res++;
	}
	OutputDijkstra(u);
}
void OutputBellmanFord(int u){//output the shortest way from source vertex to another vertex
	for(int i=1; i<=v; i++){
		if(i==u) continue;
		else{
			int j=before[i];
			cout<<u<<"->"<<i<<": ";
			cout<<i<<" ";
			while(j!=u){
				cout<<j<<" ";
				j=before[j];
			}
			cout<<u;
			cout<<"; "<<bellmanford[i]<<endl;
		}
	}
}
void BellmanFord(int u){//to find the shortest way between 1 vertex to another vertex
	RefreshBellmanFord();
	for(int i=1; i<=v; i++){
		bellmanford[i]=matrix[u][i];
		before[i]=u;
	}
	bellmanford[u]=0;
	before[u]=0;
	bool check=false;
	for(int i=1; i<=v-2; i++){
		check=true;
		for(int j=1; j<=v; j++){
			if(j!=u){
				for(int o=1; o<=v; o++){
					if(bellmanford[j]>bellmanford[o]+matrix[o][j]){
						bellmanford[j]=bellmanford[o]+matrix[o][j];
						before[j]=o;
						check=false;
					}
				}
			}
		}
	}
	if(check) OutputBellmanFord(u);
	else return;
}
void OutputFloyd(){
	for(int i=1; i<=v; i++)
		for(int j=1; j<=v; j++)
			if(i!=j){
				cout<<i<<"->"<<j<<": ";
				int x=beforefloyd[i][j];
				cout<<j<<" ";
				while(x!=i){
					cout<<x<<" ";
					x=beforefloyd[i][x];
				}
				cout<<x<<" ";
				cout<<floyd[i][j]<<endl;
			}
}
void Floyd(){
	RefreshFloyd();
	for(int i=1; i<=v; i++)
		for(int j=1; j<=v; j++){
			floyd[i][j]=matrix[i][j];
			beforefloyd[i][j]=i;
		}
	for(int o=1; o<=v; o++)
		for(int i=1; i<=v; i++)
			for(int j=1; j<=v; j++)
				if(floyd[i][j]>floyd[i][o]+floyd[o][j]){
					floyd[i][j]=floyd[i][o]+floyd[o][j];
					beforefloyd[i][j]=o;
				}
	OutputFloyd();
}
void TreeDFS(int u){//to find the covering tree of a graph by DFS
	OutputDFS(u);
	ReInput();
	cout<<endl;
	stack<int>stk;
	stk.push(u);
	check[u]=1;
	while(!stk.empty()){
		int x=stk.top();
		stk.pop();
		for(int i=1; i<=v; i++)
			if(matrix[x][i]&&!check[i]){
				stk.push(x);
				stk.push(i);
				begintree[res]=x;
				endtree[res]=i;
				res++;
				check[i]=1;
				break;
			}
	}
	if(res!=v) cout<<"NONE";
	else{
		for(int i=1; i<res; i++)
			if(begintree[i]<endtree[i]) cout<<"("<<begintree[i]<<" "<<endtree[i]<<") ";
			else cout<<"("<<endtree[i]<<" "<<begintree[i]<<") ";
	}
}
void TreeBFS(int u){//to find the covering tree of a graph by BFS
	OutputBFS(u);
	ReInput();
	cout<<endl;
	queue<int>que;
	que.push(u);
	check[u]=1;
	while(!que.empty()){
		int x=que.front();
		que.pop();
		for(int i=1; i<=v; i++)
			if(matrix[x][i]&&!check[i]){
				que.push(i);
				check[i]=1;
				begintree[res]=x;
				endtree[res]=i;
				res++;
			}
	}
	if(res!=v) cout<<"NONE";
	else{
		for(int i=1; i<res; i++)
			if(begintree[i]<endtree[i]) cout<<"("<<begintree[i]<<" "<<endtree[i]<<") ";
			else cout<<"("<<endtree[i]<<" "<<begintree[i]<<") ";
	}
}
int Origin(int u){//to find the original vertex of a vertex
	if(before[u]==u) return u;
	else Origin(before[u]);
}
void Fusion(int u, int n){//to unite 2 branches having different origins
	int ou=Origin(u);
	int on=Origin(n);
	before[ou]=on;
}
void Sort(){//to sort weight of edges 
	for(int i=1; i<=v; i++)
		for(int j=1; j<=v; j++){
			if(matrix[i][j]&&i<j){
				sortkruskal[1][res]=matrix[i][j];
				sortkruskal[2][res]=i;
				sortkruskal[3][res]=j;
				res++;
			}
		}
	for(int i=1; i<res-1; i++)
		for(int j=0; j<res-i-1; j++)
			if(sortkruskal[1][j]>sortkruskal[1][j+1]){
				swap(sortkruskal[1][j], sortkruskal[1][j+1]);
				swap(sortkruskal[2][j], sortkruskal[2][j+1]);
				swap(sortkruskal[3][j], sortkruskal[3][j+1]);
			}
}
void Kruskal(){//to find the shortest covering tree of a graph
	Sort();
	for(int i=1; i<=v; i++)
		before[i]=i;
	int minw=0, minv=1, mine=1;
	while(minv<v||mine<=e){
		int fw=sortkruskal[1][mine];
		int fb=sortkruskal[2][mine];
		int fe=sortkruskal[3][mine];
		if(Origin(fb)!=Origin(fe)){
			Fusion(fe, fb);
			minw+=fw;
			minv++;
			cout<<"("<<fb<<" "<<fe<<") ";
		}
		mine++;
	}
	cout<<endl<<minw;
}
void RefreshPrim(){
	for(int i=1; i<=v; i++)
		for(int j=1; j<=v; j++)
			if(!matrix[i][j]) matrix[i][j]=6969;
}
void Prim(int u){//to find the shortest covering tree from a given vertex
	RefreshPrim();
	for(int i=1; i<=v; i++){
		prim[i]=matrix[u][i];
		before[i]=u;
	}
	check[u]=1;
	prim[u]=0;
	before[u]=0;
	int minw=0;
	while(res<v){
		int x=0, Min=6969;
		for(int i=1; i<=v; i++)
			if(!check[i]&&prim[i]<Min){
				Min=prim[i];
				x=i;
			}
		if(x==0){
			cout<<"NONE";
			return;
		}
		else{
			check[x]=1;
			minw+=matrix[before[x]][x];
			begintree[res]=before[x];
			endtree[res]=x;
			for(int i=1; i<=v; i++)
				if(!check[i]&&prim[i]>matrix[x][i]){
					prim[i]=matrix[x][i];
					before[i]=x;
				}
			res++;
		}
	}
	for(int i=1; i<res; i++)
		cout<<begintree[i]<<" "<<endtree[i]<<endl;
	cout<<minw;
}
void InputMatrix();
void InputEdgeList();
void DFS(int u);
void OutputDFS(int u);
void BFS(int u);
void OutputBFS(int u);
int ConnectivePart();
void OutputConnectivePart();
void FindingWayByDFS(int u);
void FindingWayByBFS(int u);
void OutputWay(int u, int n);
int CountingVertexByDFS(int u);//Đếm đỉnh theo DFS 
int CountingVertexByBFS(int u);
bool StrongConnection();
void ScanningPillar();//đỉnh trụ
void ScanningBridge();//cạnh cầu
bool EulerProcessCheck();
void EulerProcess(int u);
bool EulerWayCheck();
void EulerWay();
void OutputHamilton();
void Hamilton(int u);
void TreeDFS(int u);
void TreeBFS(int u);
int Origin(int u);
void Fusion(int u, int n);
void Sort();
void Kruskal();
void RefreshPrim();
void Prim(int u);
void Input_adjacency_list();// nhập danh sách kề
int main(){
	//InputMatrix();
	Input_adjacency_list(); // ket thuc dong nhap bang dau thang
	for (int i = 1; i <= v;i++){
		for (int j = 1; j <= v;j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	//	EulerProcess(1);
	//	FindingWayByDFS(2);
	//	OutputWay(2, 11);
	//	Prim(5);
	//	FindingWayByDFS(7);
	//	ScanningPillar();
	// ScanningBridge();
	//	OutputDFS(1);
	//	Kruskal();
	//	Kruskal();
	// Prim(8);
	// EulerWay();
	// EulerProcess(6);
	// Hamilton(1);
	// ScanningPillar();
	// Hamilton(1);
	// OutputHamilton();
	return 0;
}