#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <random>

#define elemsof(arr) ((sizeof(arr)/sizeof(arr[0])))
using namespace std;


int main()
{
	srand(time(NULL));

	std::string Output;

	int EstPrice;



	std::string Helmets[] = { "None " , "UNTAR    " , "Vulcan     " , "SSH-68       " , "LZSh        " , "TC 800" , "Highcom Striker ACHHC IIIA" , "ULACH IIIA"  ,
							 "Crye Precision Airframe"  , "Tac-Kek Fast MT Non Balistic Replica"  , "Kolpak 1S"  , "SHPM Firefighters"  , "PSH-97 Djeta"
							, "6B47 Ratnik"  , "DEVTAC Ronin"  , "SSSh 95 Sfera S"  , "MSA ACH TC 2001"  , "MSA ACH TC 2002"  , "Zsh-1-2M"  , "Diamond Age Bastion"
							, "Ops Core Fast MT"  , "Team Wendy EXFIL"  , "Galvion Caiman"  , "BNTI LSHZ"  , "Maska 1Sch (Killa Helmet)"  , "Altyn"
							, "Rys T"   , "Ushanka" };

	int HelmetsPrice[] = { 0 , 29000 , 164998 , 19000 , 32999 , 79999 , 44000 , 45999 , 111111 , 10999 ,
						  15000 , 5000 , 10000 , 35876 , 102000 , 45000 , 38000 , 42000 , 30000 ,
						  70000 , 95999 , 180000 , 90997 , 644444 , 78999 , 105000 , 349999 , 15999 };



	std::string BodyArmour[] = { "None" , "6B43 Zabralo" , "PACA" , "6B13" , "Module 3M" , "Zhuk-3 Press Armor"
								, "Korund VM"  , "6B13 M Tan (Killa Armor)"  , "BNTI Gzhel-K"  , "6B2 Flora"  , "MF-UNTAR"  , "BNTI Kirasa-N"
								, "Highcom Trooper TFO"  , "6B23 Mountain Flora"  , "FORT Redunt M"  , "IOTV Gen 4 High Mobility"  , "Fort Defender 2"
								, "IOTV Gen4 Assault Kit"  , "FORT Redut T5"  , "5.11 Hexgrid"  , "LBT Slick"  , "Zhuk 6a Heavy" };

	int BodyArmorPrice[] = { 0 , 625000 , 29998 , 53999 , 15000 , 35000 , 199999 , 200000 , 115000 , 19999 , 41999 , 38000 , 87999 , 75000 , 105000 ,
							100000 , 181400 , 132000 , 290000 , 299999 , 355420 , 275000 };




	std::string Gun[] = { "None" , "ADAR" , "M4A1" , "AKM" , "ASH 12" , "AS Val" , "MCX (Honey Badger)" , "OP SKS" , "Vepr Hunter"
						, "P90" , "PPSH" , "Vector 9x19" , "M870" , "TOZ-106"	, "M700"	, "RSASS"	, "AK-101" , "AK-102"
						, "AK-103" , "AK-104" , "AK-105" , "AK-74" , "AK-74M" , "AK-74N" , "AKMN" , "AKMS" , "AKS-74"
						, "AKS-74N" , "AKS-74U" , "AKS-74UB" , "AKS-74UN" , "DT MDR 5.56" , "DT MDR .308" , "HK 416A5" , "KelTec RFB"
						, "SA-58" , "TX-15 DML" , "Vepr AKM/VPO 209" , "Vepr AKM/VPO 136" , "SKS" , "RPK-16" , "MP5" , "MP5K-N"
						, "MP7A1" , "MP7A2" , "MP9" , "MP9-N" , "MPX" , "PP-19-01" , "PP-9 Klin" , "PP-91 Kedr" , "PP-91-01 Keder B"
						, "Saiga-9" , "UMP 45" , "Vector .45" , "590A1" , "MP 133" , "MP 153" , "Saiga 12" , "KS-23M" , "MK-18"
						, "M1A" , "SR-25" , "SVDS" , "VSS Vintorez" , "DVL-10" , "Mosin" , "Mosin Inf" , "SV-98" , "T-5000"
						, "VPO-215" };

	int GunPrice[] = { 0 , 22500 , 59000 , 38750 , 59000 , 60000 , 90000 , 20000 , 28000 , 49500 , 12500 , 100000 , 26000 , 8900 , 38000 , 295000 ,
					  28000 , 73419 , 47000 , 34000 , 26666 , 19000 , 20000 , 21111 , 48400 , 21000 , 17969 , 36000 , 16000 , 20000 , 25999 ,
					  48500 , 115999 , 48500 , 43000 , 48484 , 57000 , 9999 , 15888 , 20000 , 42000 , 22999 , 14900 , 54000 , 60000 , 25000 , 18000 ,
					  45555 , 24999 , 14777 , 13000 , 25000 , 11100 , 30000 , 84000 , 20000 , 19000 , 30000 , 15000 , 100000 , 159999 , 55000 ,
					  61000 , 90000 , 50000 , 68888 , 49999 , 31000 , 37000 , 52000 , 17500 };




	std::string Sidearm[] = { "None" , "Glock17" , "M1911A1" , "FN 57" , "None" , "P226R" , "PM Pistol (Makarov)" , "TT"
							, "APB" , "TT Gold" , "APS" , "Glock 18C" , "M45A1" , "M9A3" , "MP-443 Grach" , "PB" , "PM(t)"
							, "SR-1MP" };

	int SidearmPrice[] = { 0 , 14500 , 9000 , 37777, 0 , 6000 , 4800 , 6000 , 15000 , 26999 , 8000 , 23994 , 10009 , 14500 , 10000 , 9000 , 5555 , 22888 };



	std::string Rig[] = { "None" , "Bankrobber" , "Triton" , "LBT-1961A" , "WarTech Gear Rig" , "Blackhawk Commando" , "BlackRock" , "Wartech MK3"
						, "Velocity Systems Multi-Purpose Patrol Vest" , "Scav Vest" , "Security Vest" , "DIY IDEA Chest Rig" , "SOE Micro Rig" , "UMTBS Scout Sniper"
						, "Splav Tarzan"  , "Haley Strategic D3CRX" , "Direct Action Thunderbolt" , "Gear Craft GC-BSS-MK1" , "ANA Tactical Alpha Chest Rig"
						, "Belt A+Belt B" };

	int RigPrice[] = { 0 , 10400 , 19999 , 49999 , 11000 , 32222 , 39999 , 21999 , 44999 , 5444 , 16000 , 7898 , 9000 , 13000 , 14999 , 21069 , 25000 , 25990 , 26650 , 34498 };




	std::string Backpack[] = { "None" , "Blackjack 50" , "Attack 2" , "Scav BP" , "Duffle Bag" , "Sanitar Bag" , "VKBO Army Bag"
							  , "LK 3F Transfer Tourists Bag" , "Ana Tactical Beta 2" , "Camelbak Tri-Zip" , "Oakley Mechanism" , "3V G Paratus"
							  , "6SH118 Raid" , "Eberlestock F4 Terminator" , "Pilgrim Tourist" , "Eberlestock F5 Switchblade" , "Wartech Berkut"
							  , "Day Pack" , "Flyye MBSS" , "Transformer Bag" , "Tactical Sling" };

	int BackpackPrice[] = { 0 , 95123 , 78888 , 13999 , 13999 , 28999 , 10000 , 4000 , 53000 , 54000 , 58420 , 48879 , 181000 , 58800 , 33800 , 45000 , 19400 , 19998 , 7777 , 2498 , 2222 };


	std::string Map[] = { "Factory" , "Customs" , "Woods" , "Reserve" , "Shoreline" , "Inetrchange" , "Labs" };

	int mapPrice[] = { 0 , 0 , 0 , 0 , 0 , 0 , 255555 };



	std::string Headphones[] = { "None" , "Ops-Core FAST RAC Headset" , "Peltor ComTac 2 headset" , "MSA Sordin Supreme PRO-X/L active headphones" , "GSSh-01 active headset"
								, "Peltor Tactical Sport headset" , "Walker's Razor Digital headset" , "Walker's XCEL 500BT Digital headset" };

	int HeadphonesPrice[] = { 0 , 27800 , 26999 , 29900 , 12800 , 22500 , 31999 , 70000 };


	std::string Time[] = { "Day" , "Night" };


	std::string GrenadeType[] = { "None" , "F-1" , "M67" , "RGD-5" , "VOG-25" , "VOG-17" , "RDG-2B (Smoke Grenade)" , "Zarya" };

	int GrenadeTypePrice[] = { 0 , 8999 , 39420 , 9999 , 19500 , 12222 , 10999 , 9900 };


	std::string GrenadeAmnt[] = { "1" , "2" , "3" , "4" , "5" , "6" , "7" , "8" };
	int GrenadeAmntInt[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 };

	string ammoTypes[] = { "4.6x30 AP SX" , "4.6x30mm FMJ SX" , "4.6x30mm Subsonic SX" , "4.6x30mm Action SX" , ".366 TKM AP" , ".366 TKM EKO" ,
						   ".366 TKM FMJ" ,".366 TKM Geksa" ,".45 ACP AP" ,".45 ACP FMJ" ,".45 ACP Lasermatch FMJ" , ".45 ACP Hydra-Shock" , ".45 RIP" ,
						   ".300 AAC Blackout AP" , ".300 BPZ AAC Blackout" , ".338 Lapua Magnum" , ".338 Lapua Magnum AP" , ".338 Lapua Magnup FMJ" ,
						   ".338 Lapua Magnum TAC-X" , "12.7x108 mm B-32" , "12.7x108 mm BZT-44M" , "12.7x55 mm PS12" , "12.7x55 mm PS12A" , "12.7x55 mm PS12B" , "NULL" };



	int randomMapNum = rand() % elemsof(Map);
	int randomHelmNum = rand() % elemsof(Helmets);
	int randomBArmourNum = rand() % elemsof(BodyArmour);
	int randomGunNum = rand() % elemsof(Gun);
	int randomSidearmrNum = rand() % elemsof(Sidearm);
	int randomRigNum = rand() % elemsof(Rig);
	int randomBackPackNum = rand() % elemsof(Backpack);
	int randomHeadphoneNum = rand() % elemsof(Headphones);
	int randomTimeNum = rand() % elemsof(Time);
	int randomGrenadeTypeNum = rand() % elemsof(GrenadeType);
	int randomGrenadeAmntNum = rand() % elemsof(GrenadeAmnt);
	int AmmoType;
	int Ammo46x30 = rand() % 4;
	int Ammo366 = rand() % (8 - 5) + 5;
	int Ammo45 = rand() % (13 - 9) + 9;
	int Ammo300B = rand() % (15 - 14) + 14;
	int Ammo338L = rand() % (18 - 16) + 16;
	int Ammo127x108 = rand() % (23 - 19) + 19;
	

	// formula for random number in range is rand() % (max_number + 1 - minimum_number) + minimum_number


	int GrenadePrice = GrenadeTypePrice[randomGrenadeTypeNum] * GrenadeAmntInt[randomGrenadeAmntNum];

	EstPrice = BackpackPrice[randomBackPackNum] + GrenadePrice + HelmetsPrice[randomHelmNum] + BodyArmorPrice[randomBArmourNum] + GunPrice[randomGunNum] + mapPrice[randomMapNum] + SidearmPrice[randomSidearmrNum] + RigPrice[randomRigNum];


	std::ostringstream os;

	

	if (randomGunNum == 44 || 45)
	{
		AmmoType = Ammo46x30;
	}
	else if (randomGunNum == 4)
	{
		AmmoType = Ammo127x108;
	}
	else if (randomGunNum == 6)
	{
		AmmoType = Ammo300B;
	}
	else if (randomGunNum == 57)
	{
		AmmoType = Ammo338L;
	}
	else if (randomGunNum == 53)
	{
		AmmoType = Ammo45;
	}
	else if (randomGunNum == 39 || 40 || 76)
	{
		AmmoType = Ammo366;
	}
	else 
	{
		AmmoType = 24;
	}

	int AmmoTypeVal = AmmoType;







	os << std::endl << std::endl << " Map: " << Map[randomMapNum] << std::endl << "\n-\n" << std::endl << " Helmet: " << Helmets[randomHelmNum] << std::endl << "\n-\n" << std::endl << " Body Armor: " << BodyArmour[randomBArmourNum]
		<< std::endl << "\n-\n" << std::endl << " Primary Gun: " << Gun[randomGunNum] << std::endl << "\n-\n" << std::endl
		<< " Sidearm: " << Sidearm[randomSidearmrNum] << std::endl << "\n-\n" << std::endl << " Backpack: " << Backpack[randomBackPackNum]
		<< std::endl << "\n-\n" << std::endl << " Tac-Rig: " << Rig[randomRigNum] << std::endl
		<< "\n-\n" << std::endl << " Headphones: " << Headphones[randomHeadphoneNum] << std::endl << "\n-\n" << std::endl
		<< " Time: " << Time[randomTimeNum] << std::endl << "\n-\n" << std::endl << " Grenade Type: " << GrenadeType[randomGrenadeTypeNum]
		<< std::endl << "\n-\n" << std::endl << " Grenade Amount: " << GrenadeAmnt[randomGrenadeAmntNum] << "\n" << std::endl << std::endl
		<< " Estimated Price: " << EstPrice << "\n" << endl << endl << " Ammo Type: " << ammoTypes[AmmoTypeVal] << endl << endl;

	cout << os.str();


	Output = os.str();

	ofstream OutputFile("Kit.txt");
	OutputFile << Output;
	OutputFile.close();

	system("pause");

}


