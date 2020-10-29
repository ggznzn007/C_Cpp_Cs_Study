using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RecommendMeal
{
    public partial class LoginForm : Form
    {
        string id = "";
        string pass;
        SqlConnection conn = null;
        string dbConnInfo = @"Server=localhost;" +
                        @"database=Test_DB;" +
                        @"uid=Test_Login;" +
                        @"pwd=123456";
        public LoginForm()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Point point = this.Location;
            Form1 f1 = new Form1();
            f1.StartPosition = FormStartPosition.Manual;
            f1.Location = new Point(point.X, point.Y);
           
            conn = new SqlConnection(dbConnInfo);  //DB 연결 (아이디비번넘김)
            try
            {
                conn.Open(); //스트림 오픈
            }
            catch (Exception ex)
            {
                conn = null;
                MessageBox.Show(ex.Message);
            }
            try
            {
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;
                cmd.CommandText = "SELECT * FROM dbo.Users WHERE id = @id"; //조회 Select
                cmd.Parameters.AddWithValue("@id", id); //파라미터 주는거

                if (id == null || id == "")
                {
                    MessageBox.Show("아이디를 입력해주세요");
                    return;
                }
                if (pass == null || pass == "")
                {
                    MessageBox.Show("비밀번호를 입력해주세요");
                    return;
                }
                // 2) SELECT 문은 실행 후 결과를 받아온다
                SqlDataReader reader = cmd.ExecuteReader();
                string currentUser = null;
                string currentPassword = null;

                // 3) 행(레코드) 데이터를 가져오자
                while (reader.Read())
                {
                    string[] datas = new string[reader.FieldCount];
                    for (int i = 0; i < reader.FieldCount; i++)
                        datas[i] = reader.GetValue(i).ToString();
                    currentUser = datas[0];
                    currentPassword = datas[1];
                }

                if (currentUser == null)
                {
                    MessageBox.Show("유저가 존재하지 않습니다.");
                    return;
                }
                if (currentPassword == null)
                {
                    MessageBox.Show("로그인 실패");
                    this.Hide();
                }
                else if (currentPassword.Equals(pass))
                {
                    MessageBox.Show("로그인 성공");
                    f1.Show();
                    this.Hide();
                }
                else
                {
                    MessageBox.Show("비밀번호가 틀렸습니다");
                }
                reader.Close();
                cmd.Dispose();
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            id = textBox1.Text;
            Console.WriteLine(id);
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            pass = textBox2.Text;
            Console.WriteLine(pass);            
        }

        private void LoginForm_Load(object sender, EventArgs e)
        {

        }

        private void textBox2_KeyDown(object sender, KeyEventArgs e)
        {
            if(e.KeyCode==Keys.Enter)
            {
                button1_Click(sender, e);
            }
        }
    }
}
