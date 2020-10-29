namespace RecommendMeal
{
    partial class StartingForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(StartingForm));
            this.btnLogin = new System.Windows.Forms.Button();
            this.btnModalForm = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.btnLeftMove = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.SuspendLayout();
            // 
            // btnLogin
            // 
            this.btnLogin.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(0)))));
            this.btnLogin.Font = new System.Drawing.Font("Cooper Black", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnLogin.ForeColor = System.Drawing.Color.White;
            this.btnLogin.Location = new System.Drawing.Point(374, 7);
            this.btnLogin.Name = "btnLogin";
            this.btnLogin.Size = new System.Drawing.Size(109, 33);
            this.btnLogin.TabIndex = 18;
            this.btnLogin.Text = "Login";
            this.btnLogin.UseVisualStyleBackColor = false;
            this.btnLogin.Click += new System.EventHandler(this.btnLogin_Click);
            // 
            // btnModalForm
            // 
            this.btnModalForm.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(0)))), ((int)(((byte)(0)))));
            this.btnModalForm.Font = new System.Drawing.Font("Cooper Black", 20.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnModalForm.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.btnModalForm.Location = new System.Drawing.Point(675, 533);
            this.btnModalForm.Name = "btnModalForm";
            this.btnModalForm.Size = new System.Drawing.Size(214, 43);
            this.btnModalForm.TabIndex = 15;
            this.btnModalForm.Text = "START!";
            this.btnModalForm.UseVisualStyleBackColor = false;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Cooper Black", 30F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(643, 50);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(281, 46);
            this.label2.TabIndex = 14;
            this.label2.Text = "~ Food List ~";
            // 
            // listBox1
            // 
            this.listBox1.Font = new System.Drawing.Font("HY견고딕", 30F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 40;
            this.listBox1.Location = new System.Drawing.Point(627, 110);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(328, 364);
            this.listBox1.Sorted = true;
            this.listBox1.TabIndex = 13;
            // 
            // btnLeftMove
            // 
            this.btnLeftMove.BackColor = System.Drawing.Color.LightCoral;
            this.btnLeftMove.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("btnLeftMove.BackgroundImage")));
            this.btnLeftMove.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnLeftMove.Font = new System.Drawing.Font("굴림", 20F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnLeftMove.ForeColor = System.Drawing.Color.DarkSlateGray;
            this.btnLeftMove.Location = new System.Drawing.Point(535, 271);
            this.btnLeftMove.Name = "btnLeftMove";
            this.btnLeftMove.Size = new System.Drawing.Size(64, 57);
            this.btnLeftMove.TabIndex = 16;
            this.btnLeftMove.Tag = "Move";
            this.btnLeftMove.UseVisualStyleBackColor = false;
            // 
            // groupBox1
            // 
            this.groupBox1.BackgroundImage = global::RecommendMeal.Properties.Resources.냉장고;
            this.groupBox1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.groupBox1.Location = new System.Drawing.Point(50, 51);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(457, 544);
            this.groupBox1.TabIndex = 12;
            this.groupBox1.TabStop = false;
            // 
            // StartingForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.LightCoral;
            this.ClientSize = new System.Drawing.Size(1005, 603);
            this.Controls.Add(this.btnLogin);
            this.Controls.Add(this.btnLeftMove);
            this.Controls.Add(this.btnModalForm);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.groupBox1);
            this.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.Name = "StartingForm";
            this.Text = "StartingForm";
            this.Load += new System.EventHandler(this.StartingForm_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnLogin;
        private System.Windows.Forms.Button btnLeftMove;
        private System.Windows.Forms.Button btnModalForm;
        private System.Windows.Forms.Label label2;
        public System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.GroupBox groupBox1;
    }
}