using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _05_DrawLine
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
            /* this.ClientRectangle는
             * Form클래스로부터 상속받은
             * 현재 화면크기를 나타내는 구조체
             * */

            Graphics g = e.Graphics;
            Pen myPen = new Pen(Brushes.Red, 10);
            g.DrawLine(myPen, 0, 0,
                this.ClientRectangle.Right,
                this.ClientRectangle.Bottom);
        }
    }
}
