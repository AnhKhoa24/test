#include <iostream>
#include <string>
#include <fstream>
#include <vector>
class sinh_vien
{

public:
    sinh_vien(std::string n, int a, std::string gt) : name(n), age(a), gioi_tinh(gt) {}

    ~sinh_vien()
    {
        std::cout << "Da xoa " << name << "!" << std::endl;
    }
    std::string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }
    std::string get_gt()
    {
        return gioi_tinh;
    }
    void set_name(std::string n)
    {
        name = n;
    }
    void set_age(int a)
    {
        age = a;
    }
    void set_gt(std::string gt)
    {
        gioi_tinh = gt;
    }
    void dac_diem()
    {
        std::cout << "hahahahaha" << std::endl;
    }
    float get_weight()
    {
        return weight;
    }
    float get_height()
    {
        return height;
    }

protected:
    std::string name;
    int age;
    std::string gioi_tinh;
    float weight;
    float height;
};
class Sv_gioi : public sinh_vien
{
public:
    Sv_gioi(std::string n, int a, std::string gt) : sinh_vien(n, a, gt) {}
    void sua_do()
    {
        std::cout << name << " said: ";
        std::cout << "'Bo may hoc gioi vai lon!'" << std::endl;
    }
    void dac_diem()
    {
        std::cout << "hehehehehhe" << std::endl;
    }

private:
};
class Sv_ngu : public sinh_vien
{
public:
    Sv_ngu(std::string n, int a, std::string gt) : sinh_vien(n, a, gt) {}
    void thua_ly_do()
    {
        std::cout << name << " said: ";
        std::cout << "'Dcm de kho vai cc'" << std::endl;
    }

private:
};

class maykhamsuc
{
private:
    int age;
    float weight;
    float height;
public:
    ~maykhamsuc(){}
    void haha(sinh_vien *N)
    {
        age = N->get_age();
        weight = N ->get_weight();
        height = N ->get_height();

        th();
    }
    void th()
    {
        if(age >= 18)
        {
            std::cout<<"cau thu chuyen nghiep"<<std::endl;
        }
        else
        {
            std:: cout <<"cau thu tre"<<std::endl;
        }
    }

};

int main()
{

    return 0;
}
