using MediaPlayer;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Media;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _15_Sound
{
    public partial class Form1 : Form
    {
        MediaPlayerClass mp3Player = new MediaPlayerClass();
        Timer timer = new Timer();
        double addOpa = -0.01;

        public Form1()
        {
            InitializeComponent();
            this.btmSond.MouseLeave += BtmSond_MouseLeave;
            this.btmSond.MouseHover += BtmSond_MouseHover;
            this.btmSound.MouseLeave += BtmSound_MouseLeave;
            this.btmSound.MouseHover += BtmSound_MouseHover;
            this.MouseDoubleClick += Form1_MouseDoubleClick;
            this.MouseClick += Form1_MouseClick;
            timer.Interval = 100;
            timer.Tick += Timer_Tick;
        }

        private void Form1_MouseClick(object sender, MouseEventArgs e)
        {
           if(e.Button==MouseButtons.Right)
            {
                this.Opacity = 1.0;
                timer.Stop();
                mp3Player.Stop();

                OpenFileDialog ofd = new OpenFileDialog();
                ofd.ShowDialog();
                string filename = ofd.FileName;

                mp3Player.FileName = filename;
                mp3Player.Play();
            }
        }

        private void Timer_Tick(object sender, EventArgs e)
        {
            this.Opacity += this.addOpa;
            if (this.Opacity <= 0.0 || this.Opacity >= 1.0)
                this.addOpa *= -1;
        }

        private void Form1_MouseDoubleClick(object sender, MouseEventArgs e)
        {
            Image image = Image.FromFile("../../오후여유.jpg");
            this.BackgroundImage = image;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.WindowState = FormWindowState.Maximized;
            this.timer.Start();
        }

        private void BtmSound_MouseHover(object sender, EventArgs e)
        {
            Image image = Properties.Resources.강아지01;
            this.btmSound.BackgroundImage = image;
        }

        private void BtmSound_MouseLeave(object sender, EventArgs e)
        {
            Image image = Properties.Resources.강아지;
            this.btmSound.BackgroundImage = image;
        }

        private void BtmSond_MouseHover(object sender, EventArgs e)
        {
            Image image = Properties.Resources.음악1;
            this.btmSond.BackgroundImage = image;
        }

        private void BtmSond_MouseLeave(object sender, EventArgs e)
        {
            Image image = Properties.Resources.뮤직;
            this.btmSond.BackgroundImage = image;
        }

        private void btmSound_Click(object sender, EventArgs e)
        {
            SoundPlayer sp = new SoundPlayer();
            //sp.Stream = Properties.Resources.강아지1;
            //미리 리소스에 등록하면 가능 
            sp.SoundLocation = "../../강아지1.wav";
            sp.Play();

            
        }

        private void btmSoud_Click(object sender, EventArgs e)
        {
           // mp3Player.EnableContextMenu = true;
            string path = System.IO.Directory.GetCurrentDirectory();
            path += "\\지난날.mp3";// 절대경로 파일 불러오기
            mp3Player.FileName = path;
            mp3Player.Play();
            
        }

        
    } 
}
