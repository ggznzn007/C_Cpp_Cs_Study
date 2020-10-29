using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _07_DrawEllipse
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
            Rectangle rc = this.ClientRectangle;
            rc.Inflate(-20, -20);
            Pen myPen = new Pen(Brushes.Red, 30);
            Graphics g = e.Graphics;
            g.DrawEllipse(myPen, rc);

            rc.Inflate(-50, -50);
            g.FillEllipse(Brushes.Gold, rc);
        }
    }
}
