namespace RecommendMeal
{
    partial class Egg_Rice
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
            this.btnrolledomelet = new System.Windows.Forms.Button();
            this.btnEggRice = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnrolledomelet
            // 
            this.btnrolledomelet.BackgroundImage = global::RecommendMeal.Properties.Resources.계란말이;
            this.btnrolledomelet.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnrolledomelet.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnrolledomelet.Font = new System.Drawing.Font("HY견고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnrolledomelet.Location = new System.Drawing.Point(454, 49);
            this.btnrolledomelet.Name = "btnrolledomelet";
            this.btnrolledomelet.Size = new System.Drawing.Size(292, 353);
            this.btnrolledomelet.TabIndex = 1;
            this.btnrolledomelet.Text = "계란말이";
            this.btnrolledomelet.TextAlign = System.Drawing.ContentAlignment.BottomRight;
            this.btnrolledomelet.UseVisualStyleBackColor = true;
            this.btnrolledomelet.Click += new System.EventHandler(this.btnrolledomelet_Click);
            // 
            // btnEggRice
            // 
            this.btnEggRice.BackgroundImage = global::RecommendMeal.Properties.Resources.계란밥;
            this.btnEggRice.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnEggRice.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnEggRice.Font = new System.Drawing.Font("HY견고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnEggRice.Location = new System.Drawing.Point(54, 49);
            this.btnEggRice.Name = "btnEggRice";
            this.btnEggRice.Size = new System.Drawing.Size(292, 353);
            this.btnEggRice.TabIndex = 2;
            this.btnEggRice.Text = "계란밥";
            this.btnEggRice.TextAlign = System.Drawing.ContentAlignment.BottomRight;
            this.btnEggRice.UseVisualStyleBackColor = true;
            this.btnEggRice.Click += new System.EventHandler(this.btnEggRice_Click);
            // 
            // Egg_Rice
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnrolledomelet);
            this.Controls.Add(this.btnEggRice);
            this.Name = "Egg_Rice";
            this.Text = "Egg_Rice";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnrolledomelet;
        private System.Windows.Forms.Button btnEggRice;
    }
}