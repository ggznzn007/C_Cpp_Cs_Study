using System;
using System.Drawing;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        Image img = null;
        TextureBrush tBrush = null;
        int pic = 0;
        Rectangle aoao = new Rectangle(50, 50, 50, 50);
        public Form1()
        {
            InitializeComponent();
            this.Paint += Form1_Paint;
            this.Load += Form1_Load;
            this.MouseClick += Form1_MouseClick;
            
        }
        private void Form1_MouseClick(object sender, MouseEventArgs e)
        {
            switch (pic)
            {
                case 1:
                this.img = Image.FromFile("../../스칼렛요한슨.jpg");
                break;
                case 2:
                this.img = Image.FromFile("../../기네스드래프트.jpg");
                break;
                case 3:
                this.img = Image.FromFile("../../블랑.jpg");
                break;
                case 4:
                this.img = Image.FromFile("../../빅아이.jpg");
                break;
                case 5:
                this.img = Image.FromFile("../../빅웨이브.jpg");
                break;
                case 6:
                this.img = Image.FromFile("../../스컬핀IPA.jpg");
                break;
                case 7:
                this.img = Image.FromFile("../../에델바이스.jpg");
                break;
                case 8:
                this.img = Image.FromFile("../../코젤다크.jpg");
                break;
                case 9:
                this.img = Image.FromFile("../../파울라너.jpg");
                break;
                case 10:
                this.img = Image.FromFile("../../리트리버.jpg");
                break;
                case 11:
                break;
            }
            pic++;
            if (pic == 11)
                pic = 1;
            this.tBrush = new TextureBrush(img);
            Invalidate();
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            this.DoubleBuffered = true;
            this.BackgroundImageLayout = ImageLayout.Stretch;
            this.img = Image.FromFile("../../스칼렛요한슨.jpg");
            this.tBrush = new TextureBrush(this.img);
            
        }
        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            e.Graphics.FillRectangle(this.tBrush, this.ClientRectangle);
            
        }
    }
}