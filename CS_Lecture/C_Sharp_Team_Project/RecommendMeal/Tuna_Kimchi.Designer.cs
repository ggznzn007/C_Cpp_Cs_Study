namespace RecommendMeal
{
    partial class Tuna_Kimchi
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
            this.btnFriedRice = new System.Windows.Forms.Button();
            this.btnKimchiSoup = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnFriedRice
            // 
            this.btnFriedRice.BackgroundImage = global::RecommendMeal.Properties.Resources.김치참치볶음밥;
            this.btnFriedRice.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnFriedRice.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnFriedRice.Font = new System.Drawing.Font("HY견고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnFriedRice.Location = new System.Drawing.Point(50, 44);
            this.btnFriedRice.Name = "btnFriedRice";
            this.btnFriedRice.Size = new System.Drawing.Size(292, 353);
            this.btnFriedRice.TabIndex = 0;
            this.btnFriedRice.Text = "참치김치볶음밥";
            this.btnFriedRice.TextAlign = System.Drawing.ContentAlignment.BottomRight;
            this.btnFriedRice.UseVisualStyleBackColor = true;
            this.btnFriedRice.Click += new System.EventHandler(this.btnFriedRice_Click);
            // 
            // btnKimchiSoup
            // 
            this.btnKimchiSoup.BackgroundImage = global::RecommendMeal.Properties.Resources.김치참치찌개;
            this.btnKimchiSoup.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.btnKimchiSoup.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.btnKimchiSoup.Font = new System.Drawing.Font("HY견고딕", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnKimchiSoup.Location = new System.Drawing.Point(450, 44);
            this.btnKimchiSoup.Name = "btnKimchiSoup";
            this.btnKimchiSoup.Size = new System.Drawing.Size(292, 353);
            this.btnKimchiSoup.TabIndex = 0;
            this.btnKimchiSoup.Text = "참치김치찌개";
            this.btnKimchiSoup.TextAlign = System.Drawing.ContentAlignment.BottomRight;
            this.btnKimchiSoup.UseVisualStyleBackColor = true;
            this.btnKimchiSoup.Click += new System.EventHandler(this.btnKimchiSoup_Click);
            // 
            // Tuna_Kimchi
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnKimchiSoup);
            this.Controls.Add(this.btnFriedRice);
            this.Name = "Tuna_Kimchi";
            this.Text = "Tuna_Kimchi";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnFriedRice;
        private System.Windows.Forms.Button btnKimchiSoup;
    }
}