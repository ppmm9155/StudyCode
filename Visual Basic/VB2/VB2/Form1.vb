Public Class Form1
    Dim sum1 As Integer = 0
    Dim sum2 As Integer = 0

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        sum1 = sum1 + 1
        TextBox1.Text = sum1
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        sum2 = sum2 + 10
        TextBox2.Text = sum2
    End Sub
End Class
