namespace _18_WebBrowser
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.toolStrip1 = new System.Windows.Forms.ToolStrip();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.webBrowser1 = new System.Windows.Forms.WebBrowser();
            this.toolStripButton_Home = new System.Windows.Forms.ToolStripButton();
            this.toolStripButton_Prev = new System.Windows.Forms.ToolStripButton();
            this.toolStripButton_Next = new System.Windows.Forms.ToolStripButton();
            this.toolStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // toolStrip1
            // 
            this.toolStrip1.ImageScalingSize = new System.Drawing.Size(64, 64);
            this.toolStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripButton_Home,
            this.toolStripButton_Prev,
            this.toolStripButton_Next});
            this.toolStrip1.Location = new System.Drawing.Point(0, 0);
            this.toolStrip1.Name = "toolStrip1";
            this.toolStrip1.Size = new System.Drawing.Size(985, 71);
            this.toolStrip1.TabIndex = 0;
            this.toolStrip1.Text = "toolStrip1";
            
            // textBox1
            // 
            this.textBox1.Dock = System.Windows.Forms.DockStyle.Top;
            this.textBox1.Font = new System.Drawing.Font("굴림", 16F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.textBox1.Location = new System.Drawing.Point(0, 71);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(985, 32);
            this.textBox1.TabIndex = 1;
            this.textBox1.KeyDown += new System.Windows.Forms.KeyEventHandler(this.textBox1_KeyDown);
            // 
            // webBrowser1
            // 
            this.webBrowser1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.webBrowser1.Location = new System.Drawing.Point(0, 103);
            this.webBrowser1.MinimumSize = new System.Drawing.Size(20, 20);
            this.webBrowser1.Name = "webBrowser1";
            this.webBrowser1.Size = new System.Drawing.Size(985, 493);
            this.webBrowser1.TabIndex = 2;
            this.webBrowser1.Url = new System.Uri("http://www.naver.com", System.UriKind.Absolute);
            // 
            // toolStripButton_Home
            // 
            this.toolStripButton_Home.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripButton_Home.Image = ((System.Drawing.Image)(resources.GetObject("toolStripButton_Home.Image")));
            this.toolStripButton_Home.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.toolStripButton_Home.Name = "toolStripButton_Home";
            this.toolStripButton_Home.Size = new System.Drawing.Size(68, 68);
            this.toolStripButton_Home.Text = "toolStripButton1";
            this.toolStripButton_Home.Click += new System.EventHandler(this.toolStripButton_Home_Click);
            // 
            // toolStripButton_Prev
            // 
            this.toolStripButton_Prev.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripButton_Prev.Image = ((System.Drawing.Image)(resources.GetObject("toolStripButton_Prev.Image")));
            this.toolStripButton_Prev.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.toolStripButton_Prev.Name = "toolStripButton_Prev";
            this.toolStripButton_Prev.Size = new System.Drawing.Size(68, 68);
            this.toolStripButton_Prev.Text = "toolStripButton2";
            this.toolStripButton_Prev.Click += new System.EventHandler(this.toolStripButton_Prev_Click);
            // 
            // toolStripButton_Next
            // 
            this.toolStripButton_Next.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
            this.toolStripButton_Next.Image = ((System.Drawing.Image)(resources.GetObject("toolStripButton_Next.Image")));
            this.toolStripButton_Next.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.toolStripButton_Next.Name = "toolStripButton_Next";
            this.toolStripButton_Next.Size = new System.Drawing.Size(68, 68);
            this.toolStripButton_Next.Text = "toolStripButton3";
            this.toolStripButton_Next.Click += new System.EventHandler(this.toolStripButton_Next_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(985, 596);
            this.Controls.Add(this.webBrowser1);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.toolStrip1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.toolStrip1.ResumeLayout(false);
            this.toolStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ToolStrip toolStrip1;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.WebBrowser webBrowser1;
        private System.Windows.Forms.ToolStripButton toolStripButton_Home;
        private System.Windows.Forms.ToolStripButton toolStripButton_Prev;
        private System.Windows.Forms.ToolStripButton toolStripButton_Next;
    }
}

