using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _19_Cannon
{
    public partial class Form1 : Form
    {
        int ballLeft, ballTop;
        const int BALL_SIZE = 50;
        double speed = 100;             // 초속
        double degree = 45;             // 각도
        const double G = 9.80665D;      // 중력가속도
        Brush ballBrush = Brushes.Red;

        public Form1()
        {
            InitializeComponent();
            this.Load += Form1_Load;
            this.KeyDown += Form1_KeyDown;
            this.Paint += Form1_Paint;
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            e.Graphics.FillEllipse(this.ballBrush,
                this.ballLeft, this.ballTop,
                BALL_SIZE, BALL_SIZE);
        }

        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.Enter:
                    {
                        Graphics g = CreateGraphics();
                        double x, y;
                        for(int t=0; ; t++)
                        {
                            g.Clear(Color.Black);
                            double radian = degree * Math.PI / 180;
                            x = this.speed * Math.Cos(radian) * t;
                            y = (this.speed * Math.Sin(radian) * t)
                                - (G * t * t * 0.5);
                            y = -y;// y축이 Catersian 좌표에 반대라서
                        g.FillEllipse(Brushes.Gold, (float)(x + this.ballLeft),
                                                    (float)(y + ballTop), BALL_SIZE, BALL_SIZE);

                        if (y > this.ClientRectangle.Bottom)
                            break;

                        Thread.Sleep(100);

                        }
                        /*.NET class에서 소멸자의 호출시점을 정확하게 알수없으므로
                        대신에 Idisposable을 상속받게 해서
                        사용하지 않을 때는 Dispose매서드를 호출해서
                        객체 내부의 리소스를 해제하도록 한다.*/
                        g.Dispose();
                    }
                    break;
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.BackColor = Color.Black;
            this.ballLeft = this.Width / 10;
            this.ballTop = this.Height / 10 * 7;
        }
    }
}
