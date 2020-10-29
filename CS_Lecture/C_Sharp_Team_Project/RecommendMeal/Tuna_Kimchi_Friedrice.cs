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
    public partial class Tuna_Kimchi_Friedrice : Form
    {
        public Tuna_Kimchi_Friedrice()
        {
            InitializeComponent();
            this.Layout += Tuna_Kimchi_Friedrice_Layout;
        }

        private void Tuna_Kimchi_Friedrice_Layout(object sender, LayoutEventArgs e)
        {
            this.axWindowsMediaPlayer1.Size = this.ClientSize;
        }
    }
}
