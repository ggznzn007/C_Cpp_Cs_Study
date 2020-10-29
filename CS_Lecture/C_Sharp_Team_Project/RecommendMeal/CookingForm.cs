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
    public partial class CookingForm : Form
    {
        List<string> combine = new List<string>();
        Form1 fm1;
        Thread tprogressBar;
        Thread tAnimatePicture;
        static object obj = new object();
        bool Open = false;
        bool End = false;

        public CookingForm(Form1 form)
        {
            InitializeComponent();
            fm1 = form;
            this.Load += CookingForm_Load;
            this.Paint += CookingForm_Paint;
        }

        private void ProgressBar1()
        {
            lock (obj)
            {
                int value = progressBar1.Value;
                label_Value.Text = value.ToString();
                progressBar1.Value = value;
                Thread.Sleep(1000);
            }
        }

        private void AnimatePicture()
        {
            lock(obj)
            {
                Thread.Sleep(100);
            }
        }

        private void CookingForm_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            Font f = new Font("궁서", 20);
            g.DrawString("조합 중입니다.", f, Brushes.Indigo, 300, 400);
        }

        private void CookingForm_Load(object sender, EventArgs e)
        {
            foreach (string ingredient in fm1.listBox1.Items)
            {
                combine.Add(ingredient);
                Console.WriteLine(ingredient);
            }

            Open = true;
            tprogressBar = new Thread(ProgressBar1);
            tAnimatePicture = new Thread(AnimatePicture);

            Console.WriteLine("Starting tprogressBar thread");
            tprogressBar.Start();
            Console.WriteLine("Starting tAnimatePicture thread");
            tAnimatePicture.Start();

            Console.WriteLine("Interrupting tprogressBar thread");
            tprogressBar.Interrupt();

            Console.WriteLine("Interrupting tAnimatePicture thread");
            tAnimatePicture.Interrupt();

            Console.WriteLine("Wating until tPrpgressBar thread stops");
            tprogressBar.Join();

            Console.WriteLine("Wating until tAnimatePicture thread stops");
            tAnimatePicture.Join();



        }

       
    }
}
