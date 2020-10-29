using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2020_07_21_HW_01
{
    public partial class Form1 : Form
    {
        Image image = null;
        TextureBrush tBrush = null;
        
        bool now = false;
        int x = 100, y = 100;
        

        public Form1()
        {
            InitializeComponent();
            this.MouseDown += Form1_MouseDown;
            this.MouseClick += Form1_MouseClick;
            this.Paint += Form1_Paint;

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

       

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            g.DrawImage(image, 100, 0, 100, 100);
            image = Image.FromFile("../../cat.jpg");
            tBrush = new TextureBrush(image);

        }

        private void Form1_MouseClick(object sender, MouseEventArgs e)
        {
            
            if (e.Button == MouseButtons.Left)
            {
                image = Image.FromFile("../../cat.jpg");
                tBrush = new TextureBrush(image);
            }
            else if(e.Button==MouseButtons.Right)
            {
                image = Image.FromFile("../../puppy.jpg");
                tBrush = new TextureBrush(image);
            }
            this.DoubleBuffered = true;

        }
    }
}
