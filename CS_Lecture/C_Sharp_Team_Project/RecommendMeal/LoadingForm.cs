using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
namespace RecommendMeal
{
    public partial class LoadingForm : Form
    {
        Form1 fm1;
        Image image = null;
        Image image2 = null;
        //Timer FormTimer = new Timer();
        //Timer progressbarTimer = new Timer();
        private Thread Bar;
        private Thread Cooking;
        List<string> combine = new List<string>();
        int i = 0;
        int num = 20;
        int x = 213, y = 50;
        bool isBar = true;
        bool isCooking = true;
        bool isCookimage = true;
        string rice = "냉동밥", egg = "계란", onion = "양퐈",
        tofu = "두부", kimchi = "김취", tuna = "동원참치";
        public LoadingForm(Form1 form)
        {
            InitializeComponent();
            this.Paint += Form1_Paint;
            this.Load += Form1_Load;
            //FormTimer.Interval = 1000;
            //FormTimer.Tick += Timer_Tick;
            //FormTimer.Start();
            //progressbarTimer.Interval = 1000;
            //progressbarTimer.Tick += Progressbar_Tick;
            //progressbarTimer.Start();
            fm1 = form;
            foreach (string ingredient in fm1.listBox1.Items)
            {
                combine.Add(ingredient);                
            }
            //this.DoubleBuffered = true;
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            image = Image.FromFile("../../냄비1.jpg");
            image2 = Image.FromFile("../../냄비2.jpg");
            Bar = new Thread(BarState);
            Cooking = new Thread(CookingState);
            Bar.Start();
            Cooking.Start();
            DoubleBuffered = true;
        }
        private void BarState()
        {
            while (isBar)
            {
                progressBar1.Value += num;
                Thread.Sleep(1000);
                Console.WriteLine(num);
                if (progressBar1.Value == 100)
                {
                    //Thread.Sleep(1000);
                    isBar = false;
                }
            }
            Invalidate();
        }
        private void CookingState()
        {
            while (isCooking)
            {
                isCookimage = !isCookimage;
                Invalidate();
                Console.WriteLine(isCookimage);
                Thread.Sleep(100);
                if (isBar == false) { isCooking = false; }
            }
            Invalidate();
        }
        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            if (isCookimage == true) { e.Graphics.DrawImage(image, x, y, new Rectangle(200, 50, 400, 400), GraphicsUnit.Pixel); }//1
            else if (isCookimage == false) { e.Graphics.DrawImage(image2, x, y, new Rectangle(200, 50, 400, 400), GraphicsUnit.Pixel); }//2
            Graphics g = e.Graphics;
            Font f = new Font("HY견고딕", 20);
            g.DrawString("AI가 최적의 요리를 찾는 중입니다.", f, Brushes.White, 200, 480);
            if (isBar == false && isCooking == false)
            {
                Bar.Interrupt();
                Cooking.Interrupt();
                Tuna_Kimchi tuna_Kimchi = new Tuna_Kimchi();
                Egg_Rice egg_Rice = new Egg_Rice();
                Tofu_Tuna tofu_Tuna = new Tofu_Tuna();

                this.Close();
                if (combine.Contains(rice) && combine.Contains(egg))
                {
                    egg_Rice.Show();
                }
                else if (combine.Contains(tofu) && combine.Contains(tuna))
                {
                    tofu_Tuna.Show();
                }
                else if (combine.Contains(onion) && combine.Contains(tuna) && combine.Contains(kimchi))
                {
                    tuna_Kimchi.Show();
                }
                else
                {
                    MessageBox.Show("알맞는 조합이 없습니다 다시 선택해주세요");
                }
            }
        }
    }
}