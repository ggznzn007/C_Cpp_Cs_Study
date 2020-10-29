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
    public partial class Tofu_Tuna : Form
    {
        public Tofu_Tuna()
        {
            InitializeComponent();
        }

        private void btnTunaCake_Click(object sender, EventArgs e)
        {
            Tofu_Tuna_Pan tofuTunaPan = new Tofu_Tuna_Pan();
            tofuTunaPan.Show();
        }

        private void btnBoiledTofu_Click(object sender, EventArgs e)
        {
            Tofu_Tuna_Boiled tofuTunaBoiled = new Tofu_Tuna_Boiled();
            tofuTunaBoiled.Show();
        }
    }
}
