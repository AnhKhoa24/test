#include <iostream>
#include <string>
#include <fstream>
#include <vector>
class sinh_vien
{

public:
    sinh_vien(std::string n, int a, std::string gt, float h, float w) : name(n), age(a), gioi_tinh(gt), height(h), weight(w) {}

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
    // Sv_gioi(std::string n, int a, std::string gt) : sinh_vien(n, a, gt) {}
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
    // Sv_ngu(std::string n, int a, std::string gt) : sinh_vien(n, a, gt) {}
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
    maykhamsuc(){}
    ~maykhamsuc(){}
    void haha(sinh_vien *N)
    {
        age = N->get_age();
        weight = N ->get_weight();
        height = N ->get_height();
        std:: cout<< N->get_name();
        th();
    }
    void th()
    {
        float bmi = weight/(height * height);
        if(bmi >= 18.5 && bmi <25) std::cout<<" binh thuong"<<std::endl;
        if(bmi >= 17 && bmi <18.5) std::cout<<" gay <1>"<<std::endl;
        if(bmi >= 16 && bmi <17) std::cout<<" gay <2>"<<std::endl;
        if(bmi < 16) std::cout<<" gay vai ca dai!"<<std::endl;
        if(bmi >25) std::cout<<" noi chung la map vcl, lv cc gi nua!!!"<< std::endl;
    }

};

int main()
{

    sinh_vien *khoa = new sinh_vien("Huynh Anh Khoa", 19, "Nam", 1.7, 55);
    maykhamsuc *h = new maykhamsuc;
    h->haha(khoa);


    delete h;
    delete khoa;
    return 0;
}
