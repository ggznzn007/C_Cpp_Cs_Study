using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _01_DrawString
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Console.WriteLine("Paint이벤트");
            Graphics g = e.Graphics;
            g.DrawString("Hello World", Font,
                Brushes.DarkBlue, 10, 10);
            Font f = new Font("궁서", 70);
            g.DrawString("아름다운 대한민국",
                f, Brushes.Indigo, 10, 100);
        }
    }
}
