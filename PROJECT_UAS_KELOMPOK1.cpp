#include <windows.h>     
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
using namespace std;

int kode_pilihan, memilih, pilihan, kode[20], memori[10], kdWarna, kdMemory;
int ongkir, pilih, a, n, m, i;
char username[50], warna[20], nabar[20], nm[30], almt[25], nohp[14], kota[25], ul, lan, checkout;
long int total_byr=0;
long int ttl[50];
string user, password, str;

struct jualan{
	string nabar;
	string warna;
	int hrg[20];
	int jmlh[20];
	int memori;
};
jualan online[10];

void gotoxy(int x, int y){
	COORD coord;
    coord.X = x;                          
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delay(unsigned int mseconds){
    clock_t goal=mseconds+clock();
	while(goal>clock());
}

void tampilan(){
	cout<<"=================================================\n";
	cout<<"```````````       FINAL PROJECT      ````````````\n";
	cout<<"`````````` PROGRAM E-COMMERCE SERVICE ```````````\n";
	cout<<"=================================================\n";
	gotoxy(5,6);cout<<"Daftar Belanja Anda";
	gotoxy(5,7);cout<<"============================================================================================================================="<<endl;
 	gotoxy(5,8);cout<<"| No |         Model         |       Warna       |    Memori    |       Harga        |  Jumlah Beli  |        Total         |"<<endl;
	gotoxy(5,9);cout<<"============================================================================================================================="<<endl;
} 

void bayar(){
	cout<<"     Layanan Tranfer"<<endl;
    cout<<"     1. BRI "<<endl;
    cout<<"     2. BNI "<<endl;
    cout<<"     3. Mandiri "<<endl;
    cout<<"     4. COD "<<endl;
    cout<<"     Silahkan Pilih Metode Pembayaran [1/2/3/4] : ";cin>>pilih;
    while (pilih < 1 || pilih > 4){
    	cout<<"     Metode Pembayaran Tidak Tersedia"<<endl;
    	cout<<"     Silahkan Pilih Metode Pembayaran [1/2/3/4] : ";cin>>pilih;
	}
	
    if(pilih==1&&pilih==01){
		cout<<"     No.Rekening : 41352443656 "<<endl<<endl<<endl;
	    cout<<"                                                               \t      Terima Kasih Sudah Berbelanja di P3E STORE \n"; 
        cout<<"                                                               \t              Pesanan Akan Segera Dikirim         \n";
	    cout<<"                                                               \t            ****Barang Yang Sudah Dibeli****      \n";
	    cout<<"                                                               \t             ***Tidak Dapat Dikembalikan***       \n";
	    cout<<"                                                               \t\t\n";}
	else if(pilih==2&&pilih==02){
	    cout<<"     No.Rekening : 35154656565 "<<endl<<endl<<endl;
	    cout<<"                                                               \t  Terima Kasih Sudah Berbelanja di P3E STORE \n"; 
	    cout<<"                                                               \t         Pesanan Akan Segera Dikirim         \n";
	    cout<<"                                                               \t       ****Barang Yang Sudah Dibeli****      \n";
	    cout<<"                                                               \t        ***Tidak Dapat Dikembalikan***       \n";
	    cout<<"                                                               \t\t\n";}
	else if(pilih==3&&pilih==03){
	    cout<<"     No.Rekening : 12314235435 "<<endl<<endl<<endl;
	    cout<<"                                                               \t  Terima Kasih Sudah Berbelanja di P3E STORE \n"; 
	    cout<<"                                                               \t        Pesanan Akan Segera Dikirim         \n";
	    cout<<"                                                               \t      ****Barang Yang Sudah Dibeli****      \n";
	    cout<<"                                                               \t       ***Tidak Dapat Dikembalikan***       \n";
	    cout<<"                                                               \t\t\n";}
	else if(pilih==4&&pilih==04){
	    cout<<endl<<endl<<endl;
	    cout<<"                                                               \t  Terima Kasih Sudah Berbelanja di P3E STORE \n"; 
	    cout<<"                                                               \t         Pesanan Akan Segera Dikirim         \n";
	    cout<<"                                                               \t       ****Barang Yang Sudah Dibeli****      \n";
	    cout<<"                                                               \t        ***Tidak Dapat Dikembalikan***       \n";
	    cout<<"                                                               \t\t\n";}
}

void iOS();

void KodeWarnaiOS(){
	if (kode[a] == 1 || kode[a] == 2) {
		while (kdWarna < 1 || kdWarna > 4){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdWarna;
		}
		
	} else if (kode[a] == 3 || kode[a] == 4) {
		while (kdWarna < 5 || kdWarna > 9){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdWarna;
		}
		
	} else if (kode[a] == 5 || kode[a] == 6) {
		while (kdWarna != 2 && kdWarna != 3 && kdWarna != 4 && kdWarna != 10){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdWarna;
		}
		
	} else if (kode[a] == 7 || kode[a] == 8) {
		while (kdWarna != 6 && kdWarna != 11 && kdWarna != 12 && kdWarna != 13 && kdWarna != 14 && kdWarna != 9){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdWarna;
		}
		
	} else if (kode[a] == 9 || kode[a] == 10) {
		while (kdWarna != 2 && kdWarna != 3 && kdWarna != 15 && kdWarna != 16){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdWarna;
		}
		
	} else if (kode[a] == 11) {
		while (kdWarna != 11 && kdWarna != 12 && kdWarna != 13 && kdWarna != 17 && kdWarna != 14 && kdWarna != 9){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdWarna;
		}
		
	} else if (kode[a] == 12 || kode[a] == 13) {
		while (kdWarna != 2 && kdWarna != 3 && kdWarna != 16){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdWarna;
		}
		
	} else if (kode[a] == 14) {
		while (kdWarna != 18 && kdWarna != 13 && kdWarna != 17 && kdWarna != 14 && kdWarna != 9) {
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdWarna;
		}
		
	} else if (kode[a] == 15) {
		while (kdWarna != 2 && kdWarna != 16){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdWarna;
		}
		
	} else if (kode[a] == 16 || kode[a] == 17) {
		while (kdWarna != 2 && kdWarna != 3 && kdWarna != 16 && kdWarna != 9){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdWarna;
		}
	}
		
	if (kdWarna == 1) {
		online[a].warna = "Sierra Blue";
			
	} else if (kdWarna == 2) {
		online[a].warna = "Silver";
			
	} else if (kdWarna == 3) {
		online[a].warna = "Gold";
			
	} else if (kdWarna == 4) {
		online[a].warna = "Graphite";
		
	} else if (kdWarna == 5) {
		online[a].warna = "Pink";
			
	} else if (kdWarna == 6) {
		online[a].warna = "Blue";
			
	} else if (kdWarna == 7) {
		online[a].warna = "Midnight";
			
	} else if (kdWarna == 8) {
		online[a].warna = "Starlight";
			
	} else if (kdWarna == 9) {
		online[a].warna = "Red";
			
	} else if (kdWarna == 10) {
		online[a].warna = "Pacific Blue";
			
	} else if (kdWarna == 11) {
		online[a].warna = "Green";
			
	} else if (kdWarna == 12) {
		online[a].warna = "Purple";
			
	} else if (kdWarna == 13) {
		online[a].warna = "White";
			
	} else if (kdWarna == 14) {
		online[a].warna = "Black";
			
	} else if (kdWarna == 15) {
		online[a].warna = "Midnight Green";
			
	} else if (kdWarna == 16) {
		online[a].warna = "Space Grey";
			
	} else if (kdWarna == 17) {
		online[a].warna = "Yellow";
			
	} else if (kdWarna == 18) {
		online[a].warna = "Blue Coral";		
	}
	
}

void KodeMemoryiOS(){
	if (kode[a] == 1 || kode[a] == 2) {
		while (kdMemory < 2 || kdMemory > 5){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdMemory;
		}
		
	} else if (kode[a] == 3 || kode[a] == 4 || kode[a] == 5 || kode[a] == 6 || kode[a] == 7) {
		while (kdMemory < 2 || kdMemory > 4){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdMemory;
		}
		
	} else if (kode[a] == 8 || kode[a] == 11 || kode[a] == 16 || kode[a] == 17) {
		while (kdMemory < 1 || kdMemory > 3){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdMemory;
		}
		
	} else if (kode[a] == 9 || kode[a] == 10 || kode[a] == 12|| kode[a] == 13) {
		while (kdMemory != 1 && kdMemory != 3 && kdMemory != 4){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdMemory;
		}
		
	} else if (kode[a] == 14) {
		while (kdMemory != 1 && kdMemory != 2){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdMemory;
		}
		
	} else if (kode[a] == 15) {
		while (kdMemory != 1 && kdMemory != 3){
			cout<<" Warna Tidak Tersedia!"<<endl<<endl;
			cout<<" Kode Warna    :  ";cin>>kdMemory;
		}
		
	}
	
	if (kdMemory == 1) {
		online[a].memori = 64;
			
	} else if (kdMemory == 2) {
		online[a].memori = 128;
			
	} else if (kdMemory == 3) {
		online[a].memori = 256;
			
	} else if (kdMemory == 4) {
		online[a].memori = 512;
			
	} else if (kdMemory == 5) {
		online[a].memori = 1000;
	}
}

void iOS(){
	iOS :
	cout<<" =========================================================================================================================================================================="<<endl;
    cout<<" |                                                                        Daftar Harga iPhone                                                                             |"<<endl;
    cout<<" =========================================================================================================================================================================="<<endl;
    cout<<" | Kd |       Model         |                    Warna                   |              Memori             |                              Harga                           |"<<endl;
    cout<<" --------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<" | 1  |  iPhone 13 Pro Max  |  Sierra Blue, Silver, Gold, Graphite       | 128 GB, 256 GB, 512 GB, 1000 GB | Rp 19.999.000; Rp 22.999.000; Rp 26.999.000; Rp 30.999.000 |"<<endl;
    cout<<" | 2  |  iPhone 13 Pro      |  Sierra Blue, Silver, Gold, Graphite       | 128 GB, 256 GB, 512 GB, 1000 GB |  Rp 18.499.000; Rp 20.999.000; Rp 24.999.000; Rp 28.999.000  |"<<endl;
    cout<<" | 3  |  iPhone 13          |  Pink, Blue, Midnight, Starlight, Red      | 128 GB, 256 GB, 512 GB          |  Rp 14.999.000; Rp 17.499.000; Rp 20.999.000                 |"<<endl;
    cout<<" | 4  |  iPhone 13 Mini     |  Pink, Blue, Midnight, Starlight, Red      | 128 GB, 256 GB, 512 GB          |  Rp 12.999.000; Rp 15.499.000; Rp 18.999.000                 |"<<endl;
    cout<<" | 5  |  iPhone 12 Pro Max  |  Silver, Gold, Graphite, Pacific Blue      | 128 GB, 256 GB, 512 GB          |  Rp 17.799.000; Rp 20.299.000; Rp 24.299.000                 |"<<endl;
    cout<<" | 6  |  iPhone 12 Pro      |  Silver, Gold, Graphite, Pacific Blue      | 128 GB, 256 GB, 512 GB          |  Rp 15.799.000; Rp 18.299.000; Rp 22.299.000                 |"<<endl;
    cout<<" | 7  |  iPhone 12          |  Blue, Green, Purple, White, Black, Red    | 128 GB, 256 GB, 512 GB          |  Rp 12.499.000; Rp 14.499.000; Rp 15.999.000                 |"<<endl;
    cout<<" | 8  |  iPhone 12 Mini     |  Blue, Green, Purple, White, Black, Red    | 64 GB, 128 GB, 256 GB           |  Rp 10.499.000; Rp 11.999.000; Rp 13.499.000                 |"<<endl;
    cout<<" | 9  |  iPhone 11 Pro Max  |  Silver, Gold, Midnight Green, Space Grey  | 64 GB, 256 GB, 512 GB           |  Rp 16.499.000; Rp 19.999.000; Rp 22.999.000                 |"<<endl;
    cout<<" | 10 |  iPhone 11 Pro      |  Silver, Gold, Midnight Green, Space Grey  | 64 GB, 256 GB, 512 GB           |  Rp 15.499.000; Rp 18.499.000; Rp 19.999.000                 |"<<endl;
    cout<<" | 11 |  iPhone 11          |  Green, Purple, White, Yellow, Black, Red  | 64 GB, 128 GB, 256 GB           |  Rp 9.999.000; Rp 10.499.000; Rp 12.999.000                  |"<<endl;
    cout<<" | 12 |  iPhone XS Max      |  Silver, Gold, Space Grey                  | 64 GB, 256 GB, 512 GB           |  Rp 12.999.000; Rp 15.999.000; Rp 19.999.000                 |"<<endl;
    cout<<" | 13 |  iPhone XS          |  Silver, Gold, Space Grey                  | 64 GB, 256 GB, 512 GB           |  Rp 11.999.000; Rp 14.999.000; Rp 18.999.000                 |"<<endl;
    cout<<" | 14 |  iPhone XR          |  Blue Coral, White, Yellow, Black, Red     | 64 GB, 128 GB                   |  Rp 7.499.000; Rp 8.599.000                                  |"<<endl; 
    cout<<" | 15 |  iPhone X           |  Silver, Space Grey                        | 64 GB, 256 GB                   |  Rp 10.999.000; Rp 13.999.000                                |"<<endl;
    cout<<" | 16 |  iPhone 8 Plus      |  Silver, Gold, Space Grey, Red             | 64 GB, 128 GB, 256 GB           |  Rp 9.499.000; Rp 11.999.000; Rp 12.999.000                  |"<<endl;
    cout<<" | 17 |  iPhone 8           |  Silver, Gold, Space Grey, Red             | 64 GB, 128 GB, 256 GB           |  Rp 7.499.000; Rp 9.999.000; Rp 10.499.000                   |"<<endl;
    cout<<" =========================================================================================================================================================================="<<endl;
    cout<<" Note:"<<endl;
    cout<<" Harap Masukkan Warna Yang Tersedia, Jika Memilih Warna Selain Yang Ada Di Menu, Maka Akan Dikirim Secara Random"<<endl<<endl;
    
    belanja :
    cout<<" Masukkan Berapa Banyak Handphone Yang Ingin Anda Beli: ";cin>>n;
    while (n < 1){
    	cout<<" Invalid Input!"<<endl<<endl;
    	cout<<" Masukkan Berapa Banyak Handphone Yang Ingin Anda Beli: ";cin>>n;
	}

    for(a=1;a<=n;a++){
    	cout<<endl;
    	cout<<" Handphone ke-"<<a<<endl;
		cout<<" Kode Hanphone:  ";cin>>kode[a];
	 	
		while (kode[a] < 1 || kode[a] > 17){
			cout<<" Kode Hanphone Tidak Tersedia!"<<endl<<endl;
	 		cout<<" Kode Handphone:  ";cin>>kode[a];
		}
	
		if (kode[a] == 1) {
			online[a].nabar = "iPhone 13 Pro Max";
			
		} else if (kode[a] == 2) {
			online[a].nabar = "iPhone 13 Pro";
			
		} else if (kode[a] == 3) {
			online[a].nabar = "iPhone 13";
			
		} else if (kode[a] == 4) {
			online[a].nabar = "iPhone 13 Mini";
			
		} else if (kode[a] == 5) {
			online[a].nabar = "iPhone 12 Pro Max";
			
		} else if (kode[a] == 6) {
			online[a].nabar = "iPhone 12 Pro";
			
		} else if (kode[a] == 7) {
			online[a].nabar = "iPhone 12";
			
		} else if (kode[a] == 8) {
			online[a].nabar = "iPhone 12 Mini";
			
		} else if (kode[a] == 9) {
			online[a].nabar = "iPhone 11 Pro Max";
			
		} else if (kode[a] == 10) {
			online[a].nabar = "iPhone 11 Pro";
			
		} else if (kode[a] == 11) {
			online[a].nabar = "iPhone 11";
			
		} else if (kode[a] == 12) {
			online[a].nabar = "iPhone XS Max";
			
		} else if (kode[a] == 13) {
			online[a].nabar = "iPhone XS";
			
		} else if (kode[a] == 14) {
			online[a].nabar = "iPhone XR";
			
		} else if (kode[a] == 15) {
			online[a].nabar = "iPhone X";
			
		} else if (kode[a] == 16) {
			online[a].nabar = "iPhone 8 Plus";
			
		} else if (kode[a] == 17) {
			online[a].nabar = "iPhone 8";
		}
	 
		cout<<" Model        :  "<<online[a].nabar<<endl<<endl;
		
		cout<<" Kode Warna   :  ";cin>>kdWarna;
		KodeWarnaiOS();
		cout<<" Warna        :  "<<online[a].warna<<endl<<endl;
		
		cout<<" Kode Memori  :  ";cin>>kdMemory;
		KodeMemoryiOS();
		cout<<" Memori       :  "<<online[a].memori<<endl<<endl;
	 	
		if(kode[a]==1){
			if(online[a].memori==128){
	    		online[a].hrg[a]=19999000;
	    		
		    } else if(online[a].memori==256) {
		   		online[a].hrg[a]=22999000;
		   		
		    } else if(online[a].memori==512) {
		   		online[a].hrg[a]=26999000;
		   		
		    } else if(online[a].memori==1000) {
		   		online[a].hrg[a]=30999000;	
		    }
	    }
	  
	    if(kode[a]==2){
	       if(online[a].memori==128){
	    		online[a].hrg[a]=18499000;
	    		
		   } else if(online[a].memori==256) {
		   		online[a].hrg[a]=20999000;
		   		
		   } else if(online[a].memori==512) {
		   		online[a].hrg[a]=24999000;
		   		
		   } else if(online[a].memori==1000) {
		   		online[a].hrg[a]=28999000;	
		   }
	    }
	    
	    if(kode[a]==3){
	    	if(online[a].memori==128){
	    		online[a].hrg[a]=14999000;
	    		
		  	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=17499000;
		   		
		   	} else if(online[a].memori==512) {
		   		online[a].hrg[a]=20999000;
		   		
		   	} 
	    }
	    
	    if(kode[a]==4){
	    	if(online[a].memori==128){
	    		online[a].hrg[a]=12999000;
	    		
		  	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=15499000;
		   		
		   	} else if(online[a].memori==512) {
		   		online[a].hrg[a]=18999000;
		   		
		   	} 
	    }
	    
	    if(kode[a]==5){
	    	if(online[a].memori==128){
	    		online[a].hrg[a]=17799000;
	    		
		  	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=20299000;
		   		
		   	} else if(online[a].memori==512) {
		   		online[a].hrg[a]=24299000;
		   		
		   	} 
	    }
	    
	    if(kode[a]==6){
	    	if(online[a].memori==128){
	    		online[a].hrg[a]=15799000;
	    		
		  	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=18299000;
		   		
		   	} else if(online[a].memori==512) {
		   		online[a].hrg[a]=22299000;
		   		
		   	} 
	    }
	    
	    if(kode[a]==7){
	    	if(online[a].memori==128){
	    		online[a].hrg[a]=12499000;
	    		
		  	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=14499000;
		   		
		   	} else if(online[a].memori==512) {
		   		online[a].hrg[a]=15999000;
		   		
		   	}
	    }
	    
	    if(kode[a]==8){
	    	if(online[a].memori==64){
	    		online[a].hrg[a]=10499000;
	    		
		  	} else if(online[a].memori==128) {
		   		online[a].hrg[a]=11499000;
		   		
		   	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=13499000;
		   		
		   	}
	    }
	    
		if(kode[a]==9){
			if(online[a].memori==64){
	    		online[a].hrg[a]=16499000;
	    		
		  	} else if(online[a].memori==128) {
		   		online[a].hrg[a]=19999000;
		   		
		   	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=22999000;
		   		
		   	}
	    }
	    
	    if(kode[a]==10){
	    	if(online[a].memori==64){
	    		online[a].hrg[a]=15499000;
	    		
		  	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=18499000;
		   		
		   	} else if(online[a].memori==512) {
		   		online[a].hrg[a]=19999000;
		   		
		   	}
	    }
	    
	    if(kode[a]==11){
	    	if(online[a].memori==64){
	    		online[a].hrg[a]=9999000;
	    		
		  	} else if(online[a].memori==128) {
		   		online[a].hrg[a]=10499000;
		   		
		   	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=12999000;
		   		
		   	}
	    }
	    
	    if(kode[a]==12){
	    	if(online[a].memori==64){
	    		online[a].hrg[a]=12999000;
	    		
		  	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=15999000;
		   		
		   	} else if(online[a].memori==512) {
		   		online[a].hrg[a]=19999000;
		   		
		   	}
	    }
	    
	    if(kode[a]==13){
	    	if(online[a].memori==64){
	    		online[a].hrg[a]=11999000;
	    		
		  	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=14999000;
		   		
		   	} else if(online[a].memori==512) {
		   		online[a].hrg[a]=18999000;
		   		
		   	}
	    }
	    
	    if(kode[a]==14){
	    	if(online[a].memori==64){
	    		online[a].hrg[a]=7499000;
	    		
		  	} else if(online[a].memori==128) {
		   		online[a].hrg[a]=8599000;
		   		
		   	}
	    }
	    
	    if(kode[a]==15){
	    	if(online[a].memori==64){
	    		online[a].hrg[a]=10999000;
	    		
		  	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=13999000;
		   		
		   	}
	    }
	    
	    if(kode[a]==16){
	    	if(online[a].memori==64){
	    		online[a].hrg[a]=9499000;
	    		
		  	} else if(online[a].memori==128) {
		   		online[a].hrg[a]=11999000;
		   		
		   	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=12999000;
		   		
		   	}
	    }
	    
	    if(kode[a]==17){
	    	if(online[a].memori==64){
	    		online[a].hrg[a]=7499000;
	    		
		  	} else if(online[a].memori==128) {
		   		online[a].hrg[a]=9999000;
		   		
		   	} else if(online[a].memori==256) {
		   		online[a].hrg[a]=10499000;
		   		
		   	}
	    }
     
		cout<<" Harga        :  Rp "<<online[a].hrg[a]<<endl;
		cout<<" Jumlah Beli  :  ";cin>>online[a].jmlh[a];
		
		while (online[a].jmlh[a] < 1){
		 	cout<<" Minimal Pembelian 1 Barang!"<<endl<<endl;
		 	cout<<" Jumlah Beli  :  ";cin>>online[a].jmlh[a];
		}
	 
		ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
		cout<<endl;
	}
	
	cout<<" Lanjut Berbelanja [y/t] : ";cin>>lan;
	if(lan=='Y'||lan=='y'){
		system("cls");
		tampilan();
	 	for(a=1;a<=n;a++){
			gotoxy(5,9+a);cout<<"|"; 
		 	gotoxy(7,9+a);cout<<a;
			gotoxy(10,9+a);cout<<"|";
	 		cout<<online[a].nabar;
			gotoxy(34,9+a);cout<<"|";
		 	gotoxy(36,9+a);cout<<online[a].warna;
			gotoxy(54,9+a);cout<<"|";
	 		gotoxy(56,9+a);cout<<online[a].memori<<" GB";
			gotoxy(69,9+a);cout<<"|";
			gotoxy(71,9+a);cout<<"Rp "<<online[a].hrg[a];
	 		gotoxy(90,9+a);cout<<"|";
	 		gotoxy(92,9+a);cout<<online[a].jmlh[a];
		 	gotoxy(106,9+a);cout<<"|";
		 	ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
			gotoxy(108,9+a);cout<<"Rp "<<ttl[a];
	 		gotoxy(129,9+a);cout<<"|";
		 	total_byr=total_byr+ttl[a];
		}
		cout<<endl;
		 	
		ongkir=25000;
		cout<<"     ============================================================================================================================="<<endl;        
		cout<<"     |                                          Ongkir                                                    |"<<" Rp "<<ongkir<<"             |"<<endl; 
		cout<<"     ============================================================================================================================="<<endl;        
	    total_byr=total_byr+ttl[a]+ongkir;
		cout<<"     |                                       Total Belanja                                                |"<<" Rp "<<total_byr<<endl;
	    cout<<"     ============================================================================================================================="<<endl<<endl;
	    cout<<"     Data Yang Anda Inputkan Akan Digunakan Dalam Proses Transaksi Dan Pengiriman."<<endl;
	   	cout<<"     Kerahasiaan Data Akan Menjadi Tanggung Jawab Perusahaan."<<endl<<endl<<endl;
	 	cin.ignore();
	   	cout<<"     Nama           :  ";cin.getline(nm,30);
	    cout<<"     Alamat Tujuan  :  ";cin.getline(almt,30);
	   	cout<<"     No Hp          :  ";cin>>nohp;
	   	cout<<endl;
		cout<<"     Note:"<<endl;
		cout<<"     Lanjut Checkout [y/t] : "; cin>>checkout;
		if(checkout=='Y'||checkout=='y'){
		 	cout<<endl<<endl;
	     	bayar();
		}
	}
}

void Samsung(){
	Samsung :
	cout<<"  ========================================================================================================================================================================"<<endl;
	cout<<"  |                                                                      Daftar Harga Handphone Samsung                                                                  |"<<endl;
	cout<<"  ========================================================================================================================================================================"<<endl;
	cout<<"  | Kd |          Model         |                     Warna                     |                   Memori                 |                     Harga                   |"<<endl;
	cout<<"  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"  | 1  | Galaxy Z Fold3 5G      | Phantom Black, Phantom Green, Phantom Silver  | 12 GB+256 GB, 12 GB+512 GB               | Rp 24.999.0000; Rp. 26.999.000              |"<<endl;
	cout<<"  | 2  | Galaxy Z Flip3 5G      | Cream, Phantom Black, Green, Lavender         | 8 GB+128 GB, 8 GB+256 GB                 | Rp 14.999.0000; Rp. 15.999.000              |"<<endl;
	cout<<"  | 3  | Galaxy S21+ 5G         | Phantom Violet, Phantom Black, Phantom Silver | 8 GB+128 GB, 8 GB+256 GB                 | Rp 15.999.000; Rp 16.999.000                |"<<endl;
	cout<<"  | 4  | Galaxy S21 Ultra 5G    | Pink, Blue, Midnight, Starlight, Red          | 12 GB+128 GB, 12 GB+256 GB, 16 GB+512 GB | Rp 18.999.000; Rp 19.999.000; Rp 21.999.000 |"<<endl;
	cout<<"  | 5  | Galaxy S21 5G          | Phantom Violet, P.Gray, P.White, P. Pink      | 8 GB+256 GB                              | Rp 13.999.000                               |"<<endl;
	cout<<"  | 6  | Galaxy Note20 Ultra 5G | Mystic Bronze, Mistic Black                   | 12 GB+256 GB & 12GB+ 512 GB              | Rp 16.999.000; Rp 18.999.000                |"<<endl;
	cout<<"  | 7  | Galaxy Note20 Ultra    | Mystic Bronze, Mistic Green, Mystic Gray      | 8 GB+256 GB & 8 GB+512 GB                | Rp 17.999.000; Rp 19.999.000                |"<<endl;
	cout<<"  | 8  | Galaxy Note20          | Mystic Bronze, Mistic Green, Mystic Gray      | 8 GB+256 GB                              | Rp 14.499.000                               |"<<endl;
	cout<<"  | 9  | Galaxy A72             | Awesome Black, A.Blue, A.Violet, A.White      | 8 GB+128 GB, 8 GB+256 GB                 | Rp 4.999.000; Rp 5.399.000                  |"<<endl;
	cout<<"  | 10 | Galaxy A52             | Awesome Black, A.Blue, A.Violet, A.White      | 8 GB+128 GB, 8 GB+256 GB                 | Rp 5.699.000; Rp 6.099.000                  |"<<endl;
	cout<<"  | 11 | Galaxy A32             | Awesome Black, Awesome White                  | 6 GB+128 GB, 8 GB+128 GB                 | Rp 3.999.000; Rp 3.799.000                  |"<<endl;
	cout<<"  | 12 | Galaxy M52 5G          | Black, Light Blue, White                      | 8 GB+128 GB                              | Rp 5.399.000                                |"<<endl;
	cout<<"  | 13 | Galaxy M32             | Black, Light Blue, White                      | 6 GB+128 GB, 8 GB+128 GB                 | Rp 2.999.000; Rp 3.299.000                  |"<<endl;
	cout<<"  ========================================================================================================================================================================"<<endl;
	cout<<"  Note:"<<endl;
	cout<<"  Harap Masukkan Warna Yang Tersedia, Jika Memilih Warna Selain Yang Ada Di Menu, Maka Akan Dikirim Secara Random"<<endl;
	cout<<"  Untuk kode 1-10 & 12 pilih jumlah RAM yang tersedia pada model"<<endl;
	cout<<"  Untuk kode 11 & 13 pilih junlah ROM yang tersedia pada model"<<endl<<endl;
	 	
	cout<<"  Masukkan Berapa Banyak Handphone Yang Ingin Anda Beli: ";cin>>n;
    while (n < 1){
    	cout<<"  Invalid Input!"<<endl<<endl;
     	cout<<"  Masukkan Berapa Banyak Handphone Yang Ingin Anda Beli: ";cin>>n;
	}
     
	for(a=1;a<=n;a++){
		cout<<endl;
		cout<<"  Handphone ke-"<<a<<endl;
		cout<<"  Kode Hanphone:  ";cin>>kode[a];
	 
	 	while (kode[a] < 1 || kode[a] > 13){
	 		cout<<"  Kode HP Tidak Tersedia!"<<endl<<endl;
	 		cout<<"  Kode Hanphone:  ";cin>>kode[a];
		}
	 
	 cin.ignore();
//	 cout<<"  Model       :  ";gets(online[a].nabar[a]);
//	 cout<<"  Warna       :  ";gets(online[a].warna[a]);
	 cout<<"  Memori      :  ";cin>>memori[a];
	 if(kode[a]==1){
	 	{if(memori[a]==256)
		 online[a].hrg[a]=24999000;
	  
		 else if(memori[a]==512)
		 online[a].hrg[a]=26999000;
	  
		 else
		 online[a].hrg[a]=0;}
     }
    	 
     if(kode[a]==2){
    	{if(memori[a]==128)
		 online[a].hrg[a]=14999000;
	  
	 	 else if(memori[a]==256)
	 	 online[a].hrg[a]=15999000;
		 
		 else
		 online[a].hrg[a]=0;}
  		}
    
    if(kode[a]==3){
    	{if(memori[a]==128)
	 	 online[a].hrg[a]=15999000;
	  
	 	 else if(memori[a]==256)
	 	 online[a].hrg[a]=16999000;
	
	 	 else
	 	 online[a].hrg[a]=0;}
   	}
    
    if(kode[a]==4){
    	{if(memori[a]==128)
		 online[a].hrg[a]=18999000;
	  
		 else if(memori[a]==256)
		 online[a].hrg[a]=19999000;
		  
		 else if(memori[a]==512)
		 online[a].hrg[a]=21999000;
	
		 else
		 online[a].hrg[a]=0;}
   	}
    
    if(kode[a]==5){
   		{if(memori[a]==256)
		 online[a].hrg[a]=13999000;
	  
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==6){
   		{if(memori[a]==256)
		 online[a].hrg[a]=16999000;
	  
	 	 else if(memori[a]==512)
		 online[a].hrg[a]=18999000;
	 
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==7){
   		{if(memori[a]==256)
		 online[a].hrg[a]=17999000;
	  
	 	 else if(memori[a]==512)
		 online[a].hrg[a]=19999000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==8){
   		{if(memori[a]==256)
		 online[a].hrg[a]=14999000;
	  
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==9){
   		{if(memori[a]==128)
		 online[a].hrg[a]=4999000;
	  
	 	 else if(memori[a]==256)
		 online[a].hrg[a]=5399000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==10){
   		{if(memori[a]==128)
		 online[a].hrg[a]=5699000;
	  
	 	 else if(memori[a]==256)
		 online[a].hrg[a]=6099000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==11){
   		{if(memori[a]==128)
		 online[a].hrg[a]=3999000;
	  
	 	 else if(memori[a]==256)
		 online[a].hrg[a]=3799000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==12){
   		{if(memori[a]==128)
		 online[a].hrg[a]=5399000;
	  
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==13){ 
   		{if(memori[a]==128)
		 online[a].hrg[a]=2999000;
	  
	 	 else if(memori[a]==256)
		 online[a].hrg[a]=3299000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	cout<<"  Harga        :  Rp "<<online[a].hrg[a]<<endl;
  	
	while (online[a].jmlh[a] < 1){
		cout<<endl;
		cout<<"  Minimal Pembelian 1 Barang!"<<endl<<endl;
		cout<<"  Jumlah Beli  :  ";cin>>online[a].jmlh[a];}
	
	ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
	cout<<endl;
	}
	
	cout<<"  Lanjut Berbelanja [y/t] : ";cin>>lan;
	 if(lan=='Y'||lan=='y'){
	 	system("cls");
	 	tampilan();
	 	for(a=1;a<=n;a++){
			gotoxy(5,9+a);cout<<"|"; 
	 		gotoxy(7,9+a);cout<<a;
	 		gotoxy(10,9+a);cout<<"|";
	 		cout<<online[a].nabar[a];
			gotoxy(34,9+a);cout<<"|";
	 		gotoxy(36,9+a);cout<<online[a].warna[a];
	 		gotoxy(54,9+a);cout<<"|";
	 		gotoxy(56,9+a);cout<<memori[a]<<" GB";
			gotoxy(69,9+a);cout<<"|";
			gotoxy(71,9+a);cout<<"Rp "<<online[a].hrg[a];
	 		gotoxy(90,9+a);cout<<"|";
	 		gotoxy(92,9+a);cout<<online[a].jmlh[a];
	 		gotoxy(106,9+a);cout<<"|";
	 		ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
	 		gotoxy(108,9+a);cout<<"Rp "<<ttl[a];
	 		gotoxy(129,9+a);cout<<"|";
	 		total_byr=total_byr+ttl[a];}
	 		cout<<endl;
	 		ongkir=25000;
	 		cout<<"     ============================================================================================================================="<<endl;        
	 		cout<<"     |                                          Ongkir                                                    |"<<" Rp "<<ongkir<<"             |"<<endl; 
	 		cout<<"     ============================================================================================================================="<<endl;        
     		total_byr=total_byr+ttl[a]+ongkir;
	 		cout<<"     |                                      Total Belanja                                                 |"<<" Rp "<<total_byr<<endl;
     		cout<<"     ============================================================================================================================="<<endl<<endl;
     		cout<<"     Data Yang Anda Inputkan Akan Digunakan Dalam Proses Transaksi Dan Pengiriman."<<endl;
     		cout<<"     Kerahasiaan Data Akan Menjadi Tanggung Jawab Perusahaan."<<endl<<endl<<endl;
	 		cin.ignore();
     		cout<<"     Nama           :  ";cin.getline(nm,30);
     		cout<<"     Alamat Tujuan  :  ";cin.getline(almt,30);
     		cout<<"     No Hp          :  ";cin>>nohp;
     		cout<<endl;
			cout<<"     Note:"<<endl;
			cout<<"     Model Handphone Yang Tidak Sesuai dengan Kode Menu List, Maka Tidak Akan Dikirim & Jika Memesan Handphone Dengan Harga 0, Maka Tidak Akan Dikirim"<<endl;
			cout<<"     Jika Sudah Terlanjur Membayar, Maka Uang Akan Dikembalikan"<<endl<<endl;
			cout<<"     Lanjut Checkout [y/t] : "; cin>>checkout;
			if(checkout=='Y'||checkout=='y'){
		 		cout<<endl<<endl;
	     		bayar();}

	 	}
	 	
}

void Xiaomi(){
	 cout<<"   ======================================================================================================================================================================"<<endl;
	 cout<<"   |                                                                          Daftar Harga Xiaomi                                                                       |"<<endl;
     cout<<"   ======================================================================================================================================================================"<<endl;
	 cout<<"   | Kode |       Model       |                      Warna                      |                    Memori                 |                   Harga                   |"<<endl;
	 cout<<"   ----------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	 cout<<"   |  1   | Mi 11 Ultra       | Ceramic Black, Ceramic White                    | 12 GB + 256 GB                            |  Rp 16.999.000                            |"<<endl;
	 cout<<"   |  2   | Xiaomi 11T Pro    | Celestial Blue, Meteorite Gray, Moonlight White | 8 GB + 256 GB, 12 GB + 256 GB             |  Rp 6.999.0000; Rp. 7.499.000             |"<<endl;
	 cout<<"   |  3   | Xiaomi 11T        | Meteorite Gray                                  | 8 GB + 256 GB                             |  Rp 5.999.000                             |"<<endl;
     cout<<"   |  4   | Mi 11             | Horizon Blue                                    | 8 GB + 256 GB                             |  Rp 9.999.000                             |"<<endl;
	 cout<<"   |  5   | Mi 11 Lite        | Boba Black, Bubblegum Blue, Peach Pink          | 6 GB + 128 GB, 8 GB + 128 GB              |  Rp 3.799.000; Rp 3.999.000               |"<<endl;
     cout<<"   |  6   | Poco X3 GT        | Cloud White, Stargaze Black, Wave Blue          | 8 GB + 128 GB, 8 GB + 256 GB              |  Rp 4.299.000; Rp 4.699.000               |"<<endl;
	 cout<<"   |  7   | Poco X3 Pro       | Frost Blue, Metal Bronze, Phantom Black         | 6 GB + 128 GB, 8 GB + 256 GB              |  Rp 3.399.000; Rp 3.899.000               |"<<endl;
	 cout<<"   |  8   | Poco M3 Pro 5G    | Cool Blue, POCO Yellow, Power Black             | 4 GB + 64 GB, 6 GB + 128 GB               |  Rp 2.699.000; Rp 2.999.000               |"<<endl;
	 cout<<"   |  9   | Poco F3           | Arctic White, Deep Ocean Blue, Night Black      | 6 GB + 128 GB, 8 GB + 256 GB              |  Rp 4.899.000; Rp 5.499.000               |"<<endl;
     cout<<"   |  10  | Mi 10T Pro        | Black, Silver                                   | 8 GB + 128 GB, 8 GB + 256 GB              |  Rp 5.999.000; Rp 6.999.000               |"<<endl;
     cout<<"   |  11  | Xiaomi 10T        | Black, Silver                                   | 8 GB + 128 GB                             |  Rp 5.499.000                             |"<<endl;
     cout<<"   |  12  | Redmi 10          | Carbon Gray, Pebble White, Sea Blue             | 4 GB + 64 GB, 6 GB + 128 GB               |  Rp 2.099.000; Rp 2.499.000               |"<<endl;
	 cout<<"   |  13  | Redmi Note 10 5G  | Aurora Green, Chrome Silver, Graphite Gray      | 4 GB + 128 GB, 8 GB + 128 GB              |  Rp 2.799.000; Rp 3.099.000               |"<<endl;
	 cout<<"   |  14  | Redmi Note 10 Pro | Glacier Blue, Gradient Bronze, Onyx Gray        | 6 GB + 128 GB, 8 GB + 128 GB              |  Rp 3.699.000; Rp 3.899.000               |"<<endl;
	 cout<<"   |  15  | Redmi Note 9 Pro  | Blue, Green, Gray                               | 6 GB + 64 GB, 8 GB + 128 GB               |  Rp 2.899.000; Rp 3.499.000               |"<<endl;
	 cout<<"   |  16  | Redmi 9T          | Carbon Gray, Ocean Green, Orange, Twilight Blue | 4 GB + 64 GB, 6 GB + 128 GB               |  Rp 1.899.000; Rp 2.299.000               |"<<endl;
	 cout<<"   |  17  | Redmi 9C          | Midnight Gray, Sunrise Orange, Twilight Blue    | 3 GB + 32 GB, 4 GB + 64 GB                |  Rp 1.499.000; Rp 1.699.000               |"<<endl;
	 cout<<"   |  18  | Redmi 9A          | Blue, Dark Gray, Green                          | 2 GB + 32 GB, 3 GB + 32 GB                |  Rp 1.299.000; Rp 1.399.000               |"<<endl;
     cout<<"   ======================================================================================================================================================================"<<endl;
     cout<<"   Note:"<<endl;
     cout<<"   Harap Masukkan Warna Yang Tersedia, Jika Memilih Warna Selain Yang Ada Di Menu, Maka Akan Dikirim Secara Random"<<endl;
     cout<<"   Untuk kode 1-4, 6-11 & 16-17 pilih jumlah RAM yang tersedia pada model"<<endl;
	 cout<<"   Untuk kode 5, 12-14, & 18 pilih junlah ROM yang tersedia pada model"<<endl<<endl;
		
	 cout<<"   Masukkan Berapa Banyak Handphone Yang Ingin Anda Beli: ";cin>>n;
     while (n < 1){
     	cout<<"   Invalid Input!"<<endl<<endl;
     	cout<<"   Masukkan Berapa Banyak Handphone Yang Ingin Anda Beli: ";cin>>n;
	 }
     	
	 for(a=1;a<=n;a++){
	 cout<<endl;
	 cout<<"   Handphone ke-"<<a<<endl;
	 cout<<"   Kode        :  ";cin>>kode[a];
	 while (kode[a] < 1 || kode[a] > 18){
	 	cout<<"   Kode HP Tidak Tersedia!"<<endl<<endl;
	 	cout<<"   Kode         :  ";cin>>kode[a];}
	 	
	 cin.ignore();
//	 cout<<"   Model       :  ";gets(online[a].nabar[a]);
//	 cout<<"   Warna       :  ";gets(online[a].warna[a]);
	 cout<<"   Memori      :  ";cin>>memori[a];
	 if(kode[a]==1){
	    {if(memori[a]==256)
	  	 online[a].hrg[a]=16999000;
	  
		 else
		 online[a].hrg[a]=0;}
    }
    	 
    if(kode[a]==2){
    	{if(memori[a]==8)
		 online[a].hrg[a]=6999000;
	  
	 	 else if(memori[a]==12)
	 	 online[a].hrg[a]=7499000;
		 
		 else
		 online[a].hrg[a]=0;}
  	}
    
    if(kode[a]==3){
    	{if(memori[a]==256)
	 	 online[a].hrg[a]=5999000;
	  
	 	 else
	 	 online[a].hrg[a]=0;}
   	}
    
    if(kode[a]==4){
    	{if(memori[a]==256)
		 online[a].hrg[a]=9999000;
	  
		 else
		 online[a].hrg[a]=0;}
   	}
    
    if(kode[a]==5){
   		{if(memori[a]==128)
		 online[a].hrg[a]=3799000;
	
	     else if(memori[a]==8)
		 online[a].hrg[a]=3999000;
		   
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==6){
   		{if(memori[a]==128)
		 online[a].hrg[a]=4299000;
	  
	 	 else if(memori[a]==256)
		 online[a].hrg[a]=4699000;
	 
	 	 else
		 online[a].hrg[a]=0;}
	}
  	    
  	if(kode[a]==7){
   		{if(memori[a]==128)
		 online[a].hrg[a]=3399000;
	  
	 	 else if(memori[a]==256)
		 online[a].hrg[a]=3899000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==8){
   		{if(memori[a]==64)
		 online[a].hrg[a]=2699000;
		   
		 else if(memori[a]==128)
		 online[a].hrg[a]=2999000;
	  
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==9){
   		{if(memori[a]==128)
		 online[a].hrg[a]=4899000;
	
	 	 else if(memori[a]==256)
		 online[a].hrg[a]=5499000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==10){
   		{if(memori[a]==128)
		 online[a].hrg[a]=5999000;
	  
	 	 else if(memori[a]==256)
		 online[a].hrg[a]=6999000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==11){
   		{if(memori[a]==128)
		 online[a].hrg[a]=5499000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==12){ 
   		{if(memori[a]==64)
		 online[a].hrg[a]=2099000;
	  
	 	 else if(memori[a]==128)
		 online[a].hrg[a]=2499000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==13){
   		{if(memori[a]==4)
		 online[a].hrg[a]=2799000;
	  
	 	 else if(memori[a]==8)
		 online[a].hrg[a]=3099000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==14){
   		{if(memori[a]==128)
		 online[a].hrg[a]=3699000;
		   
		 else if(memori[a]==8)
		 online[a].hrg[a]=3899000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==15){
   		{if(memori[a]==64)
		 online[a].hrg[a]=2899000;
	  
	 	 else if(memori[a]==128)
		 online[a].hrg[a]=3499000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==16){
   		{if(memori[a]==64)
		 online[a].hrg[a]=1899000;
		   
		 else if(memori[a]==128)
		 online[a].hrg[a]=2299000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==17){ 
   		{if(memori[a]==32)
		 online[a].hrg[a]=1499000;
	  
	 	 else if(memori[a]==64)
		 online[a].hrg[a]=1699000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	if(kode[a]==18){ 
   		{if(memori[a]==2)
		 online[a].hrg[a]=1299000;
	  
	 	 else if(memori[a]==3)
		 online[a].hrg[a]=1399000;
	
	 	 else
		 online[a].hrg[a]=0;}
  	}
  	    
  	cout<<"    Harga        :  Rp "<<online[a].hrg[a]<<endl;
  	cout<<"    Jumlah Beli  :  ";cin>>online[a].jmlh[a];
  	
	while (online[a].jmlh[a] < 1){
		cout<<endl;
		cout<<"    Minimal Pembelian 1 Barang!"<<endl<<endl;
	 	cout<<"    Jumlah Beli  :  ";cin>>online[a].jmlh[a];}
	 	
	ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
	cout<<endl;
	}
	
	cout<<"   Lanjut Berbelanja [y/t] : ";cin>>lan;
	 if(lan=='Y'||lan=='y'){
	 	system("cls");
	 	tampilan();
	 	for(a=1;a<=n;a++){
			gotoxy(5,9+a);cout<<"|"; 
	 		gotoxy(7,9+a);cout<<a;
	 		gotoxy(10,9+a);cout<<"|";
	 		cout<<online[a].nabar[a];
			gotoxy(34,9+a);cout<<"|";
	 		gotoxy(36,9+a);cout<<online[a].warna[a];
	 		gotoxy(54,9+a);cout<<"|";
	 		gotoxy(56,9+a);cout<<memori[a]<<" GB";
			gotoxy(69,9+a);cout<<"|";
			gotoxy(71,9+a);cout<<"Rp "<<online[a].hrg[a];
	 		gotoxy(90,9+a);cout<<"|";
	 		gotoxy(92,9+a);cout<<online[a].jmlh[a];
	 		gotoxy(106,9+a);cout<<"|";
	 		ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
	 		gotoxy(108,9+a);cout<<"Rp "<<ttl[a];
	 		gotoxy(129,9+a);cout<<"|";
	 		total_byr=total_byr+ttl[a];}
	 		cout<<endl;
	 		ongkir=25000;
	 		cout<<"     ============================================================================================================================="<<endl;        
	 		cout<<"     |                                          Ongkir                                                    |"<<" Rp "<<ongkir<<"             |"<<endl; 
	 		cout<<"     ============================================================================================================================="<<endl;        
     		total_byr=total_byr+ttl[a]+ongkir;
	 		cout<<"     |                                       Total Belanja                                                |"<<" Rp "<<total_byr<<endl;
     		cout<<"     ============================================================================================================================="<<endl<<endl;
     		cout<<"     Data Yang Anda Inputkan Akan Digunakan Dalam Proses Transaksi Dan Pengiriman."<<endl;
     		cout<<"     Kerahasiaan Data Akan Menjadi Tanggung Jawab Perusahaan."<<endl<<endl<<endl;
	 		cin.ignore();
     		cout<<"     Nama           :  ";cin.getline(nm,30);
     		cout<<"     Alamat Tujuan  :  ";cin.getline(almt,30);
     		cout<<"     No Hp          :  ";cin>>nohp;
     		cout<<endl;
			cout<<"     Note:"<<endl;
			cout<<"     Model Handphone Yang Tidak Sesuai dengan Kode Menu List, Maka Tidak Akan Dikirim & Jika Memesan Handphone Dengan Harga 0, Maka Tidak Akan Dikirim"<<endl;
			cout<<"     Jika Sudah Terlanjur Membayar, Maka Uang Akan Dikembalikan"<<endl<<endl;
			cout<<"     Lanjut Checkout [y/t] : "; cin>>checkout;
			if(checkout=='Y'||checkout=='y'){
		 		cout<<endl<<endl;
	     		bayar();}

	 	}
	 	
}

void Oppo(){
	 Oppo :
	 cout<<"  ========================================================================================================================================================================"<<endl;
	 cout<<"  |                                                                          Daftar Harga Oppo                                                                           |"<<endl;
     cout<<"  ========================================================================================================================================================================"<<endl;
	 cout<<"  | Kode |             Model             |                        Warna                      |              Memori            |                     Harga                |"<<endl;
	 cout<<"  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	 cout<<"  |  1   |   Oppo Find X3 Pro 5G         |   Gloss Black, Blue                               |   12 GB + 128 GB               |   Rp 15.999.0000                         |"<<endl;
	 cout<<"  |  2   |   Oppo Find X2 Pro 5G         |   Black Ceramic, Orange Vegan Leather             |   12 GB + 512 GB               |   Rp 14.999.0000                         |"<<endl;
	 cout<<"  |  3   |   Oppo Find X2                |   Black Ceramic, Ocean Glass                      |   12 GB + 256 GB               |   Rp 11.999.0000                         |"<<endl;
	 cout<<"  |  4   |   Oppo Reno6 Pro 5G           |   Lunar Gray, Arctic Blue                         |   12 GB + 256 GB               |   Rp 10.999.000                          |"<<endl;
	 cout<<"  |  5   |   Oppo Reno6 5G               |   Aurora, Stellar Black                           |   8 GB + 128 GB                |   Rp 18.999.000                          |"<<endl;
	 cout<<"  |  6   |   Oppo Reno6                  |   Aurora, Stellar Black                           |   8 GB + 128 GB                |   Rp 4.999.000                           |"<<endl;
	 cout<<"  |  7   |   Oppo Reno5 Marvel Edition   |   Starry Black                                    |   8 GB + 128 GB                |   Rp 9.999.000                           |"<<endl;
	 cout<<"  |  8   |   Oppo Reno5 5G               |   Galactic Silver, Starry Black                   |   8 GB + 128 GB                |   Rp 5.999.000                           |"<<endl;
	 cout<<"  |  9   |   Oppo Reno5                  |   Fantasy Silver, Starry Black                    |   8 GB + 128 GB                |   Rp 4.499.000                           |"<<endl;
	 cout<<"  |  10  |   Oppo Reno 5F                |   Fantastic Purple, Dynamic Black                 |   8 GB + 128 GB                |   Rp 3.999.000                           |"<<endl;
	 cout<<"  |  11  |   Oppo Reno 4F                |   Metalic White, Matte Black                      |   8 GB + 128 GB                |   Rp 3.299.000                           |"<<endl;
	 cout<<"  |  12  |   Oppo A95                    |   Rainbow Silver, Starry Black                    |   8 GB + 128 GB                |   Rp 3.999.000                           |"<<endl;
	 cout<<"  |  13  |   Oppo A92                    |   Twilight Black, Aurora Purple, Shining White    |   6 GB + 128 GB, 8 GB+128 GB   |   Rp 3.599.000; Rp 4.199.000             |"<<endl;
	 cout<<"  |  14  |   Oppo A74 5G                 |   Fluid Black, Space Silver                       |   6 GB + 128 GB                |   Rp 3.599.000                           |"<<endl;
	 cout<<"  |  15  |   Oppo A74                    |   Midnight Blue, Prism Black                      |   6 GB + 128 GB                |   Rp 3.399.000                           |"<<endl;
	 cout<<"  |  16  |   Oppo A54                    |   Starry Blue, Crystal Black                      |   6 GB + 128 GB                |   Rp 3.099.000                           |"<<endl;
	 cout<<"  |  17  |   Oppo A16                    |   Pearl Blue, Crystal Black, Space Silver         |   4 GB + 64 GB                 |   Rp 2.499.000                           |"<<endl;
	 cout<<"  |  18  |   Oppo A15s                   |   Mystery Blue, Dynamic Black                     |   4 GB + 64 GB                 |   Rp 2.199.000                           |"<<endl;
	 cout<<"  |  19  |   Oppo A15                    |   Mystery Blue, Dynamic Black, Fancy White        |   3 GB + 32 GB                 |   Rp 1.799.000                           |"<<endl;
	 cout<<"  ========================================================================================================================================================================"<<endl;
	 cout<<"  Note:"<<endl;
	 cout<<"  Harap Masukkan Warna Yang Tersedia, Jika Memilih Warna Selain Yang Ada Di Menu, Maka Akan Dikirim Secara Random"<<endl;
	 cout<<"  Untuk kode nomor 1-12 & 14-19 pilih jumlah RAM yang tersedia pada model"<<endl;
	 cout<<"  Untuk kode nomor 13 pilih jumlah ROM yang tersedia pada model"<<endl<<endl;
	    
	 cout<<"  Masukkan Berapa Banyak Handphone Yang Ingin Anda Beli: ";cin>>n;
     while (n < 1){
     	cout<<"  Invalid Input!"<<endl<<endl;
     	cout<<"  Masukkan Berapa Banyak Handphone Yang Ingin Anda Beli: ";cin>>n;
	 }
	 
	 for(a=1;a<=n;a++){
	 cout<<endl;
	 cout<<"  Handphone ke-"<<a<<endl;
	 cout<<"  Kode        :  ";cin>>kode[a];
	 while (kode[a] < 1 || kode[a] > 19){
	 	cout<<"   Kode HP Tidak Tersedia!"<<endl<<endl;
		cout<<"   Kode         :  ";cin>>kode[a];}
	 
	 cin.ignore();
//	 cout<<"  Model       :  ";gets(online[a].nabar[a]);
//	 cout<<"  Warna       :  ";gets(online[a].warna[a]);
	 cout<<"  Memori      :  ";cin>>memori[a];
	 if(kode[a]==1){
	 {if(memori[a]==128)
	  online[a].hrg[a]=15999000;
	  
	  else
	  online[a].hrg[a]=0;}
     }
    	 
     if(kode[a]==2){
     {if(memori[a]==512)
	  online[a].hrg[a]=14999000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
    
     if(kode[a]==3){
     {if(memori[a]==256)
	  online[a].hrg[a]=11999000;
	
	  else
	  online[a].hrg[a]=0;}
   	 } 
    
     if(kode[a]==4){
     {if(memori[a]==256)
	  online[a].hrg[a]=10999000;
	
	  else
	  online[a].hrg[a]=0;}
   	 }
    
     if(kode[a]==5){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=18999000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==6){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=4999000;
	  
	 else
	 online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==7){
   	 {if(memori[a]==128)
      online[a].hrg[a]=9999000;
	
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==8){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=5999000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }

  	 if(kode[a]==9){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=4499000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==10){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=3999000;
	
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==11){
   	 {if(memori[a]==128)
	   online[a].hrg[a]=3299000;
	
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==12){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=3999000;
	
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==13){
   	 {if(memori[a]==6)
	  online[a].hrg[a]=3599000;
	  
	  else if(memori[a]==8)
	  online[a].hrg[a]=4199000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
     if(kode[a]==14){
     {if(memori[a]==128)
	  online[a].hrg[a]=3599000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==15){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=3399000;
		   
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==16){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=3099000;
		   
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==17){
   	 {if(memori[a]==64)
	   online[a].hrg[a]=2499000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==18){
   	 {if(memori[a]==64)
	  online[a].hrg[a]=2199000;
		   
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==19){
   	 {if(memori[a]==32)
	  online[a].hrg[a]=1799000;
		   
	  else
	  online[a].hrg[a]=0;}
  	 }
		
  	cout<<"   Harga        :  Rp "<<online[a].hrg[a]<<endl;
	cout<<"   Jumlah Beli  :  ";cin>>online[a].jmlh[a];
	while (online[a].jmlh[a] < 1){
		cout<<endl;
		cout<<"   Minimal Pembelian 1 Barang!"<<endl<<endl;
		cout<<"   Jumlah Beli  :  ";cin>>online[a].jmlh[a];}
	 
	ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
	cout<<endl;
	}
	cout<<"  Lanjut Berbelanja [y/t] : ";cin>>lan;
	 if(lan=='Y'||lan=='y'){
	 	system("cls");
	 	tampilan();
	 	for(a=1;a<=n;a++){
			gotoxy(5,9+a);cout<<"|"; 
	 		gotoxy(7,9+a);cout<<a;
	 		gotoxy(10,9+a);cout<<"|";
	 		cout<<online[a].nabar[a];
			gotoxy(34,9+a);cout<<"|";
	 		gotoxy(36,9+a);cout<<online[a].warna[a];
	 		gotoxy(54,9+a);cout<<"|";
	 		gotoxy(56,9+a);cout<<memori[a]<<" GB";
			gotoxy(69,9+a);cout<<"|";
			gotoxy(71,9+a);cout<<"Rp "<<online[a].hrg[a];
	 		gotoxy(90,9+a);cout<<"|";
	 		gotoxy(92,9+a);cout<<online[a].jmlh[a];
	 		gotoxy(106,9+a);cout<<"|";
	 		ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
	 		gotoxy(108,9+a);cout<<"Rp "<<ttl[a];
	 		gotoxy(129,9+a);cout<<"|";
	 		total_byr=total_byr+ttl[a];}
	 		cout<<endl;
	 		ongkir=25000;
	 		cout<<"     ============================================================================================================================="<<endl;        
	 		cout<<"     |                                          Ongkir                                                    |"<<" Rp "<<ongkir<<"             |"<<endl; 
	 		cout<<"     ============================================================================================================================="<<endl;        
     		total_byr=total_byr+ttl[a]+ongkir;
	 		cout<<"     |                                       Total Belanja                                                |"<<" Rp "<<total_byr<<endl;
     		cout<<"     ============================================================================================================================="<<endl<<endl;
     		cout<<"     Data Yang Anda Inputkan Akan Digunakan Dalam Proses Transaksi Dan Pengiriman."<<endl;
     		cout<<"     Kerahasiaan Data Akan Menjadi Tanggung Jawab Perusahaan."<<endl<<endl<<endl;
	 		cin.ignore();
     		cout<<"     Nama           :  ";cin.getline(nm,30);
     		cout<<"     Alamat Tujuan  :  ";cin.getline(almt,30);
     		cout<<"     No Hp          :  ";cin>>nohp;
     		cout<<endl;
			cout<<"     Note:"<<endl;
			cout<<"     Model Handphone Yang Tidak Sesuai dengan Kode Menu List, Maka Tidak Akan Dikirim & Jika Memesan Handphone Dengan Harga 0, Maka Tidak Akan Dikirim"<<endl;
			cout<<"     Jika Sudah Terlanjur Membayar, Maka Uang Akan Dikembalikan"<<endl<<endl;
			cout<<"     Lanjut Checkout [y/t] : "; cin>>checkout;
			if(checkout=='Y'||checkout=='y'){
		 		cout<<endl<<endl;
	     		bayar();}
     		
	 	}
	
}

void Vivo(){
	 Vivo :
	 cout<<"     ================================================================================================================================================================="<<endl;
	 cout<<"     |                                                                        Daftar Harga Vivo                                                                      |"<<endl;
	 cout<<"     ================================================================================================================================================================="<<endl;
	 cout<<"     | Kode |            Model           |                     Warna                    |               Memori             |                    Harga                |"<<endl;
	 cout<<"     -----------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	 cout<<"     |  1   |   Vivo X70 Pro             |   Aurora Drawn, Cosmic Black                 |   12 GB + 256 GB                 |   Rp 10.999.000                         |"<<endl;
	 cout<<"     |  2   |   Vivo X60 Pro             |   Midnight Black, Shimmer Blue               |   12 GB + 256 GB                 |   Rp 9.999.0000                         |"<<endl;
	 cout<<"     |  3   |   Vivo X60                 |   Midnight Black, Shimmer Blue               |   8 GB + 256 GB                  |   Rp 7.999.0000                         |"<<endl;
	 cout<<"     |  4   |   Vivo X50 Pro             |   Alpha Grey                                 |   8 GB + 256 GB                  |   Rp 8.999.000                          |"<<endl;
	 cout<<"     |  5   |   Vivo X50                 |   Frost Blue, Glaze Black                    |   8 GB + 256 GB                  |   Rp 6.499.000                          |"<<endl;
	 cout<<"     |  6   |   Vivo V23e                |   Sunshine Coast, Moonlight Shadow           |   8 GB + 128 GB                  |   Rp 4.399.000                          |"<<endl;
	 cout<<"     |  7   |   Vivo V21 5G              |   Dusk Blue, Sunset Dazzle                   |   8 GB + 128 GB                  |   Rp 4.499.000                          |"<<endl;
	 cout<<"     |  8   |   Vivo V20                 |   Midnight Jazz, Sunset Melody               |   8 GB + 128 GB                  |   Rp 4.399.000                          |"<<endl;
	 cout<<"     |  9   |   Vivo V19                 |   Arctic Blue, Crystal White                 |   8 GB + 128 GB, 8 GB + 256 GB   |   Rp 3.999.000; Rp 4.999.000            |"<<endl;
	 cout<<"     |  10  |   Vivo V17 Pro             |   Silk White, Satin Black                    |   8 GB + 128 GB                  |   Rp 4.999.000                          |"<<endl;
	 cout<<"     |  11  |   Vivo Y33s                |   Mirror Black, Midday Black                 |   8 GB + 128 GB                  |   Rp 3.399.000                          |"<<endl;
	 cout<<"     |  12  |   Vivo Y21s                |   Midnight Blue, Pearl White                 |   4 GB + 128 GB                  |   Rp 2.799.000                          |"<<endl;
	 cout<<"     |  13  |   Vivo Y15s                |   Wave Green, Mystic Blue                    |   3 GB + 32 GB                   |   Rp 1.899.000                          |"<<endl;
	 cout<<"     |  14  |   Vivo Y53s                |   Deep Sea Blue, Fantastic Rainbow           |   8 GB + 128 GB                  |   Rp 3.699.000                          |"<<endl;
	 cout<<"     |  15  |   Vivo Y20s                |   Purist Blue, Obsidian Black                |   6 GB + 128 GB, 8 GB + 128 GB   |   Rp 2.799.000; Rp 2.999.000            |"<<endl;
	 cout<<"     |  16  |   Vivo S1 Pro              |   Glowing Black, Crystal Blue, Fancy Sky     |   8 GB + 128 GB, 8 GB + 256 GB   |   Rp 3.699.000; Rp 3.999.000            |"<<endl;
	 cout<<"     |  17  |   Vivo S1                  |   Skyline Blue, Cosmic Green                 |   6 GB + 128 GB                  |   Rp 2.999.000                          |"<<endl;
	 cout<<"     |  18  |   Vivo Y20s                |   Purist Blue, Obsidian Black                |   6 GB + 128 GB, 8 GB + 128 GB   |   Rp 2.799.000; Rp 2.999.000            |"<<endl;
	 cout<<"     |  19  |   Vivo Z1 Pro              |   Sonic Blue, Sonic Black                    |   4 GB + 64 GB, 6 GB + 128 GB    |   Rp 2.699.000; Rp 3.499.000            |"<<endl;
	 cout<<"     ================================================================================================================================================================="<<endl;
	 cout<<"     Note:"<<endl;
	 cout<<"     Harap Masukkan Warna Yang Tersedia, Jika Memilih Warna Selain Yang Ada Di Menu, Maka Akan Dikirim Secara Random"<<endl;
	 cout<<"     Untuk kode nomor 1-13, 15, 16 & 18 pilih jumlah RAM yang tersedia pada model"<<endl;
	 cout<<"     Untuk kode nomor 14 & 17 pilih jumlah ROM yang tersedia pada model"<<endl<<endl;
	    
	 cout<<"     Masukkan Berapa Banyak Handphone Yang Ingin Anda Beli: ";cin>>n;
     while (n < 1){
     	cout<<"     Invalid Input!"<<endl<<endl;
     	cout<<"     Masukkan Berapa Banyak Handphone Yang Ingin Anda Beli: ";cin>>n;
	 }
     	
	 for(a=1;a<=n;a++){
	 cout<<endl;
	 cout<<"     Handphone ke-"<<a<<endl;
	 cout<<"     Kode         :  ";cin>>kode[a];
	 while (kode[a] < 1 || kode[a] > 17){
	 	cout<<"     Kode HP Tidak Tersedia!"<<endl<<endl;
		cout<<"     Kode         :  ";cin>>kode[a];
	 }
	 cin.ignore();
//	 cout<<"     Model        :  ";gets(online[a].nabar[a]);
//	 cout<<"     Warna        :  ";gets(online[a].warna[a]);
	 cout<<"     Memori       :  ";cin>>memori[a];
	 if(kode[a]==1){
	 {if(memori[a]==256)
	  online[a].hrg[a]=10999000;
	  
	  else
	  online[a].hrg[a]=0;}
     }
    	 
     if(kode[a]==2){
     {if(memori[a]==256)
	  online[a].hrg[a]=9999000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
    
     if(kode[a]==3){
     {if(memori[a]==256)
	  online[a].hrg[a]=7999000;
	
	  else
	  online[a].hrg[a]=0;}
   	 } 
    
     if(kode[a]==4){
     {if(memori[a]==256)
	  online[a].hrg[a]=8999000;
	
	  else
	  online[a].hrg[a]=0;}
   	 }
    
     if(kode[a]==5){
   	 {if(memori[a]==256)
	  online[a].hrg[a]=6499000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==6){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=4399000;
	  
	 else
	 online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==7){
   	 {if(memori[a]==128)
      online[a].hrg[a]=4499000;
	
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==8){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=4399000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }

  	 if(kode[a]==9){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=3999000;
	  
	  else if(memori[a]==256)
	  online[a].hrg[a]=4999000;
	
	 else
	 online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==10){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=4999000;
	
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==11){
   	 {if(memori[a]==128)
	   online[a].hrg[a]=3399000;
	
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==12){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=2799000;
	
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==13){
   	 {if(memori[a]==32)
	  online[a].hrg[a]=1899000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
     if(kode[a]==14){
     {if(memori[a]==128)
	  online[a].hrg[a]=3699000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==15){
   	 {if(memori[a]==6)
	  online[a].hrg[a]=2799000;
		   
      else if(memori[a]==8)
	  online[a].hrg[a]=2999000;
		   
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==16){
   	 {if(memori[a]==128)
	  online[a].hrg[a]=3699000;
		   
	  else if(memori[a]==256)
	  online[a].hrg[a]=3999000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==17){
   	 {if(memori[a]==128)
	   online[a].hrg[a]=2999000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==18){
   	 {if(memori[a]==6)
	  online[a].hrg[a]=2799000;
		   
	  else if(memori[a]==8)
	  online[a].hrg[a]=2999000;
	  
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 if(kode[a]==19){
   	 {if(memori[a]==64)
	  online[a].hrg[a]=2699000;
		   
	  else if(memori[a]=128)
	  online[a].hrg[a]=349000;
		   
	  else
	  online[a].hrg[a]=0;}
  	 }
  	    
  	 cout<<"     Harga        :  Rp "<<online[a].hrg[a]<<endl;
	 cout<<"     Jumlah Beli  :  ";cin>>online[a].jmlh[a];
	 while (online[a].jmlh[a] < 1){
	 	cout<<endl;
	 	cout<<"     Minimal Pembelian 1 Barang!"<<endl<<endl;
	 	cout<<"     Jumlah Beli  :  ";cin>>online[a].jmlh[a];}
	 	
	 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
	 cout<<endl;
	 }
	 cout<<"     Lanjut Berbelanja [y/t] : ";cin>>lan;
	 if(lan=='Y'||lan=='y'){
	 	system("cls");
	 	tampilan();
	 	for(a=1;a<=n;a++){
			gotoxy(5,9+a);cout<<"|"; 
	 		gotoxy(7,9+a);cout<<a;
	 		gotoxy(10,9+a);cout<<"|";
	 		cout<<online[a].nabar[a];
			gotoxy(34,9+a);cout<<"|";
	 		gotoxy(36,9+a);cout<<online[a].warna[a];
	 		gotoxy(54,9+a);cout<<"|";
	 		gotoxy(56,9+a);cout<<memori[a]<<" GB";
			gotoxy(69,9+a);cout<<"|";
			gotoxy(71,9+a);cout<<"Rp "<<online[a].hrg[a];
	 		gotoxy(90,9+a);cout<<"|";
	 		gotoxy(92,9+a);cout<<online[a].jmlh[a];
	 		gotoxy(106,9+a);cout<<"|";
	 		ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
	 		gotoxy(108,9+a);cout<<"Rp "<<ttl[a];
	 		gotoxy(129,9+a);cout<<"|";
	 		total_byr=total_byr+ttl[a];}
	 		cout<<endl;
	 		ongkir=25000;
	 		cout<<"     ============================================================================================================================="<<endl;        
	 		cout<<"     |                                          Ongkir                                                    |"<<" Rp "<<ongkir<<"             |"<<endl; 
	 		cout<<"     ============================================================================================================================="<<endl;        
     		total_byr=total_byr+ttl[a]+ongkir;
	 		cout<<"     |                                       Total Belanja                                                |"<<" Rp "<<total_byr<<endl;
     		cout<<"     ============================================================================================================================="<<endl<<endl;
     		cout<<"     Data Yang Anda Inputkan Akan Digunakan Dalam Proses Transaksi Dan Pengiriman."<<endl;
     		cout<<"     Kerahasiaan Data Akan Menjadi Tanggung Jawab Perusahaan."<<endl<<endl<<endl;
	 		cin.ignore();
     		cout<<"     Nama           :  ";cin.getline(nm,30);
     		cout<<"     Alamat Tujuan  :  ";cin.getline(almt,30);
     		cout<<"     No Hp          :  ";cin>>nohp;
     		cout<<endl;
			cout<<"     Note:"<<endl;
			cout<<"     Model Handphone Yang Tidak Sesuai dengan Kode Menu List, Maka Tidak Akan Dikirim & Jika Memesan Handphone Dengan Harga 0, Maka Tidak Akan Dikirim"<<endl;
			cout<<"     Jika Sudah Terlanjur Membayar, Maka Uang Akan Dikembalikan"<<endl<<endl;
			cout<<"     Lanjut Checkout [y/t] : "; cin>>checkout;
			if(checkout=='Y'||checkout=='y'){
		 		cout<<endl<<endl;
	     		bayar();}
     		
	 	}
	
}

int main(int argc, char * argv[]){
     for(m=1;m<55;m++){
        delay(90);   
        gotoxy(m-1,5);cout<<' ';
        gotoxy(m,7);cout<<" SELAMAT DATANG DI PROGRAM E-COMMERCE SERVICE ";}
     awal :   
     system("cls"); 
   
     cout<<"==============================================================\n";
     cout<<"|``````````               KELOMPOK 1              ```````````|\n";
     cout<<"|MARWAH NUR SHAFIRA                              (2107411008)|\n";
     cout<<"|ANNISA MARFADILLA                               (2107411019)|\n";
     cout<<"|FRANSISKUS XAVERIUS ARYA KENDRA PAMRAYOGA       (2107411021)|\n";
     cout<<"|MOHAMAD RAFI ALYAHYA                            (2107411031)|\n";
     cout<<"==============================================================\n";
                                                                                                                                                                                     
     gotoxy(57,12);cout<<"=====================================================\n";
     gotoxy(57,13);cout<<"|                    FINAL PROJECT                  |\n";
     gotoxy(57,14);cout<<"|                    PEMOGRAMAN C++                 |\n";
     gotoxy(57,15);cout<<"|             PROGRAM E-COMMERCE SERVICE            |\n";
	 gotoxy(57,17);cout<<"====================================================="<<endl;    
    
     gotoxy(57,18);cout<<"\t             Welcome to P3E           \n";
     gotoxy(57,19);cout<<"\t             Let's Shopping           \n";
     gotoxy(57,20);cout<<"\t   Pembelian bisa dalam dan luar kota \n";
 	
     gotoxy(56,23);cout<<" 1. Login \n";
     gotoxy(56,24);cout<<" 2. Register \n";
     gotoxy(56,27);cout<<" Silahkan Pilih Menu [1/2] : ";cin>>memilih;
     
     cout<<endl;
 	 switch (memilih)
	 {
	 case 1 :
	 	
	 system("cls");
	 gotoxy(57,9);cout<<"=====================================================\n";
     gotoxy(57,10);cout<<"|                    FINAL PROJECT                  |\n";
     gotoxy(57,11);cout<<"|                    PEMOGRAMAN C++                 |\n";
     gotoxy(57,12);cout<<"|             PROGRAM E-COMMERCE SERVICE            |\n";
     gotoxy(57,13);cout<<"====================================================="<<endl;
	 gotoxy(57,16);cout<<"Login"<<endl;
	 gotoxy(57,18);cout<<"Username : ";cin>>user;
	 gotoxy(57,19);cout<<"Password : ";cin>>password;
	 
	 if(user=="ANRO" && password=="1234"){
	   login :
	   system("cls");
	   gotoxy(57,9);cout<<"======================================================\n";
       gotoxy(57,10);cout<<"|                    FINAL PROJECT                  |\n";
   	   gotoxy(57,11);cout<<"|                    PEMOGRAMAN C++                 |\n";
   	   gotoxy(57,12);cout<<"|             PROGRAM E-COMMERCE SERVICE            |\n";
   	   gotoxy(57,13);cout<<"====================================================="<<endl;    
    
       gotoxy(57,15);cout<<"Hai, "<<user;
       gotoxy(57,17);cout<<"\t             Welcome to P3E           \n";
       gotoxy(57,18);cout<<"\t             Let's Shopping           \n";
       gotoxy(57,19);cout<<"\t   Pembelian bisa dalam dan luar kota \n";
	   
	   gotoxy(56,22);cout<<"\t Sistem Operasi Handphone Apa Yang Ingin Anda Beli ? \n";
	   gotoxy(56,23);cout<<" 1. iOS \n";
	   gotoxy(56,24);cout<<" 2. Android \n";
	   gotoxy(56,26);cout<<" Silahkan Pilih Menu [1/2] : ";cin>>kode_pilihan;
	   
	   cout<<endl;
	   switch (kode_pilihan){
	   case 1 :
	   system("cls");
	   iOS();
	   
	   break;
	   case 2 :
	   Android :
	   system("cls");
	   gotoxy(57,9);cout<<"======================================================\n";
       gotoxy(57,10);cout<<"|                    FINAL PROJECT                  |\n";
   	   gotoxy(57,11);cout<<"|                    PEMOGRAMAN C++                 |\n";
   	   gotoxy(57,12);cout<<"|             PROGRAM E-COMMERCE SERVICE            |\n";
   	   gotoxy(57,13);cout<<"====================================================="<<endl;
   	   
   	   gotoxy(57,17);cout<<"\t             Welcome to P3E           \n";
       gotoxy(57,18);cout<<"\t             Let's Shopping           \n";
       gotoxy(57,19);cout<<"\t   Pembelian bisa dalam dan luar kota \n";
	   
	   gotoxy(56,22);cout<<"\t Handphone Android Apa Yang Ingin Anda Beli ? \n";
	   gotoxy(56,23);cout<<" 1. Samsung \n";
	   gotoxy(56,24);cout<<" 2. Xiaomi \n";
	   gotoxy(56,25);cout<<" 3. Oppo \n";
	   gotoxy(56,26);cout<<" 4. Vivo \n";
	   gotoxy(56,28);cout<<" Silahkan Pilih Menu [1/2/3/4] : ";cin>>pilihan;
	
	    cout<<endl;
	   	switch (pilihan){
		case 1 :
		system("cls");
		Samsung();
			
		break;
		case 2 :
		system("cls");
		Xiaomi();
			
		break;
		case 3 :
		system("cls");
		Oppo();
			
		break;
		case 4 :
		system("cls");
		Vivo();
			
		break;
		default : gotoxy(57,30);cout<<"Menu Tidak Tersedia";
		getch();
		goto Android;}
	   
	   break;
	   default :  gotoxy(57,28);cout<<"Menu Tidak Tersedia";
	   getch();
	   goto login;}
	   
	 }
	 else{
	 gotoxy(57,25);cout<<"Invalid Username or Password"<<endl;
	 getch();
	 goto awal;}
		
	 break;
	 case 2 :
	 system("cls");
	 gotoxy(57,9);cout<<"=====================================================\n";
     gotoxy(57,10);cout<<"|                    FINAL PROJECT                  |\n";
     gotoxy(57,11);cout<<"|                    PEMOGRAMAN C++                 |\n";
     gotoxy(57,12);cout<<"|             PROGRAM E-COMMERCE SERVICE            |\n";
     gotoxy(57,13);cout<<"====================================================="<<endl;
	 gotoxy(57,16);cout<<"Sign Up"<<endl;
	 cin.ignore();
	 gotoxy(57,18);cout<<"Username : ";cin.getline(username,50);
	 gotoxy(57,19);cout<<"Password : ";cin>>password;
	 gotoxy(57,21);cout<<"Successfull";
	 getch();
	 
	 Sign :
   	 system("cls");
 	 gotoxy(57,9);cout<<"=====================================================\n";
     gotoxy(57,10);cout<<"|                    FINAL PROJECT                  |\n";
   	 gotoxy(57,11);cout<<"|                    PEMOGRAMAN C++                 |\n";
   	 gotoxy(57,12);cout<<"|             PROGRAM E-COMMERCE SERVICE            |\n";
   	 gotoxy(57,13);cout<<"====================================================="<<endl;    
   	   
   	 gotoxy(57,15);cout<<"Hai, "<<username;
     gotoxy(57,17);cout<<"\t             Welcome to P3E           \n";
     gotoxy(57,18);cout<<"\t             Let's Shopping           \n";
     gotoxy(57,19);cout<<"\t   Pembelian bisa dalam dan luar kota \n";
	
     gotoxy(56,22);cout<<"\t Sistem Operasi Handphone Apa Yang Ingin Anda Beli ? \n";
   	 gotoxy(56,23);cout<<" 1. iOS \n";
     gotoxy(56,24);cout<<" 2. Android \n";
     gotoxy(56,26);cout<<" Silahkan Pilih Menu [1/2] : ";cin>>kode_pilihan; 
	 	cout<<endl;
		switch (kode_pilihan){
		case 1 :
		system("cls");
		iOS();
		  
		break;
		case 2 :
		Andro :
		system("cls");
		gotoxy(57,9);cout<<"=====================================================\n";
    	gotoxy(57,10);cout<<"|                    FINAL PROJECT                  |\n";
   		gotoxy(57,11);cout<<"|                    PEMOGRAMAN C++                 |\n";
   		gotoxy(57,12);cout<<"|             PROGRAM E-COMMERCE SERVICE            |\n";
   		gotoxy(57,13);cout<<"====================================================="<<endl;
		
		gotoxy(57,17);cout<<"\t             Welcome to P3E           \n";
    	gotoxy(57,18);cout<<"\t             Let's Shopping           \n";
    	gotoxy(57,19);cout<<"\t   Pembelian bisa dalam dan luar kota \n";
		
		gotoxy(56,22);cout<<"\t Handphone Android Apa Yang Ingin Anda Beli ? \n";
		gotoxy(56,23);cout<<" 1. Samsung \n";
		gotoxy(56,24);cout<<" 2. Xiaomi \n";
		gotoxy(56,25);cout<<" 3. Oppo \n";
		gotoxy(56,26);cout<<" 4. Vivo \n";
		gotoxy(57,28);cout<<"Silahkan Pilih Menu [1/2/3/4] : ";cin>>pilihan;
	
		cout<<endl;
			switch (pilihan){
			case 1 :
			system("cls");
			Samsung();
			
			break;
			case 2 :
			system("cls");
			Xiaomi();
			
			break;
			case 3 :
			system("cls");
			Oppo();
			
			break;
			case 4 :
			system("cls");
			Vivo();
			
			break;
			default : gotoxy(57,30);cout<<"Menu Tidak Tersedia";
			getch();
			goto Andro;}
		   
		break;
	    default : gotoxy(57,28);cout<<"Menu Tidak Tersedia";
	    getch();
	    goto Sign;}
	
	 break;
	 default : cout<<endl<<endl;
	 cout<<"                                                         Menu Tidak Tersedia";
	 getch();
	 goto awal;
	
 	}
	cout<<endl<<endl<<endl;
	cout<<"                                                                            TERIMA KASIH ATAS KUNJUNGAN ANDA";
 	
 	 return 0;
 	 system("pause");

}
