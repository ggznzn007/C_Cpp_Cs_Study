using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _11_MouseSelectEllipse
{
    public partial class Form1 : Form
    {
        private int x = 50, y = 50;
        private const int DIAMETER = 200;
        private bool isSelEllipse = false; // 원을 선택했니?

        public Form1()
        {
            InitializeComponent();
            this.Paint += Form1_Paint;
            this.Load += Form1_Load;
            this.MouseDown += Form1_MouseDown;
            this.MouseUp += Form1_MouseUp;
        }

        private void Form1_MouseUp(object sender, MouseEventArgs e)
        {
            Console.WriteLine("Mouse Up");

            this.isSelEllipse = false;
            Invalidate();
        }

        private void Form1_MouseDown(object sender, MouseEventArgs e)
        {
            Console.WriteLine("Mouse Down");
            // 마우스 왼쪽 버튼이 눌렸다면
            if(e.Button == MouseButtons.Left)
            {
                // 원의 중심좌표와 마우스 클릭 위치를 전달해서
                // 원안에 있는지 판단하는 메서드
                int centX = this.x + (DIAMETER / 2);
                int centY = this.y + (DIAMETER / 2);
                if(IsInEllipse(centX, centY, e.X, e.Y))
                {
                    this.isSelEllipse = true;
                    Invalidate();
                }
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.BackColor = Color.Green;
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            Pen myPen = new Pen(Color.Red, 10);
            g.DrawEllipse(myPen, this.x, this.y, DIAMETER, DIAMETER);

            if (this.isSelEllipse)
            {
                myPen = new Pen(Color.White, 10);
                g.DrawRectangle(myPen, this.x, this.y, DIAMETER, DIAMETER);
            }
        }

        /// <summary>
        /// 원의 중심으로부터 마우스 클릭 위치를 계산하여
        /// 원 안에 클릭했는지 원 밖을 클릭했는지 판단
        /// </summary>
        /// <param name="centX">원의 중심 x좌표</param>
        /// <param name="centY">원의 중심 y좌표</param>
        /// <param name="mouseX">마우스 클릭 x좌표</param>
        /// <param name="mouseY">마우스 클릭 y좌표</param>
        /// <returns>true면 원 내, false면 원 밖</returns>
        private bool IsInEllipse(int centX, int centY,
                                int mouseX, int mouseY)
        {
            if(LengthDistance(centX, centY, mouseX, mouseY)
                <= DIAMETER / 2)
            {
                return true;
            }

            return false;
        }

        /// <summary>
        /// 두 점의 거리 계산
        /// </summary>
        /// <param name="x0"></param>
        /// <param name="y0"></param>
        /// <param name="x1"></param>
        /// <param name="x2"></param>
        /// <returns>거리값</returns>
        private double LengthDistance(int x0, int y0,
                                      int x1, int y1)
        {
            double result = 0;
            result = Math.Sqrt((x1 - x0) * (x1 - x0) + 
                               (y1 - y0) * (y1 - y0));
            return result;
        }
    }
}
