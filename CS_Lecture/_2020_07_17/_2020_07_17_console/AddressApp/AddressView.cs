using System;
using System.Collections.Generic;
using System.Text;

namespace AddressApp
{
    class AddressView
    {
        private AddressManager addrMgr = new AddressManager();
        private int selMenu;

        private void ClearView()
        {
            Console.ReadLine(); // 결과값이 보이도록 잠시 멈춤
            Console.Clear();
        }
        /// <summary>
        /// 화면에 메뉴보여주기
        /// </summary>
        private void ShowMenu()
        {
            Console.WriteLine("------ 주소록 관리 -----");
            Console.WriteLine("1. 주소록 입력");
            Console.WriteLine("2. 주소록 삭제");
            Console.WriteLine("3. 주소록 수정");
            Console.WriteLine("4. 주소록 검색");
            Console.WriteLine("5. 주소록 전체출력");
            Console.WriteLine("6. 어플리케이션 종료");
        }
        /// <summary>
        /// AddressManager객체에 선택 번호 분기 처리하기
        /// </summary>
        private bool DispatchMenu()
        {
            bool isRun = true;

            switch (this.selMenu)
            {
                case 1:
                    addrMgr.InsertAddress();
                    break;
                case 2:
                    addrMgr.DeleteAddress();
                    break;
                case 3:
                    addrMgr.UpdateAddress();
                    break;
                case 4:
                    addrMgr.SearchAddress();
                    break;
                case 5:
                    addrMgr.PrintAllAddress();
                    break;
                case 6:
                    addrMgr.Exit();
                    isRun = false;
                    break;
                default:
                    break;
            }

            return isRun;
        }

        /// <summary>
        /// 메뉴 번호 선택 하기
        /// </summary>
        /// <returns>메뉴 번호</returns>
        private void GetSelMenu()
        {
            Console.WriteLine();
            Console.Write("메뉴를 선택하세요 >> ");
            string strNum = Console.ReadLine();
            int num = Int32.Parse(strNum);
            this.selMenu = num;
        }
        public void MainLoop()
        {
            bool isRun = true;
            while (isRun)
            {
                ShowMenu();
                GetSelMenu();
                isRun = DispatchMenu();
                ClearView();
            }
        }
        /// <summary>
        /// 화면에 주소 정보 출력하기
        /// </summary>
        public static void PrintAddressInfo(Address addr)
        {
            Console.WriteLine(addr.ToString());
        }
    }
}
