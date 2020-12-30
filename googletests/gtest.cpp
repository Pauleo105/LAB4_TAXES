#include <gtest/gtest.h>
#include "../tax.h"
#include "../supportfunc.h"

const char* types[2] = {"Budget", "Contract"};

TEST(PaymentConstructor, DefaultConstructor) {
    taxes::Payment a;
    ASSERT_EQ("Salary", a.getType());    
    ASSERT_EQ(10000, a.getSum());
}

TEST(PaymentConstructor, InitConstructor) {
    taxes::Payment a(11,11,"Because", 8800);
    ASSERT_EQ("11/12/2020", a.getDate());
    ASSERT_EQ("Because", a.getType());
    ASSERT_EQ(8800, a.getSum());
    taxes::Payment b("Overtime", 1000);
    ASSERT_EQ("01/01/2020", b.getDate());
    ASSERT_EQ("Overtime", b.getType());
    ASSERT_EQ(1000, b.getSum());
    taxes::Payment c(5000);
    ASSERT_EQ("01/01/2020", c.getDate());
    ASSERT_EQ("Salary", c.getType());
    ASSERT_EQ(5000, c.getSum());
}

TEST(PaymentConstructor, TestException) {
    ASSERT_ANY_THROW(taxes::Payment a(-1,-1, "Salary", 1000));
    ASSERT_ANY_THROW(taxes::Payment a(-1,2, "Salary", 1000));
    ASSERT_ANY_THROW(taxes::Payment a(2,-1, "Salary", 1000));
}

TEST(PaymentMethods, Setters) {
    taxes::Payment a;
    a.setDate(11, 8);
    ASSERT_EQ("11/09/2020", a.getDate());
    a.setSumm(99999);
    ASSERT_EQ(99999, a.getSum());
    a.setType("Reward");
    ASSERT_EQ("Reward", a.getType());
}

TEST(BudgetConstructor, DefaultConstructor) {
    taxes::Budget a;
    ASSERT_EQ("Ivanov", a.getOnlySurname());
    ASSERT_EQ("Ivan", a.getOnlyName());
    ASSERT_EQ("Ivanovich", a.getOnlyLastame());
    ASSERT_EQ(types[0], a.getType());
    ASSERT_EQ("MEPHI", a.getWork());
    ASSERT_EQ("Rector", a.getPost()); 
    ASSERT_EQ(true, a.isEmpty());   
}

TEST(BudgetConstructor, InitConstructor) {
    taxes::Budget a(22, 3, "Regard", 7777);
    std::pair<std::list<taxes::Payment>::iterator, std::list<taxes::Payment>::iterator> ptr;
    ptr = a.getIt();
    ASSERT_EQ("22/04/2020", ptr.first->getDate());
    ASSERT_EQ("Regard", ptr.first->getType());
    ASSERT_EQ(7777, ptr.first->getSum());
    ASSERT_EQ("Ivanov", a.getOnlySurname());
    ASSERT_EQ("Ivan", a.getOnlyName());
    ASSERT_EQ("Ivanovich", a.getOnlyLastame());
    ASSERT_EQ(types[0], a.getType());
    ASSERT_EQ("MEPHI", a.getWork());
    ASSERT_EQ("Rector", a.getPost());
    taxes::Budget b(13, 8, "Stipend", 3900, "Abdulkin", "Pavel", "Evgenevich", "Mephi", "Student");
    ptr = b.getIt();
    ASSERT_EQ("13/09/2020", ptr.first->getDate());
    ASSERT_EQ("Stipend", ptr.first->getType());
    ASSERT_EQ(3900, ptr.first->getSum());
    ASSERT_EQ("Abdulkin", b.getOnlySurname());
    ASSERT_EQ("Pavel", b.getOnlyName());
    ASSERT_EQ("Evgenevich", b.getOnlyLastame());
    ASSERT_EQ(types[0], b.getType());
    ASSERT_EQ("Mephi", b.getWork());
    ASSERT_EQ("Student", b.getPost());
}

TEST(BudgetConstructor, TestException) {
    ASSERT_ANY_THROW(taxes::Budget a(0, 3, "Regard", 7777));
    ASSERT_ANY_THROW(taxes::Budget b(22, -1, "Regard", 7777));
    ASSERT_ANY_THROW(taxes::Budget c(-1, -1, "Regard", 7777));
    ASSERT_ANY_THROW(taxes::Budget d(-10, 8, "Stipend", 3900, "Abdulkin", "Pavel", "Evgenevich", "Mephi", "Student"));
    ASSERT_ANY_THROW(taxes::Budget e(13, 100, "Stipend", 3900, "Abdulkin", "Pavel", "Evgenevich", "Mephi", "Student"));
    ASSERT_ANY_THROW(taxes::Budget f(999, -50, "Stipend", 3900, "Abdulkin", "Pavel", "Evgenevich", "Mephi", "Student"));
}

TEST(BudgetMethods, Setters) {
    taxes::Budget a;
    a.setName("Irina");
    ASSERT_EQ("Irina", a.getOnlyName());
    a.setSurname("Polbennikova");
    ASSERT_EQ("Polbennikova", a.getOnlySurname());
    a.setLastname("Ilynichna");
    ASSERT_EQ("Ilynichna", a.getOnlyLastame());
    a.setPost("Director");
    ASSERT_EQ("Director", a.getPost());
    a.setWorkplace("Liceum");
    ASSERT_EQ("Liceum", a.getWork());
}

TEST(BudgetMethods, Parametres) {
    taxes::Budget a(1, 3, "Regard", 7777);
    ASSERT_EQ(7777, a.getGain("Regard"));
    ASSERT_EQ(0, a.getGain("Other"));
    taxes::Budget b;
    taxes::Payment pay1(111);
    taxes::Payment pay2(222);
    b.addPayment(pay1);
    b.addPayment(pay2);
    // std::pair<std::list<taxes::Payment>::iterator, std::list<taxes::Payment>::iterator> ptr;
    auto ptr = b.getIt();
    ASSERT_EQ(111, (ptr.first)->getSum());
    ASSERT_EQ(222, (++(ptr.first))->getSum());
}

TEST(ContractConstructor, DefaultConstructor) {
    taxes::Contract a;
    ASSERT_EQ("Ivanov", a.getOnlySurname());
    ASSERT_EQ("Ivan", a.getOnlyName());
    ASSERT_EQ("Ivanovich", a.getOnlyLastame());
    ASSERT_EQ(types[1], a.getType());
    ASSERT_EQ("MEPHI", a.getWork());
    ASSERT_EQ("Rector", a.getPost()); 
    ASSERT_EQ(true, a.isEmpty());
    ASSERT_EQ(100, a.getContractNum());
}

TEST(ContractConstructor, InitConstructor) {
    taxes::Contract a(200);
    ASSERT_EQ(200, a.getContractNum());
}

TEST(ContractConstructor, TestException) {
    ASSERT_ANY_THROW(taxes::Contract a(333, 0, 3, "Regard", 7777));
    ASSERT_ANY_THROW(taxes::Contract b(333, 22, -1, "Regard", 7777));
    ASSERT_ANY_THROW(taxes::Contract c(333, -1, -1, "Regard", 7777));
}

TEST(ContractMethods, Setters) {
    taxes::Contract a;
    a.setNum(2890);
    ASSERT_EQ(2890, a.getContractNum());
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}