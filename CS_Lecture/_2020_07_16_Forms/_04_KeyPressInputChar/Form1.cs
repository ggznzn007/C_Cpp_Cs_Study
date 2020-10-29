using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _04_KeyPressInputChar
{
    public partial class Form1 : Form
    {
        // 내부에 char[]이 존재하는 클래스
        StringBuilder inputStr = new StringBuilder(100);

        public Form1()
        {
            InitializeComponent();
            this.Paint += Form1_Paint;
            this.KeyPress += Form1_KeyPress;
        }

        private void Form1_KeyPress(object sender, KeyPressEventArgs e)
        {
            // 입력 문자가 Backspace이면 마지막 1글자를 지워라
            if (e.KeyChar == '\b' && inputStr.Length > 0)
                inputStr.Remove(inputStr.Length - 1, 1);
            else
                inputStr.Append(e.KeyChar);

            Invalidate();   // Paint이벤트 발생
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
            // DrawString을 안쓰고 아래처럼 한 이유는
            // 개행 문자가 적용되도록 하려고
            TextFormatFlags flags = TextFormatFlags.WordBreak;
            string str = inputStr.ToString();
            Font f = new Font("Consolas", 64);
            TextRenderer.DrawText(e.Graphics, str, f,
                this.ClientRectangle, Color.DarkBlue, flags);
        }
    }
}
