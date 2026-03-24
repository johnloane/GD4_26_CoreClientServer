#pragma once
class Player
{
public:
	Player();
	uint16_t GetHealth() const;
	uint16_t GetAmmo() const;
	void Write(OutputMemoryStream& out_stream) const;
	void Read(InputMemoryStream& in_stream);
	void Write(OutputMemoryBitStream& out_stream) const;
	void ReadBits(InputMemoryBitStream& in_stream);
	void ToString() const;
	


private:
	uint16_t health_;
	uint16_t ammo_;
	char name_[128];
	Vector3 position_;
	Quaternion rotation_;
	vector<int> weapons_;
	
};

