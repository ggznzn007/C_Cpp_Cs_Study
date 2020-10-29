using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2020_07_22_HW_01
{
    public partial class Form1 : Form
    {

        int x = 0, y = 0;
        public Form1()
        {
            InitializeComponent();
            this.Paint += Form1_Paint;
            
        }

        

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            Pen myPen = new Pen(Brushes.White, 2);
            g.DrawRectangle(myPen, x, y, 20, 20);
            
            

        }
    }
}
