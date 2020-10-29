using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2020_07_21_HW_04
{
    public partial class Form1 : Form
    {
        const int textBoxSize = 20;
        int x = 100, y = 100;
        int catX = 50, catY = 50;
        bool now = false;
        Timer timer = new Timer();

        public Form1()
        {
            InitializeComponent();
            this.Paint += Form1_Paint;
            this.MouseMove += Form1_MouseMove;
            this.MouseDown += Form1_MouseDown;
            this.MouseUp += Form1_MouseUp;
            timer.Interval = 40;
            timer.Tick += Timer_Tick;
            timer.Start();
        }

        private void Timer_Tick(object sender, EventArgs e)
        {
            if (catX == x && catY == y)
            { }
            else
            {
                if (catX > x)
                    catX -= (catX - x) / 20;
                else if (catX < x)
                    catX += (x - catX) / 20;
                if (catY > y)
                    catY -= (catY - y) / 20;
                else if (catY < y)
                    catY += (y - catY) / 20;
            }
            Invalidate();
        }

        private void Form1_MouseUp(object sender, MouseEventArgs e)
        {
            now = !now;
            Invalidate();
        }

        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
            {
                now = !now;
            }
            this.x = e.X;
            this.y = e.Y;
            Invalidate();
        }

        private void Form1_MouseMove(object sender, MouseEventArgs e)
        {
            if (this.now)
            {
                this.x = e.X;
                this.y = e.Y;
                Invalidate();
            }
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Image image1 = Image.FromFile("../../쥐.png");
            Image image2 = Image.FromFile("../../고양이.png");
            Graphics g = e.Graphics;
            if (now)
            {
                this.DoubleBuffered = true;
                e.Graphics.DrawImage(image1,x,y);
            }
            this.DoubleBuffered = true;
            e.Graphics.DrawImage(image2,catX, catY);
        }
    }
}
