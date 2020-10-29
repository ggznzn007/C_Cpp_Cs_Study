using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Windows.Media;

namespace RecommendMeal
{
    public partial class Tuna_Kimchi : Form
    {
       
        public Tuna_Kimchi()
        {
            InitializeComponent();
            
        }

       

        private void btnFriedRice_Click(object sender, EventArgs e)
        {
            Tuna_Kimchi_Friedrice kimchiFriedrice = new Tuna_Kimchi_Friedrice();
            kimchiFriedrice.Show();
        }

        private void btnKimchiSoup_Click(object sender, EventArgs e)
        {
            Tuna_Kimchi_Soup kimchiSoup = new Tuna_Kimchi_Soup();
            kimchiSoup.Show();
        }
    }
}
