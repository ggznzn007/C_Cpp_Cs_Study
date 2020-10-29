using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _02_KeyPressInputChar
{
    public partial class Form1 : Form
    {
        string inputStr;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void Form1_KeyPress(object sender, KeyPressEventArgs e)
        {
            //Console.WriteLine("키가 눌림 : " + e.KeyChar);
            inputStr += e.KeyChar;

            Graphics g = CreateGraphics();
            Font f = new Font("맑은 고딕", 20);
            g.DrawString(inputStr, f, Brushes.Green, 10, 10);
            g.Dispose();
        }
    }
}
