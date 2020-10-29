using System;
using System.Collections.Generic;
using System.Text;

namespace AddressApp
{
    /* 주소록 데이터를 의미하는 클래스
     */
    class Address
    {
        private string name;
        int age;
        private string addr;

        public string Name { get => name; set => name = value; }
        public int Age { get => age; set => age = value; }
        public string Addr { get => addr; set => addr = value; }

        public override string ToString()
        {
            string str = "\n"  +
                         "이름 : " + name + "\n" +
                         "나이 : " + age + "\n" +
                         "주소 : " + addr + "\n" +
                         "-----------------------\n";
            return str;
        }
    }
}
