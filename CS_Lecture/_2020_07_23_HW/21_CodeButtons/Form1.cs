using _21_CodeButtons.Properties;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _21_CodeButtons
{
    public partial class Form1 : Form
    {
        const int FORM_WIDTH = 1000;
        const int FORM_HEIGHT = 1000;
        const int BUTTON_SIZE = 50;
        int rows, cols;
        int cnt = 0;

        public Form1()
        {
            InitializeComponent();
            this.Load += Form1_Load;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            this.Width = FORM_WIDTH+18;
            this.Height = FORM_HEIGHT+38;

            this.rows = FORM_WIDTH / BUTTON_SIZE;
            this.cols = FORM_HEIGHT / BUTTON_SIZE;

            MakeButtons();
        }

        private void MakeButtons()
        {
            Random random = new Random();
            for(int i = 0; i < this.rows; i++)  // 세로 행
            {
                for(int j = 0; j < this.cols; j++)  // 가로 열
                {
                    MyButton btn = new MyButton();
                    btn.Left = j * BUTTON_SIZE;
                    btn.Top = i * BUTTON_SIZE;
                    btn.Width = BUTTON_SIZE;
                    btn.Height = BUTTON_SIZE;
                    btn.Margin = new Padding(0);
                    btn.Text = cnt++.ToString();
                    btn.BackColor = Color.FromArgb(255, 
                                    random.Next(256), 
                                    random.Next(256), 
                                    random.Next(256));
                    this.Controls.Add(btn);
                }
            }
        }
        // 버튼 클릭시 화면 이미지가 폭탄이미지로 변경
        // 1초후 버튼이 사라지게 하세요

    }

    public class MyButton : Button
    {
        Timer timer = new Timer();

        public MyButton()
        {
            timer.Interval = 1000;
            timer.Tick += Timer_Tick;
            this.Click += MyButton_Click;
        }

        private void MyButton_Click(object sender, EventArgs e)
        {
            this.BackgroundImage = Resources.bomb;
            this.BackgroundImageLayout = ImageLayout.Stretch;
            timer.Start();
        }

        private void Timer_Tick(object sender, EventArgs e)
        {
            timer.Stop();
            this.Dispose();
        }
    }
}
