using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _09_Timer
{
    public partial class Form1 : Form
    {
        Timer timer = new Timer();
        int cnt = 0;
        bool isStart = false;
        public Form1()
        {
            InitializeComponent();
            timer.Interval = 100;
            timer.Tick += Timer_Tick;
        }

        private void Timer_Tick(object sender, EventArgs e)
        {
            Console.WriteLine(cnt++);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            isStart = !isStart;
            if (isStart)
            { 
                timer.Start();
                btnStart.Text = "타이머 시작";
            }
            else
            { 
                timer.Stop();
                btnStart.Text = "타이머 정지";
            }
        }
    }
}
