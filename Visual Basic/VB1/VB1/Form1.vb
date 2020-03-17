Public Class Form1

  
    Private Sub btnoutput_Click(sender As Object, e As EventArgs) Handles btnoutput.Click
        Dim strHello As String
        strHello = "안녕하세요 " + TextBox1.Text + "님"
        TextBox2.Text = strHello

    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        End

    End Sub
End Class
