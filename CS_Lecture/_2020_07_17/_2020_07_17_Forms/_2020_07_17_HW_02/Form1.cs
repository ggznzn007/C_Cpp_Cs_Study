using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2020_07_17_HW_02
{
    public partial class Form1 : Form
    {
        const int RAD = 100;
        const int MOVE_VAL = 10;
        int x = 240, y = 0;
        Timer timer = new Timer();
        int yMove = 20;
        int chekStart = 0;
        public Form1()
        {
            InitializeComponent();
            this.Paint += Form1_Paint;
            this.KeyDown += Form1_KeyDown;
            timer.Interval = 20;
            timer.Tick += Timer_Tick;
        }

        private void Timer_Tick(object sender, EventArgs e)
        {
            if (y + 100 >= this.ClientRectangle.Bottom)
            { 
                yMove = -yMove;
                chekStart = 1;
            }
            else if (y <= this.ClientRectangle.Top && chekStart == 1)
            {
                yMove = -yMove;
            }
            y += yMove;

            this.DoubleBuffered = true;
            Invalidate();
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.Enter:
                    timer.Start();
                    break;
            }
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            Pen myPen = new Pen(Brushes.Red, 5);
            g.FillEllipse(Brushes.Red, x, y, RAD, RAD);
        }
    }
}
