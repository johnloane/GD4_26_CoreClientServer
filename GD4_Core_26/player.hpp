#pragma once
class Player
{
public:
	Player();
	uint16_t GetHealth() const;
	uint8_t GetAmmo() const;
	void Write(OutputMemoryStream& out_stream) const;
	void Read(InputMemoryStream& in_stream);
	void ToString() const;
	


private:
	uint16_t health_;
	uint8_t ammo_;
	char name_[128];
	Vector3 position_;
	Quaternion rotation_;
	vector<uint8_t> weapons_;
	
};

