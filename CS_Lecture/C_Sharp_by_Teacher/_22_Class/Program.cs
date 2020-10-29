using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _22_Class
{
    class Restaurant
    {
        // 필드(멤버 변수)
        private string[] foods = { "냉면", "칼국수",
                                "쌀국수", "떡볶이",
                                "순대", "튀김"};
        private string selFood = "";
        private int select = -1;

        // 메서드(멤버 함수)
        public void QuestionOrder()
        {
            for(int i = 0; i < foods.Length; i++)
            {
                Console.WriteLine("{0}. {1}", i, foods[i]);
            }
        }

        public void SelectFood()
        {
            Console.WriteLine("어떤 음식을 선택하실래요?");
            select = Int32.Parse(Console.ReadLine());
            selFood = foods[select];
        }

        public void DeliveryFood()
        {
            Console.WriteLine("{0}이 나왔습니다", selFood);
            Console.WriteLine("맛있게 드세요~~~ ^^");
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Restaurant rest = new Restaurant();
            rest.QuestionOrder();
            rest.SelectFood();
            rest.DeliveryFood();
        }
    }
}
