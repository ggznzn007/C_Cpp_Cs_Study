using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _18_WebBrowser
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        
        private void textBox1_KeyDown(object sender, KeyEventArgs e)
        {
            switch (e.KeyCode)
            {
                case Keys.Enter:
                string strUrl = textBox1.Text;
                if (strUrl.Substring(0, 4) != "http")
                    strUrl = strUrl.Insert(0, @"http://");
                webBrowser1.Url = new Uri(strUrl);
                break;
            }
        }

        

        private void toolStripButton_Home_Click(object sender, EventArgs e)
        {
            webBrowser1.GoHome();
        }

        private void toolStripButton_Prev_Click(object sender, EventArgs e)
        {
            webBrowser1.GoBack();
        }

        private void toolStripButton_Next_Click(object sender, EventArgs e)
        {
            webBrowser1.GoForward();

        }
    }
}
