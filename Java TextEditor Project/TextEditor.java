
package newpackage;

import java.io.*;
import javax.swing.*;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.Font;
import java.awt.GraphicsEnvironment;
import java.awt.TextArea;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.FileFilter;
import javax.swing.JButton;
import javax.swing.JColorChooser;
import javax.swing.JComboBox;
import javax.swing.JFileChooser;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JScrollPane;
import javax.swing.JSpinner;
import javax.swing.JTextArea;
import javax.swing.ScrollPaneConstants;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;
import javax.swing.filechooser.FileNameExtensionFilter;
import java.awt.EventQueue;
import java.awt.event.KeyEvent;
import static javax.swing.text.html.HTML.Attribute.N;



public class TextEditor extends JFrame implements ActionListener{
    
    
   JTextArea textArea;
   JScrollPane scrollpane;
   JLabel fontLabel;
   JSpinner fontSizeSpinner;
   JButton fontColorButton;
   JComboBox fontBox;
   JMenuBar menuBar;
   
   JMenu fileMenu;
   JMenu editMenu;
   JMenuItem newItem;
   JMenuItem openItem;
   JMenuItem saveItem;
   JMenuItem exitItem;
   JMenuItem cutItem;
   JMenuItem copyItem;
   JMenuItem pasteItem;
   JMenuItem selectallItem;
    
   
   
  
   
   TextEditor(){
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setTitle("Mostak text Editor");
        this.setBounds(100,100,800,600);
        this.setLayout(new FlowLayout());
        this.setLocationRelativeTo(null);
        
         //TextArea
         
        textArea=new JTextArea();
        textArea.setPreferredSize(new Dimension(700,650));
        textArea.setLineWrap(true);
        textArea.setWrapStyleWord(true);
        textArea.setFont(new Font("Arial",Font.PLAIN,20));
        
        //Scrollpane
        
        scrollpane =new JScrollPane(textArea);
        scrollpane.setPreferredSize(new Dimension(700,500));
        scrollpane.setVerticalScrollBarPolicy(ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS);
     
        fontLabel =new JLabel("Font: ");
        
        //FontSize
        
         fontSizeSpinner=new JSpinner();
          fontSizeSpinner.setPreferredSize(new Dimension(50,25));
           fontSizeSpinner.setValue(20);
            fontSizeSpinner.addChangeListener(new ChangeListener(){
                
              
                
            @Override
            public void stateChanged(ChangeEvent e) {
            textArea.setFont(new Font(textArea.getFont().getFamily(),Font.PLAIN,(int) fontSizeSpinner.getValue()));
            }
                
                
            });
            
            fontColorButton=new JButton("Color");
            fontColorButton.addActionListener(this);
            
            String[] fonts =GraphicsEnvironment.getLocalGraphicsEnvironment().getAvailableFontFamilyNames();
            
            fontBox =new JComboBox();
            fontBox.setPreferredSize(new Dimension(100,25));
            fontBox.addActionListener(this);
            fontBox.setSelectedItem("Arial");
            
            
            // Menubar area
            menuBar = new JMenuBar();
            fileMenu = new JMenu("file");
            editMenu = new JMenu("edit");
         
            
            newItem = new JMenuItem("New");
            openItem = new JMenuItem("Open");
            saveItem = new JMenuItem("Save");
            exitItem = new JMenuItem("Exit");
            
            
           cutItem = new JMenuItem("Cut");
           copyItem = new JMenuItem("Copy");
           pasteItem = new JMenuItem("Paste");
           selectallItem = new JMenuItem("Selectall");
            
            
         
            
             //add  all item
            newItem.addActionListener(this);
            openItem.addActionListener(this);
            saveItem.addActionListener(this);
            exitItem.addActionListener(this);
            
            cutItem.addActionListener(this);
            copyItem.addActionListener(this);
            pasteItem.addActionListener(this);
            selectallItem.addActionListener(this);
            
          
            
            //filemenu add item
            fileMenu.add(newItem);
            fileMenu.add(openItem);
            fileMenu.add(saveItem);
            fileMenu.add(exitItem);
            
            
                //editmenu add item
             editMenu.add(cutItem);
             editMenu.add(copyItem);
             editMenu.add(pasteItem);
             editMenu.add(selectallItem);
             
            
            
            
            menuBar.add(fileMenu);
            menuBar.add(editMenu);
           
       
            
        this.setJMenuBar(menuBar);
        this.add(fontLabel);
        this.add(fontSizeSpinner);
        this.add(fontColorButton);
        this.add(fontBox);
        this.add(scrollpane);
        this.setVisible(true);
        
    }
   
    @Override
    public void actionPerformed(ActionEvent e){
       
        //to Auto generated method stub
        if(e.getSource()== fontColorButton){
            JColorChooser colorChooser = new JColorChooser();
            Color color =JColorChooser.showDialog(null,"Choose a color",Color.black);
            
            textArea.setForeground(color);
        }
        if(e.getSource()==fontBox){
            textArea.setFont(new Font((String)fontBox.getSelectedItem(),Font.PLAIN,textArea.getFont().getSize()));
        }
        
         if(e.getSource()==newItem){
             textArea.setText(null);
             
         }
        
        
        if(e.getSource()==openItem){
        JFileChooser fileChooser =new JFileChooser();
        FileNameExtensionFilter textFilter =new  FileNameExtensionFilter("Only Text File(.txt)","txt");
        fileChooser.setAcceptAllFileFilterUsed(false);
        
        int action=fileChooser.showOpenDialog(null);
        
        if(action!=JFileChooser.APPROVE_OPTION){
            return;
        }else{
            try{
                 BufferedReader reader = new  BufferedReader(new FileReader(fileChooser.getSelectedFile()));
                
                textArea.read(reader,null);
            }catch(IOException ex){
                ex.printStackTrace();
            }
         
        }
        }
        
         if(e.getSource()==saveItem){
          
        JFileChooser fileChooser =new JFileChooser();
        FileNameExtensionFilter textFilter =new  FileNameExtensionFilter("Only Text File(.txt)","txt");
        fileChooser.setAcceptAllFileFilterUsed(false);
        fileChooser.addChoosableFileFilter(textFilter);
        
        int action=fileChooser.showSaveDialog(null);
        if(action!=JFileChooser.APPROVE_OPTION){
            return;
         }else{
            String fileName=fileChooser.getSelectedFile().getAbsolutePath().toString();
            
            
             if(!fileName.contains(".txt"))
                fileName=fileName+".txt";
             
             try{
             BufferedWriter writer= new BufferedWriter(new FileWriter(fileName));
             
             textArea.write(writer);
             }catch(IOException ex){
                 ex.printStackTrace();
             }
           
        }
            
        }
            if(e.getSource()==exitItem){
                
                System.exit(o);
            
        }
        
             if(e.getSource()==cutItem){
                 textArea.cut();
                 
             }
              if(e.getSource()==copyItem){
                 textArea.copy();
             }
               if(e.getSource()==pasteItem){
                textArea.paste();
             }
                if(e.getSource()==selectallItem){
                    textArea.selectAll();
                 
             }
        
            
        
        
    }

   
    
}

   

