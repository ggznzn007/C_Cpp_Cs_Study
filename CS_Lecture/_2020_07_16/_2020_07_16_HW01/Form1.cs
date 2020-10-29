using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2020_07_16_HW01
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            this.Paint += Form1_Paint;
            this.Layout += Form1_Layout;
            
        }

        private void Form1_Layout(object sender, LayoutEventArgs e)
        {
            Invalidate();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            Pen myPen = new Pen(Brushes.Red, 10);
            g.DrawLine(myPen, 0, 0,
                this.ClientRectangle.Right,
                this.ClientRectangle.Bottom);
            g.DrawLine(myPen,  800, 0,
                this.ClientRectangle.Left,
                this.ClientRectangle.Bottom);
        }
    }
}
