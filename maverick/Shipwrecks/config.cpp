/*
	Author: Maverick Applications
	Desc: Altis Life Shipwreck
*/

//Customize your settings to fit your server setup!
class Maverick_Shipwrecks {

    //เวลาที่จะให้ shipwrecks spawn ออกมาครั้งแรก หรือ ครั้งต่อไปหลังจากที่มีคนเจอ shipwrecks แล้วทำการรูทของเรียบร้อยแล้ว(ตอนเก็บทองไป shipwrecksจะหายไปและรอเวลาเกิดตามที่ตั้งไว้) หน่วยเป็นวินาที
    ShipwreckInterval = 3500; 

    //Define the possible locations for your shipwrecks.
    //ทำการแอดpositions หรือตำแหน่งของ shipwrecks ที่ต้องการให้มันสุ่ม spawnจะเอากี่ที่ก็ได้ถ้าเอามากก็เพิ่มถ้าน้อยก็ลบออก ดู positions ได้ใน edit แมพ
	Positions[] = {
        {25789.67,26085.17,0},
		{15065.763,26298.711,0},
		{27230.91,18632.498,0},
		{1650.771,20700.438,0},
		{3168.820,9303.974,0},
		{11037.634,5841.694,0},
		{24160.545,13417.665,0},
        {5739.943,6212.384,0}
	};

    //องศาหรือขนาดความกว้างของเรือที่จะให้ค้นหา(ยิ่งเยอะยิ่งหายาก)
    Radius = 250;

    //ของที่จะต้องการให้เข้าไปอยู่ในเรือ 1 บรรทัดคือ 1 ครั้ง นั่นคือมันจะสุ่ม 3 ครั้งใส่เหมือนกันหมดได้ก็จะได้ของประเภทเดียว (คำนวณน้ำหนักด้วยเวลาจะแอดของบางทีน้ำหนักเกินผู้เล่นจะรูทไม่ได้) แอดเพิ่มหรือลบได้ตามใจชอบระวังเรื่อง syntax ระวังสคริปบัค
	ShipLoot[] = {
        {"goldbar","apple","goldbar","toolkit","apple","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar"},
        {"goldbar","redgull","goldbar","goldbar","redgull","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","apple"},
        {"goldbar","turtle_raw","goldbar","goldbar","goldbar","turtle_raw","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","goldbar","apple"}
	};

	//แสดงตัวหนังสือตอนสกอเม้าใส่เรือ
	ShipLootText = "Retrieve the loot";

    //รูปของสำเร็จให้แสดงข้อความว่าอะไร
    ShipLootSuccess = "You successfully claimed the wreck's loot for you!";

    //ถ้าของเต็มจะแสดงว่าอะไร
    ShipLootFail = "You can not carry all the loot. Make some room first! over wight";

	//ประกาศว่า shipwrecks spawn แล้วนะ .
	SpawnMSG = "SHIPWRECK\n\nA sunken ship has been located! It may contain important items and it has been marked on your map!";

    //ประกาศว่ามีคนรูทของในเรือไปแล้วเรือจะหายไปแล้วรอ spawn อีกรอบ.
	DeleteMSG = "SHIPWRECK\n\nThe ship has been successfully looted and has despawned!";
};