using System;
using System.Collections.Generic;
using System.Text;

namespace AddressApp
{
    class AddressManager
    {
        private List<Address> listAddress =
                            new List<Address>();

        public void InsertAddress()
        {
            Address address = new Address();
            Console.Write("이름 입력 : ");
            address.Name = Console.ReadLine();
            Console.Write("나이 입력 : ");
            address.Age = Int32.Parse(Console.ReadLine());
            Console.Write("주소 입력 : ");
            address.Addr = Console.ReadLine();

            listAddress.Add(address);

            Console.WriteLine("주소 입력 처리 ~ ");
        }
        public void DeleteAddress()
        {
            Console.Write("삭제할 사람 이름 입력 >> ");
            string name = Console.ReadLine();
            for(int i = 0; i < listAddress.Count; i++)
            {
                Address addr = listAddress[i];
                if(addr.Name == name)   // 삭제 대상 찾았다.
                {
                    listAddress.RemoveAt(i);
                    break;
                }
            }

            Console.WriteLine("주소 삭제 처리 ~ ");
        }
        public void UpdateAddress()
        {
            Console.Write("수정할 이름 입력 >> ");
            string name = Console.ReadLine();
            for(int i = 0; i < listAddress.Count; i++)
            {
                Address addr = listAddress[i];
                if(addr.Name == name)    // 수정 대상 찾음
                {
                    Console.Write("이름 >> ");
                    addr.Name = Console.ReadLine();
                    Console.Write("나이 >> ");
                    addr.Age = Int32.Parse(Console.ReadLine());
                    Console.Write("주소 >> ");
                    addr.Addr = Console.ReadLine();
                    break;
                }
            }
            Console.WriteLine("주소 수정 처리 ~ ");
        }
        public void SearchAddress()
        {
            Console.Write("검색할 이름 입력 >> ");
            string name = Console.ReadLine();
            for(int i = 0; i < listAddress.Count; i++)
            {
                Address addr = listAddress[i];
                if(addr.Name == name)
                {
                    AddressView.PrintAddressInfo(addr);
                    break;
                }
            }
            Console.WriteLine("주소 검색 처리 ~ ");
        }
        public void PrintAllAddress()
        {
            for(int i = 0; i < listAddress.Count; i++)
            {
                Address addr = listAddress[i];
                AddressView.PrintAddressInfo(addr);
            }

            Console.WriteLine("주소 전체 출력 처리 ~ ");
        }
        public void Exit()
        {
            Console.WriteLine("어플리케이션 종료 처리 ~ ");
        }
    }
}
