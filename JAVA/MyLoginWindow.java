import java.awt.*;
import java.awt.event.*;
class MyLoginWindow extends Frame
{
    TextField name,pass;
    Button b1,b2;
    MyLoginWindow()
    {
        setLayout(new FlowLayout());
        this.setLayout(null);
        Label n=new Label("Name:",Label.CENTER);
        Label p=new Label("password:",Label.CENTER);
        name=new TextField(20);
        pass=new TextField(20);
        pass.setEchoChar('#');
        b1=new Button("submit");
        b2=new Button("cancel");
        this.add(n);
        this.add(name);
        this.add(p);
        this.add(pass);
        this.add(b1);
        this.add(b2);
        n.setBounds(70,90,90,60);
        p.setBounds(70,130,90,60);
        name.setBounds(200,100,90,20);
        pass.setBounds(200,140,90,20);
        b1.setBounds(100,260,70,40);
        b2.setBounds(180,260,70,40);

    }
    public static void main(String args[])
    {
        MyLoginWindow ml=new MyLoginWindow();
        ml.setVisible(true);
        ml.setSize(400,400);
        ml.setTitle("my login window");

    }
}