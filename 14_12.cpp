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
        std::cout<<"hahahahaha"<<std::endl;
    }

protected:
    std::string name;
    int age;
    std::string gioi_tinh;
};
class Sv_gioi : public sinh_vien
{
public:
    Sv_gioi(std::string n, int a, std::string gt) : sinh_vien(n, a, gt) {}
    void sua_do()
    {
        std::cout<<name<<" said: ";
        std::cout << "'Bo may hoc gioi vai lon!'" << std::endl;
    }
    void dac_diem()
    {
        std::cout<<"hehehehehhe"<<std::endl;
    }

private:
};
class Sv_ngu : public sinh_vien
{
public:
    Sv_ngu(std::string n, int a, std::string gt) : sinh_vien(n, a, gt) {}
    void thua_ly_do()
    {
        std::cout<<name<<" said: ";
        std::cout << "'Dcm de kho vai cc'" << std::endl;
    }

private:
};


int main()
{
    /*// sinh_vien *khoalatao = new sinh_vien("Huynh Anh Khoa", 19, "Nam");
    // std::cout<<khoalatao->get_name();

    // delete khoalatao;
    // Sv_gioi *khoalatao = new Sv_gioi("Huynh Anh Khoa", 19, "Nam");
    // khoalatao->sua_do();
    // khoalatao->dac_diem();

    // std::cout<<std::endl;

    // Sv_ngu *haha = new Sv_ngu("Le Thi Ngu", 19, "Deo biet");
    // haha->thua_ly_do();
    // haha->dac_diem();

    // std::cout<<std::endl;
    // delete khoalatao;
    // delete haha;*/
    
    //helo tao hoc git
    
    
    return 0;

}