using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _40_Math_Watch
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            this.BackColor = Color.Black;
            this.DoubleBuffered = true;
            this.Layout += Form1_Layout;
            this.Paint += Form1_Paint;
        }

        private void Form1_Layout(object sender, LayoutEventArgs e)
        {
            Invalidate();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            int centerX = this.ClientRectangle.Right/2;
            int centerY = this.ClientRectangle.Bottom/2;
            int rad = 300;
            for (double angle = 0; angle < 360; angle += 10)
            {
                int x = centerX + (int)(Math.Cos(angle * Math.PI / 180) * rad);
                int y = centerY + (int)(Math.Sin(angle * Math.PI / 180) * rad);
                Pen pen = new Pen(Brushes.Gold, 2);
                e.Graphics.DrawEllipse(pen, x, y, 20, 20);
            }
        }
    }
}
