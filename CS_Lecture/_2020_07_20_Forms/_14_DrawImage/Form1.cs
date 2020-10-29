using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _14_DrawImage
{
    public partial class Form1 : Form
    {
        Image image = null;

        public Form1()
        {
            InitializeComponent();
            this.DoubleBuffered = true;//깜빡임 방지
            this.Load += Form1_Load;//초기화
            this.Paint += Form1_Paint;//그리기
            this.Layout += Form1_Layout;//폼크기변경
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            image = Image.FromFile("../../스칼렛요한슨.jpg");
        }

        private void Form1_Layout(object sender, LayoutEventArgs e)
        {
            Invalidate();
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            //e.Graphics.DrawImage(image, 0, 0);// 원본크기
            //e.Graphics.DrawImage(image, this.ClientRectangle);// 사각형에 맞춰서 출력
            //e.Graphics.DrawImage(image, this.ClientRectangle.Right/4,
            //this.ClientRectangle.Bottom/4,
            //this.ClientRectangle.Width/2,
            //this.ClientRectangle.Height/2);
            
            /*e.Graphics.DrawImage(image, 100, 100,//폼에서의 이미지 출력 원점
                new Rectangle(130,62,1000-132,850-62),GraphicsUnit.Pixel);// 이미지의 추출 범위*/

            e.Graphics.DrawImage(image, this.ClientRectangle,//폼에서의 이미지 출력 원점
                new Rectangle(130, 62, 1000 - 132, 850 - 62), GraphicsUnit.Pixel);// 이미지의 추출 범위
        }
    }
}
