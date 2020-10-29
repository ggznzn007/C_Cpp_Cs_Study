using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2020_07_17_HW_01
{
    public partial class Form1 : Form
    {
        const int RAD = 100;
        const int MOVE_VAL = 10;
        int x = 0, y = 100;
        Timer timer = new Timer();
        int xMove = 10;
        int chekStart = 0;

        public Form1()
        {
            InitializeComponent();
            this.DoubleBuffered = true;
            this.Paint += Form1_Paint;
            this.KeyDown += Form1_KeyDown;
            timer.Interval = 10;
            timer.Tick += Timer_Tick;

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

        private void Timer_Tick(object sender, EventArgs e)
        {
            if (x + 100 >= this.ClientRectangle.Right)
            { 
                xMove = -xMove;
                chekStart = 1;
            }
            else if (x <= this.ClientRectangle.Left && chekStart == 1)
            {
                xMove = -xMove;
            }
            x += xMove;

            //this.DoubleBuffered = true;
            Invalidate();
        }



  

    private void Form1_Paint(object sender, PaintEventArgs e)
    {
        Graphics g = e.Graphics;
        Pen myPen = new Pen(Brushes.Red, 5);
        g.FillEllipse(Brushes.Red, x, y, RAD, RAD);
    }
}
}





