using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RecommendMeal
{
    public partial class StartingForm : Form
    {
        public StartingForm()
        {
            InitializeComponent();
        }
        void btn_Enabled(bool listenable = false)
        {
            btnLeftMove.Enabled = listenable;
            btnModalForm.Enabled = listenable;
        }
        private void btnLogin_Click(object sender, EventArgs e)
        {
            LoginForm lg = new LoginForm();
            lg.Show();
            this.Hide();
        }

        private void StartingForm_Load(object sender, EventArgs e)
        {
            btn_Enabled(false);
        }

        
    }
}
