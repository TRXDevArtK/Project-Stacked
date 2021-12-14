#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *kiri;
	Node *kanan;
};

int count(Node *root){
	if(root==NULL)
		return 0;
	else
		return count(root->kiri) + count(root->kanan) +1;
}

int height(Node *root){
	if(root==NULL)
		return -1;
	else{
		int u = height(root->kiri);
		int v = height(root->kanan);
		if(u>v)
			return u+1;
		else
			return v+1;
	}
}
	
void tambah(Node **root, int databaru)
{
	if((*root) == NULL){
		Node *baru;
		baru = new Node;
		baru->data = databaru;
		baru->kiri = NULL;
		baru->kanan = NULL;
		(*root)=baru;
		(*root)->kiri = NULL;
		(*root)->kanan = NULL;
		printf("Data sudah ditambahkan!");
	} 
	else if(databaru < (*root)->data)
		tambah(&(*root)->kiri,databaru);
	else if(databaru > (*root)->data)
		tambah(&(*root)->kanan,databaru);
	else if(databaru == (*root)->data)
		printf("Data sudah ada!");
}

void preOrder(Node *root){
	if(root != NULL){
		printf("%d  ",root->data);
		preOrder(root->kiri);
		preOrder(root->kanan);
	}
}

void inOrder(Node *root){
	if(root != NULL){
		inOrder(root->kiri);
		printf("%d  ",root->data);
		inOrder(root->kanan);
	}
}

void postOrder(Node *root){
	if(root != NULL){
		postOrder(root->kiri);
		postOrder(root->kanan);
		printf("%d  ",root->data);
	}
}

void search(Node **root, int cari){
	if((*root) == NULL){
		printf("Data tidak ditemukan!");
	} 
	else if(cari < (*root)->data)
		search(&(*root)->kiri,cari);
	else if(cari > (*root)->data)
		search(&(*root)->kanan,cari);
	else if(cari == (*root)->data)
		printf("Data ditemukan!");
}

int min(Node **root){
	if((*root)->kiri == NULL)
		return (*root)->data;
	else
		return min(&(*root)->kiri);
}

void hapus(Node **root, int del, Node *parent){
	if((*root) == NULL)
		printf("Data tidak ada!");
	else if(del < (*root)->data){
		parent=(*root);
		hapus(&(*root)->kiri,del,parent);
	}
	else if(del > (*root)->data){
		parent=(*root);
		hapus(&(*root)->kanan,del,parent);
	}
	else if(del == (*root)->data){
		Node *child;
		
		if((*root)->kiri == NULL && (*root)->kanan == NULL){
			(*root)=NULL;
			cout<<"Data "<<del<<" sudah dihapus!";
		}
		else if((*root)->kanan == NULL){
			child = (*root)->kiri;
			(*root)=NULL;
			if(child->data < parent->data)
				parent->kiri = child;
			else if(child->data > parent->data)
				parent->kanan = child;
			cout<<"Data "<<del<<" sudah dihapus!";
		}
		else if((*root)->kiri == NULL){
			child = (*root)->kanan;
			(*root)=NULL;
			if(child->data < parent->data)
				parent->kiri = child;
			else if(child->data > parent->data)
				parent->kanan = child;
			cout<<"Data "<<del<<" sudah dihapus!";
		}
		else if((*root)->kiri != NULL && (*root)->kanan != NULL){
			(*root)->data = min(&(*root)->kanan);
			cout<<"Data "<<del<<" sudah dihapus!";
			hapus(&(*root)->kanan, (*root)->data, NULL);
		}
	}
}

main(){
	int pil, cari, del;
	Node *pohon;
	pohon=NULL;
	do{
		int data;
		system("cls");
		printf("\n       MAIN MENU");
		printf("\n========================\n");
		printf("1. Menambah data\n");
		printf("2. Transverse\n");
		printf("3. Lihat tinggi Tree\n");
		printf("4. Lihat jumlah Node\n");
		printf("5. Cari data\n");
		printf("6. Menghapus data\n");
		printf("7. Mengkosongkan Tree\n");
		printf("8. Exit\n");
		printf("========================\n");
		printf("Masukkan pilihan : " ); 
		scanf("%d", &pil);
		
		switch(pil){
		case 1:
			printf("\nMasukkan data baru : ");
			scanf("%d", &data);
			tambah(&pohon, data);
			break;
		case 2:			
			printf("\n+ pre-Order  : ");
			if(pohon!=NULL)	preOrder(pohon);
			else printf("Tree masih kosong!!");
			
			printf("\n+ in-Order   : ");
			if(pohon!=NULL) inOrder(pohon);
			else printf("Tree masih kosong!!");
			
			printf("\n+ post-Order : ");
			if(pohon!=NULL) postOrder(pohon);
			else printf("Tree masih kosong!!");
			break;
		case 3: 
			cout<<"Tinggi Tree  : "<<height(pohon)<<endl;
			break;
		case 4:
			cout<<"Jumlah Node  : "<<count(pohon)<<endl;
			break;
		case 5: 
			printf("\nMasukkan data yg dicari : ");
			scanf("%d", &cari);
			search(&pohon, cari);
			break;
		case 6:
			printf("\nMasukkan data yg dihapus : ");
			scanf("%d", &del);
			hapus(&pohon, del, NULL);
			break;
		case 7:
			pohon=NULL;
			printf("\nTree sudah dikosongkan!!");
			break;
		}
		getch();
	}
	while(pil!=8);
}
