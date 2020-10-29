using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _06_DrawRectangle
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
            Rectangle rc = this.ClientRectangle;
            rc.Inflate(-20, -20);   // 너비,높이 20축소
            Pen myPen = new Pen(Brushes.Gold, 30);
            g.DrawRectangle(myPen, rc);

            rc.Inflate(-50, -50);
            g.FillRectangle(Brushes.Red, rc);
        }
    }
}
