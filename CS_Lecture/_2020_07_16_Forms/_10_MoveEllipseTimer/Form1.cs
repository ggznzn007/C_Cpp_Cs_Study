using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _10_MoveEllipseTimer
{
    public partial class Form1 : Form
    {
        const int RAD = 100;
        const int MOVE_VAL = 20;
        int x = 0, y = 0;
        Timer timer = new Timer();

        public Form1()
        {
            InitializeComponent();
            this.Paint += Form1_Paint;
            this.KeyDown += Form1_KeyDown;
            timer.Interval = 100;
            timer.Tick += Timer_Tick;
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.Enter:
                    timer.Start();
                    break;
                case Keys.Left:
                this.x -= MOVE_VAL;
                break;
                case Keys.Right:
                this.x += MOVE_VAL;
                break;
                case Keys.Up:
                this.y -= MOVE_VAL;
                break;
                case Keys.Down:
                this.y += MOVE_VAL;
                break;
            }
        }

        private void Timer_Tick(object sender, EventArgs e)
        {
            Invalidate();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            Pen myPen = new Pen(Brushes.DarkBlue, 5);
            g.DrawEllipse(myPen, x, y, RAD, RAD);
        }
    }
}
