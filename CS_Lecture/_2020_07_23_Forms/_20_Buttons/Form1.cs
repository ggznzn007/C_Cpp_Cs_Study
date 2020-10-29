using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _20_Buttons
{
    public partial class Form1 : Form
    {
        int ballLeft = 0, ballTop = 0;
        const int BALL_SIZE = 100;
        const int MOVE_VAL = 50;

        public Form1()
        {
            InitializeComponent();
            this.Load += Form1_Load;
            this.Paint += Form1_Paint;
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            e.Graphics.FillEllipse(Brushes.DarkBlue,
                this.ballLeft, this.ballTop,
                BALL_SIZE, BALL_SIZE);
            Pen myPen = new Pen(Color.Gold, 10);
            e.Graphics.DrawEllipse(myPen,
                this.ballLeft, this.ballTop,
                BALL_SIZE, BALL_SIZE);
        }

        private void btnLeft_Click(object sender, EventArgs e)
        {
            this.ballLeft -= MOVE_VAL;
            Invalidate();
        }

        private void btnUp_Click(object sender, EventArgs e)
        {
            this.ballTop -= MOVE_VAL;
            Invalidate();
        }

        private void btnRight_Click(object sender, EventArgs e)
        {
            this.ballLeft += MOVE_VAL;
            Invalidate();
        }

        private void btnDown_Click(object sender, EventArgs e)
        {
            this.ballTop += MOVE_VAL;
            Invalidate();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.DoubleBuffered = true;
            this.BackColor = Color.Black;
        }
    }
}
