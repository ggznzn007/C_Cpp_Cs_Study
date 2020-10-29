using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/* <주소록 프로젝트>
 * 기능 정의
 * 0) 메뉴 반복 루프
 *      void MainLoop();
 * 1) 메뉴 출력
 *      void PrintMenu();
 * 2) 메뉴 선택
 *      int GetSelMenu();
 * 3) 주소 정보 등록(이름, 전화, 주소)
 *      void InputAddress();
 * 4) 주소 정보 검색(이름으로 검색)
 *      void SearchAddress();
 * 5) 주소 정보 변경(이름으로 검색 후 변경)
 *      void UpdateAddress();
 * 6) 주소 정보 삭제(이름으로 검색 후 삭제)
 *      void DeleteAddress();
 * 7) 주소 정보 전체출력
 *      void PrintAllAddress();
 * 8) 종료
 *      void ProgramExit();
 * 10) 화면 지우기
 *      void ClearView();
 */

namespace _23_AddressManager
{
    enum CMD_NUM
    {
        INPUT, 
        SEARCH,
        UPDATE,
        DELETE,
        PRINTALL,
        EXIT
    }
    class Address
    {
        
        public string name = "";
        public string phone = "";
        public string address = "";
    }

    class Program
    {
        static List<Address> listAddress =
                        new List<Address>(10);

        static void Main(string[] args)
        {
            MainLoop();
        }

        static void MainLoop()
        {
            while (true)
            {
                ClearView();
                PrintMenu();
                int sel = GetSelMenu();

                switch ((CMD_NUM)sel)
                {
                    case CMD_NUM.INPUT:
                        InputAddress();
                        break;
                    case CMD_NUM.SEARCH:
                        SearchAddress();
                        break;
                    case CMD_NUM.UPDATE:
                        UpdateAddress();
                        break;
                    case CMD_NUM.DELETE:
                        DeleteAddress();
                        break;
                    case CMD_NUM.PRINTALL:
                        PrintAllAddress();
                        break;
                    case CMD_NUM.EXIT:
                        ProgramExit();
                        break;
                    default:
                        Console.WriteLine("Invalid Number!!!");
                        break;
                }
            }
        }
        static void PrintMenu()
        {
            Console.WriteLine("==================================");
            Console.WriteLine("0. 주소 입력");
            Console.WriteLine("1. 주소 검색");
            Console.WriteLine("2. 주소 수정");
            Console.WriteLine("3. 주소 삭제");
            Console.WriteLine("4. 주소 전체 출력");
            Console.WriteLine("5. 프로그램 종료");
            Console.WriteLine("==================================");
        }

        static int GetSelMenu()
        {
            int sel = -1;
            Console.Write("메뉴 선택 : ");
            sel = Int32.Parse(Console.ReadLine());
            return sel;
        }

        static void InputAddress()
        {
            ClearView();
            Address addr = new Address();
            Console.Write("이름 입력 : ");
            addr.name = Console.ReadLine();
            Console.Write("전화 입력 : ");
            addr.phone = Console.ReadLine();
            Console.Write("주소 입력 : ");
            addr.address = Console.ReadLine();

            listAddress.Add(addr);
        }

        static void SearchAddress()
        {
            ClearView();
            Console.Write("이름 입력 : ");
            string name = Console.ReadLine();
            for(int i = 0; i < listAddress.Count; i++)
            {
                Address addr = listAddress[i];
                if(name == addr.name)
                {
                    Console.WriteLine("이름 : " + addr.name);
                    Console.WriteLine("전화 : " + addr.phone);
                    Console.WriteLine("주소 : " + addr.address);
                    break;
                }
            }
            Console.ReadLine();
        }

        static void UpdateAddress()
        {
            Console.WriteLine("UpdateAddress");
            Console.ReadLine();
        }

        static void DeleteAddress()
        {
            Console.WriteLine("DeleteAddress");
            Console.ReadLine();
        }

        static void PrintAllAddress()
        {
            ClearView();
            for(int i = 0; i < listAddress.Count; i++)
            {
                Address addr = listAddress[i];
                Console.WriteLine("-----------{0}-----------", i + 1);
                Console.WriteLine("이름 : " + addr.name);
                Console.WriteLine("전화 : " + addr.phone);
                Console.WriteLine("주소 : " + addr.address);
                Console.WriteLine();
            }
            Console.ReadLine();
        }

        static void ProgramExit()
        {
            Environment.Exit(0);
        }

        static void ClearView()
        {
            Console.Clear();
        }
    }
}
