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
    public partial class Egg_Rice : Form
    {
        public Egg_Rice()
        {
            InitializeComponent();
        }
        
        private void btnEggRice_Click(object sender, EventArgs e)
        {
            Egg_Rice_Rice eggrice = new Egg_Rice_Rice();
            eggrice.Show();
        }

        private void btnrolledomelet_Click(object sender, EventArgs e)
        {
            Egg_Rice_RolledOmelet rolledomelet = new Egg_Rice_RolledOmelet();
            rolledomelet.Show();
        }
    }
}
