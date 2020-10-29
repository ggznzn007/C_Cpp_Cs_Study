using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _13_TextureBrush
{
    public partial class Form1 : Form
    {
        Image img = null;
        TextureBrush tBrush = null;
        bool isJang = true;

        public Form1()
        {
            InitializeComponent();
            this.Paint += Form1_Paint;
            this.Load += Form1_Load;
            this.MouseClick += Form1_MouseClick;
        }

        private void Form1_MouseClick(object sender, MouseEventArgs e)
        {
            this.isJang = !this.isJang;
            if (this.isJang)
                this.img = Image.FromFile("장나라.jpg");
            else
                this.img = Image.FromFile("강아지.jpg");
            this.tBrush = new TextureBrush(img);
            Invalidate();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.DoubleBuffered = true;
            this.img = Image.FromFile("장나라.jpg");
            this.tBrush = new TextureBrush(this.img);
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            e.Graphics.FillRectangle(this.tBrush, this.ClientRectangle);
        }

        private void Form1_Load_1(object sender, EventArgs e)
        {

        }
    }
}
