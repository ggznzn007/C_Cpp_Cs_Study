namespace _15_Sound
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
            this.btmSond = new System.Windows.Forms.Button();
            this.btmSound = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btmSond
            // 
            this.btmSond.BackgroundImage = global::_15_Sound.Properties.Resources.뮤직;
            this.btmSond.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btmSond.Location = new System.Drawing.Point(122, 423);
            this.btmSond.Name = "btmSond";
            this.btmSond.Size = new System.Drawing.Size(141, 111);
            this.btmSond.TabIndex = 0;
            this.btmSond.UseVisualStyleBackColor = true;
            this.btmSond.Click += new System.EventHandler(this.btmSoud_Click);
            // 
            // btmSound
            // 
            this.btmSound.BackgroundImage = global::_15_Sound.Properties.Resources.강아지;
            this.btmSound.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btmSound.Location = new System.Drawing.Point(308, 423);
            this.btmSound.Name = "btmSound";
            this.btmSound.Size = new System.Drawing.Size(141, 111);
            this.btmSound.TabIndex = 0;
            this.btmSound.UseVisualStyleBackColor = true;
            this.btmSound.Click += new System.EventHandler(this.btmSound_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(939, 603);
            this.Controls.Add(this.btmSound);
            this.Controls.Add(this.btmSond);
            this.DoubleBuffered = true;
            this.Name = "Form1";
            this.Text = "Form1";
           
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btmSond;
        private System.Windows.Forms.Button btmSound;
    }
}

