namespace RecommendMeal
{
    partial class Tofu_Tuna
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
            this.btnBoiledTofu = new System.Windows.Forms.Button();
            this.btnTunaCake = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnBoiledTofu
            // 
            this.btnBoiledTofu.BackgroundImage = global::RecommendMeal.Properties.Resources.두부김치;
            this.btnBoiledTofu.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnBoiledTofu.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnBoiledTofu.Font = new System.Drawing.Font("HY견고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnBoiledTofu.Location = new System.Drawing.Point(454, 49);
            this.btnBoiledTofu.Name = "btnBoiledTofu";
            this.btnBoiledTofu.Size = new System.Drawing.Size(292, 353);
            this.btnBoiledTofu.TabIndex = 1;
            this.btnBoiledTofu.Text = "참치두부조림";
            this.btnBoiledTofu.TextAlign = System.Drawing.ContentAlignment.BottomRight;
            this.btnBoiledTofu.UseVisualStyleBackColor = true;
            this.btnBoiledTofu.Click += new System.EventHandler(this.btnBoiledTofu_Click);
            // 
            // btnTunaCake
            // 
            this.btnTunaCake.BackgroundImage = global::RecommendMeal.Properties.Resources.두부참치전;
            this.btnTunaCake.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnTunaCake.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnTunaCake.Font = new System.Drawing.Font("HY견고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnTunaCake.Location = new System.Drawing.Point(54, 49);
            this.btnTunaCake.Name = "btnTunaCake";
            this.btnTunaCake.Size = new System.Drawing.Size(292, 353);
            this.btnTunaCake.TabIndex = 2;
            this.btnTunaCake.Text = "참치전";
            this.btnTunaCake.TextAlign = System.Drawing.ContentAlignment.BottomRight;
            this.btnTunaCake.UseVisualStyleBackColor = true;
            this.btnTunaCake.Click += new System.EventHandler(this.btnTunaCake_Click);
            // 
            // Tofu_Tuna
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnBoiledTofu);
            this.Controls.Add(this.btnTunaCake);
            this.Name = "Tofu_Tuna";
            this.Text = "Tofu_Tuna";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnBoiledTofu;
        private System.Windows.Forms.Button btnTunaCake;
    }
}