using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RecommendMeal
{

    public partial class Form1 : Form
    {
        List<string> refrig = new List<string>();
        string onion = "양퐈", tuna = "동원참치", kimchi = "김취",
            tofu = "두부", eggs = "계란", rice = "냉동밥";
        public Form1()
        {
            InitializeComponent();
            refrig.Add(onion);
            refrig.Add(tuna);
            refrig.Add(kimchi);
            refrig.Add(tofu);
            refrig.Add(eggs);
            refrig.Add(rice);
        }

        private void btnModalForm_Click(object sender, EventArgs e)
        {
            /*            CookingForm cookingForm = new CookingForm();

                        cookingForm.ShowDialog();*/


            /* CookingForm cookingForm = new CookingForm(this);
             cookingForm.Show();*/
            LoadingForm loadingForm = new LoadingForm(this);
            loadingForm.Show();
        }

        private void btnEggs_Click(object sender, EventArgs e)
        {
            refrig.Remove(eggs);
            listBox1.Items.Add(eggs);
            btnEggs.Hide();
            btn_Enable(true);
        }
         
        private void btnTuna_Click(object sender, EventArgs e)
        {
            refrig.Remove(tuna);
            listBox1.Items.Add(tuna);
            btnTuna.Hide();
            btn_Enable(true);
        }

        private void btnOnion_Click(object sender, EventArgs e)
        {
            refrig.Remove(onion);
            listBox1.Items.Add(onion);
            btnOnion.Hide();
            btn_Enable(true);
        }

        private void btnKimchi_Click(object sender, EventArgs e)
        {
            refrig.Remove(kimchi);
            listBox1.Items.Add(kimchi);
            btnKimchi.Hide();
            btn_Enable(true);
        }

        private void btnTofu_Click(object sender, EventArgs e)
        {
            refrig.Remove(tofu);
            listBox1.Items.Add(tofu);
            btnTofu.Hide();
            btn_Enable(true);
        }

        private void btnRice_Click(object sender, EventArgs e)
        {
            refrig.Remove(rice);
            listBox1.Items.Add(rice);
            btnRice.Hide();
            btn_Enable(true);
        }

      

        void btn_Enable(bool listenable = false)
        {
            btnModalForm.Enabled = listenable;
        }

        private void btnLeftMove_Click(object sender, EventArgs e)
        {
            try
            {
                refrig.Add((string)listBox1.SelectedItem);
                listBox1.Items.RemoveAt(listBox1.SelectedIndex);          

                if (refrig.Contains(rice))
                {
                    btnRice.Show();                    
                }
                if (refrig.Contains(tofu))
                {
                    btnTofu.Show();
                }
                if (refrig.Contains(kimchi))
                {
                    btnKimchi.Show();
                }
                if (refrig.Contains(tuna))
                {
                    btnTuna.Show();
                }
                if (refrig.Contains(eggs))
                {
                    btnEggs.Show();
                }
                if (refrig.Contains(onion))
                {
                    btnOnion.Show();
                }
            }
            catch (ArgumentException)
            {
                MessageBox.Show("제거할 재료를 선택하세요!");
            }

            if (refrig.Contains(onion) && refrig.Contains(tuna) &&
                refrig.Contains(kimchi) && refrig.Contains(rice) &&
                refrig.Contains(tofu) && refrig.Contains(eggs))
            {
                btn_Enable(false);
            }
        } 

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            
        }

        private void btnHome_Click(object sender, EventArgs e)
        {
            StartingForm sf = new StartingForm();
            sf.Show();
            this.Hide();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            btn_Enable(false);
        }
    }
}
