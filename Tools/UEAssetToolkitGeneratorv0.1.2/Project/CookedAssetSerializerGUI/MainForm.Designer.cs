using CookedAssetSerializer;
using CookedAssetSerializerGUI.Properties;
using ExtendedTreeView;

namespace CookedAssetSerializerGUI;

partial class MainForm
{
    /// <summary>
    ///  Required designer variable.
    /// </summary>
    private System.ComponentModel.IContainer components = null;

    /// <summary>
    ///  Clean up any resources being used.
    /// </summary>
    /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
    protected override void Dispose(bool disposing)
    {
        if (disposing && (components != null))
        {
            components.Dispose();
        }

        base.Dispose(disposing);
    }




    #region Windows Form Designer generated code

    /// <summary>
    ///  Required method for Designer support - do not modify
    ///  the contents of this method with the code editor.
    /// </summary>
    private void InitializeComponent()
    {
        components = new System.ComponentModel.Container();
        System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
        tTipTree = new ToolTip(components);
        flowLayoutPanel1 = new FlowLayoutPanel();
        cntxtMainStrip = new ContextMenuStrip(components);
        clearAllPathsToolStripMenuItem = new ToolStripMenuItem();
        restorePathsToDefaultsToolStripMenuItem = new ToolStripMenuItem();
        pauseSerializationToolStripMenuItem = new ToolStripMenuItem();
        cancelSerializationToolStripMenuItem = new ToolStripMenuItem();
        restoreAllSettingsToDefaultthisTabToolStripMenuItem = new ToolStripMenuItem();
        restoreAllSettingsToDefaultallTabsToolStripMenuItem = new ToolStripMenuItem();
        panel2 = new Panel();
        lbAuthors = new Label();
        tabControl1 = new TabControl();
        tbRun = new TabPage();
        btnSerializeNatives = new Button();
        btnSelectDfltGamCnfg = new Button();
        rtxtDfltGamCnfg = new RichTextBox();
        rtxtAR = new RichTextBox();
        rtxtLogDir = new RichTextBox();
        chkSettDNS = new CheckBox();
        btnSelectAR = new Button();
        btnLogDir = new Button();
        rtxtOutput = new RichTextBox();
        rtxtContentDir = new RichTextBox();
        rtxtJSONDir = new RichTextBox();
        chkAutoLoad = new CheckBox();
        btnLoadConfig = new Button();
        btnSaveConfig = new Button();
        btnSelectContentDir = new Button();
        btnOpenAllTypes = new Button();
        btnOpenAssetTypes = new Button();
        btnOpenLogs = new Button();
        btnSelectJSONDir = new Button();
        lblProgress = new Label();
        btnClearLogs = new Button();
        btnSerializeAssets = new Button();
        btnScanAssets = new Button();
        label1 = new Label();
        chkRefreshAssets = new CheckBox();
        cbUEVersion = new ComboBox();
        tbSerialSettings = new TabPage();
        rtxtSimpleAssets = new RichTextBox();
        chkDummyWithProps = new CheckBox();
        label9 = new Label();
        lbDummyAssets = new ListBox();
        label3 = new Label();
        lbAssetsToSkipSerialization = new ListBox();
        label5 = new Label();
        rtxtCircularDependancy = new RichTextBox();
        label6 = new Label();
        tabCpyDlt = new TabPage();
        chkThread = new CheckBox();
        chkForceOneLOD = new CheckBox();
        label2 = new Label();
        chkUseAnimActorX = new CheckBox();
        chkUseSKMActorX = new CheckBox();
        chkUseSMActorX = new CheckBox();
        chkAllTypes = new CheckBox();
        lblProgress2 = new Label();
        btnCopyAssets = new Button();
        rtxtFromDir = new RichTextBox();
        btnFromDir = new Button();
        label7 = new Label();
        btnMoveAssets = new Button();
        rtxtToDir = new RichTextBox();
        btnToDir = new Button();
        label4 = new Label();
        rtxtCookedAssets = new RichTextBox();
        panel4 = new Panel();
        treeParseDir = new ExTreeView();
        cntxtTreeParse = new ContextMenuStrip(components);
        openToolStripMenuItem = new ToolStripMenuItem();
        copyPathToolStripMenuItem = new ToolStripMenuItem();
        expandAllToolStripMenuItem = new ToolStripMenuItem();
        collapseAllToolStripMenuItem = new ToolStripMenuItem();
        refreshAllToolStripMenuItem = new ToolStripMenuItem();
        flowLayoutPanel1.SuspendLayout();
        cntxtMainStrip.SuspendLayout();
        panel2.SuspendLayout();
        tabControl1.SuspendLayout();
        tbRun.SuspendLayout();
        tbSerialSettings.SuspendLayout();
        tabCpyDlt.SuspendLayout();
        panel4.SuspendLayout();
        cntxtTreeParse.SuspendLayout();
        SuspendLayout();
        // 
        // flowLayoutPanel1
        // 
        flowLayoutPanel1.AutoSize = true;
        flowLayoutPanel1.AutoSizeMode = AutoSizeMode.GrowAndShrink;
        flowLayoutPanel1.ContextMenuStrip = cntxtMainStrip;
        flowLayoutPanel1.Controls.Add(panel2);
        flowLayoutPanel1.Controls.Add(panel4);
        flowLayoutPanel1.Location = new Point(3, 3);
        flowLayoutPanel1.Margin = new Padding(3, 4, 3, 4);
        flowLayoutPanel1.Name = "flowLayoutPanel1";
        flowLayoutPanel1.Size = new Size(1406, 949);
        flowLayoutPanel1.TabIndex = 40;
        // 
        // cntxtMainStrip
        // 
        cntxtMainStrip.ImageScalingSize = new Size(20, 20);
        cntxtMainStrip.Items.AddRange(new ToolStripItem[] { clearAllPathsToolStripMenuItem, restorePathsToDefaultsToolStripMenuItem, pauseSerializationToolStripMenuItem, cancelSerializationToolStripMenuItem, restoreAllSettingsToDefaultthisTabToolStripMenuItem, restoreAllSettingsToDefaultallTabsToolStripMenuItem });
        cntxtMainStrip.Name = "cntxtMainStrip";
        cntxtMainStrip.Size = new Size(336, 148);
        cntxtMainStrip.Opening += cntxtMainStrip_Opening;
        // 
        // clearAllPathsToolStripMenuItem
        // 
        clearAllPathsToolStripMenuItem.Name = "clearAllPathsToolStripMenuItem";
        clearAllPathsToolStripMenuItem.Size = new Size(335, 24);
        clearAllPathsToolStripMenuItem.Text = "Clear all paths";
        clearAllPathsToolStripMenuItem.Click += clearAllPathsToolStripMenuItem_Click;
        // 
        // restorePathsToDefaultsToolStripMenuItem
        // 
        restorePathsToDefaultsToolStripMenuItem.Name = "restorePathsToDefaultsToolStripMenuItem";
        restorePathsToDefaultsToolStripMenuItem.Size = new Size(335, 24);
        restorePathsToDefaultsToolStripMenuItem.Text = "Restore paths to defaults";
        restorePathsToDefaultsToolStripMenuItem.Click += restorePathsToDefaultsToolStripMenuItem_Click;
        // 
        // pauseSerializationToolStripMenuItem
        // 
        pauseSerializationToolStripMenuItem.Name = "pauseSerializationToolStripMenuItem";
        pauseSerializationToolStripMenuItem.Size = new Size(335, 24);
        pauseSerializationToolStripMenuItem.Text = "Pause Serialization";
        pauseSerializationToolStripMenuItem.Click += cancelSerializationToolStripMenuItem_Click;
        // 
        // cancelSerializationToolStripMenuItem
        // 
        cancelSerializationToolStripMenuItem.Name = "cancelSerializationToolStripMenuItem";
        cancelSerializationToolStripMenuItem.Size = new Size(335, 24);
        cancelSerializationToolStripMenuItem.Text = "Cancel Serialization";
        cancelSerializationToolStripMenuItem.Click += cancelSerializationToolStripMenuItem_Click_1;
        // 
        // restoreAllSettingsToDefaultthisTabToolStripMenuItem
        // 
        restoreAllSettingsToDefaultthisTabToolStripMenuItem.Name = "restoreAllSettingsToDefaultthisTabToolStripMenuItem";
        restoreAllSettingsToDefaultthisTabToolStripMenuItem.Size = new Size(335, 24);
        restoreAllSettingsToDefaultthisTabToolStripMenuItem.Text = "Restore all settings to default (this tab)";
        restoreAllSettingsToDefaultthisTabToolStripMenuItem.Click += restoreAllSettingsToDefaultthisTabToolStripMenuItem_Click;
        // 
        // restoreAllSettingsToDefaultallTabsToolStripMenuItem
        // 
        restoreAllSettingsToDefaultallTabsToolStripMenuItem.Name = "restoreAllSettingsToDefaultallTabsToolStripMenuItem";
        restoreAllSettingsToDefaultallTabsToolStripMenuItem.Size = new Size(335, 24);
        restoreAllSettingsToDefaultallTabsToolStripMenuItem.Text = "Restore all settings to default (all tabs)";
        restoreAllSettingsToDefaultallTabsToolStripMenuItem.Click += restoreAllSettingsToDefaultallTabsToolStripMenuItem_Click;
        // 
        // panel2
        // 
        panel2.AutoSize = true;
        panel2.AutoSizeMode = AutoSizeMode.GrowAndShrink;
        panel2.Controls.Add(lbAuthors);
        panel2.Controls.Add(tabControl1);
        panel2.Dock = DockStyle.Left;
        panel2.Location = new Point(3, 4);
        panel2.Margin = new Padding(3, 4, 3, 4);
        panel2.Name = "panel2";
        panel2.Size = new Size(1052, 941);
        panel2.TabIndex = 1;
        // 
        // lbAuthors
        // 
        lbAuthors.AutoSize = true;
        lbAuthors.Dock = DockStyle.Right;
        lbAuthors.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point);
        lbAuthors.ForeColor = Color.FromArgb(248, 248, 242);
        lbAuthors.Location = new Point(350, 0);
        lbAuthors.Name = "lbAuthors";
        lbAuthors.Size = new Size(702, 20);
        lbAuthors.TabIndex = 40;
        lbAuthors.Text = "Written by LongerWarrior, Buckminsterfullerene and Narknon. Based on CUE4Parse and UAssetAPI";
        // 
        // tabControl1
        // 
        tabControl1.Controls.Add(tbRun);
        tabControl1.Controls.Add(tbSerialSettings);
        tabControl1.Controls.Add(tabCpyDlt);
        tabControl1.Location = new Point(3, 0);
        tabControl1.Name = "tabControl1";
        tabControl1.SelectedIndex = 0;
        tabControl1.Size = new Size(1046, 938);
        tabControl1.TabIndex = 39;
        // 
        // tbRun
        // 
        tbRun.BackColor = Color.FromArgb(40, 42, 54);
        tbRun.Controls.Add(btnSerializeNatives);
        tbRun.Controls.Add(btnSelectDfltGamCnfg);
        tbRun.Controls.Add(rtxtDfltGamCnfg);
        tbRun.Controls.Add(rtxtAR);
        tbRun.Controls.Add(rtxtLogDir);
        tbRun.Controls.Add(chkSettDNS);
        tbRun.Controls.Add(btnSelectAR);
        tbRun.Controls.Add(btnLogDir);
        tbRun.Controls.Add(rtxtOutput);
        tbRun.Controls.Add(rtxtContentDir);
        tbRun.Controls.Add(rtxtJSONDir);
        tbRun.Controls.Add(chkAutoLoad);
        tbRun.Controls.Add(btnLoadConfig);
        tbRun.Controls.Add(btnSaveConfig);
        tbRun.Controls.Add(btnSelectContentDir);
        tbRun.Controls.Add(btnOpenAllTypes);
        tbRun.Controls.Add(btnOpenAssetTypes);
        tbRun.Controls.Add(btnOpenLogs);
        tbRun.Controls.Add(btnSelectJSONDir);
        tbRun.Controls.Add(lblProgress);
        tbRun.Controls.Add(btnClearLogs);
        tbRun.Controls.Add(btnSerializeAssets);
        tbRun.Controls.Add(btnScanAssets);
        tbRun.Controls.Add(label1);
        tbRun.Controls.Add(chkRefreshAssets);
        tbRun.Controls.Add(cbUEVersion);
        tbRun.Location = new Point(4, 29);
        tbRun.Name = "tbRun";
        tbRun.Padding = new Padding(3);
        tbRun.Size = new Size(1038, 905);
        tbRun.TabIndex = 0;
        tbRun.Text = "Run";
        // 
        // btnSerializeNatives
        // 
        btnSerializeNatives.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnSerializeNatives.FlatAppearance.BorderSize = 2;
        btnSerializeNatives.FlatStyle = FlatStyle.Flat;
        btnSerializeNatives.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnSerializeNatives.ForeColor = Color.FromArgb(248, 248, 242);
        btnSerializeNatives.Location = new Point(403, 293);
        btnSerializeNatives.Name = "btnSerializeNatives";
        btnSerializeNatives.Size = new Size(246, 40);
        btnSerializeNatives.TabIndex = 44;
        btnSerializeNatives.Text = "Serialize Native Assets";
        btnSerializeNatives.UseVisualStyleBackColor = true;
        btnSerializeNatives.Click += btnSerializeNatives_Click;
        // 
        // btnSelectDfltGamCnfg
        // 
        btnSelectDfltGamCnfg.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnSelectDfltGamCnfg.FlatAppearance.BorderSize = 2;
        btnSelectDfltGamCnfg.FlatStyle = FlatStyle.Flat;
        btnSelectDfltGamCnfg.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnSelectDfltGamCnfg.ForeColor = Color.FromArgb(248, 248, 242);
        btnSelectDfltGamCnfg.Location = new Point(15, 108);
        btnSelectDfltGamCnfg.Name = "btnSelectDfltGamCnfg";
        btnSelectDfltGamCnfg.Size = new Size(139, 40);
        btnSelectDfltGamCnfg.TabIndex = 23;
        btnSelectDfltGamCnfg.Text = "Game .ini";
        btnSelectDfltGamCnfg.UseVisualStyleBackColor = true;
        btnSelectDfltGamCnfg.Click += btnDfltGamCnfg_Click;
        // 
        // rtxtDfltGamCnfg
        // 
        rtxtDfltGamCnfg.BackColor = Color.FromArgb(33, 34, 43);
        rtxtDfltGamCnfg.BorderStyle = BorderStyle.None;
        rtxtDfltGamCnfg.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        rtxtDfltGamCnfg.ForeColor = Color.FromArgb(248, 248, 242);
        rtxtDfltGamCnfg.Location = new Point(171, 108);
        rtxtDfltGamCnfg.Multiline = false;
        rtxtDfltGamCnfg.Name = "rtxtDfltGamCnfg";
        rtxtDfltGamCnfg.ScrollBars = RichTextBoxScrollBars.None;
        rtxtDfltGamCnfg.Size = new Size(857, 40);
        rtxtDfltGamCnfg.TabIndex = 24;
        rtxtDfltGamCnfg.Text = "C:\\ExamplePath\\Unpacked\\Config\\DefaultGame.ini";
        rtxtDfltGamCnfg.Enter += rtxtDfltGamCnfg_Enter;
        rtxtDfltGamCnfg.Leave += rtxtDfltGamCnfg_Leave;
        // 
        // rtxtAR
        // 
        rtxtAR.BackColor = Color.FromArgb(33, 34, 43);
        rtxtAR.BorderStyle = BorderStyle.None;
        rtxtAR.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        rtxtAR.ForeColor = Color.FromArgb(248, 248, 242);
        rtxtAR.Location = new Point(171, 62);
        rtxtAR.Multiline = false;
        rtxtAR.Name = "rtxtAR";
        rtxtAR.ScrollBars = RichTextBoxScrollBars.None;
        rtxtAR.Size = new Size(857, 40);
        rtxtAR.TabIndex = 43;
        rtxtAR.Text = "C:\\ExamplePath\\Unpacked\\AssetRegistry.bin";
        rtxtAR.Enter += rtxtAR_Enter;
        rtxtAR.Leave += rtxtAR_Leave;
        // 
        // rtxtLogDir
        // 
        rtxtLogDir.BackColor = Color.FromArgb(33, 34, 43);
        rtxtLogDir.BorderStyle = BorderStyle.None;
        rtxtLogDir.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        rtxtLogDir.ForeColor = Color.FromArgb(248, 248, 242);
        rtxtLogDir.Location = new Point(171, 200);
        rtxtLogDir.Multiline = false;
        rtxtLogDir.Name = "rtxtLogDir";
        rtxtLogDir.ScrollBars = RichTextBoxScrollBars.None;
        rtxtLogDir.Size = new Size(857, 40);
        rtxtLogDir.TabIndex = 37;
        rtxtLogDir.Text = "C:\\ExamplePath\\Logs";
        rtxtLogDir.Enter += rtxtInfoDir_Enter;
        rtxtLogDir.Leave += rtxtInfoDir_Leave;
        // 
        // chkSettDNS
        // 
        chkSettDNS.AutoSize = true;
        chkSettDNS.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        chkSettDNS.Location = new Point(15, 810);
        chkSettDNS.Margin = new Padding(3, 4, 3, 4);
        chkSettDNS.Name = "chkSettDNS";
        chkSettDNS.Size = new Size(372, 32);
        chkSettDNS.TabIndex = 41;
        chkSettDNS.Text = "Do Not Show Save Prompt on Close";
        chkSettDNS.UseVisualStyleBackColor = true;
        chkSettDNS.CheckedChanged += chkSettDNS_CheckedChanged;
        // 
        // btnSelectAR
        // 
        btnSelectAR.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnSelectAR.FlatAppearance.BorderSize = 2;
        btnSelectAR.FlatStyle = FlatStyle.Flat;
        btnSelectAR.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnSelectAR.ForeColor = Color.FromArgb(248, 248, 242);
        btnSelectAR.Location = new Point(15, 62);
        btnSelectAR.Name = "btnSelectAR";
        btnSelectAR.Size = new Size(139, 40);
        btnSelectAR.TabIndex = 42;
        btnSelectAR.Text = "Asset Reg";
        btnSelectAR.UseVisualStyleBackColor = true;
        btnSelectAR.Click += btnAR_Click;
        // 
        // btnLogDir
        // 
        btnLogDir.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnLogDir.FlatAppearance.BorderSize = 2;
        btnLogDir.FlatStyle = FlatStyle.Flat;
        btnLogDir.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnLogDir.ForeColor = Color.FromArgb(248, 248, 242);
        btnLogDir.Location = new Point(15, 200);
        btnLogDir.Name = "btnLogDir";
        btnLogDir.Size = new Size(139, 40);
        btnLogDir.TabIndex = 36;
        btnLogDir.Text = "Info Dir";
        btnLogDir.UseVisualStyleBackColor = true;
        btnLogDir.Click += btnInfoDir_Click;
        // 
        // rtxtOutput
        // 
        rtxtOutput.BackColor = Color.FromArgb(33, 34, 43);
        rtxtOutput.BorderStyle = BorderStyle.None;
        rtxtOutput.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        rtxtOutput.ForeColor = Color.FromArgb(248, 248, 242);
        rtxtOutput.Location = new Point(15, 344);
        rtxtOutput.Name = "rtxtOutput";
        rtxtOutput.ReadOnly = true;
        rtxtOutput.Size = new Size(1013, 421);
        rtxtOutput.TabIndex = 23;
        rtxtOutput.Text = "";
        rtxtOutput.WordWrap = false;
        // 
        // rtxtContentDir
        // 
        rtxtContentDir.BackColor = Color.FromArgb(33, 34, 43);
        rtxtContentDir.BorderStyle = BorderStyle.None;
        rtxtContentDir.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        rtxtContentDir.ForeColor = Color.FromArgb(248, 248, 242);
        rtxtContentDir.Location = new Point(171, 16);
        rtxtContentDir.Multiline = false;
        rtxtContentDir.Name = "rtxtContentDir";
        rtxtContentDir.ScrollBars = RichTextBoxScrollBars.None;
        rtxtContentDir.Size = new Size(857, 40);
        rtxtContentDir.TabIndex = 1;
        rtxtContentDir.Text = "C:\\ExamplePath\\Content";
        rtxtContentDir.Validating += ValidateContentDir;
        // 
        // rtxtJSONDir
        // 
        rtxtJSONDir.BackColor = Color.FromArgb(33, 34, 43);
        rtxtJSONDir.BorderStyle = BorderStyle.None;
        rtxtJSONDir.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        rtxtJSONDir.ForeColor = Color.FromArgb(248, 248, 242);
        rtxtJSONDir.Location = new Point(171, 154);
        rtxtJSONDir.Multiline = false;
        rtxtJSONDir.Name = "rtxtJSONDir";
        rtxtJSONDir.ScrollBars = RichTextBoxScrollBars.None;
        rtxtJSONDir.Size = new Size(857, 40);
        rtxtJSONDir.TabIndex = 3;
        rtxtJSONDir.Text = "C:\\ExamplePath\\AssetDump";
        rtxtJSONDir.Enter += rtxtJSONDir_Enter;
        rtxtJSONDir.Leave += rtxtJSONDir_Leave;
        // 
        // chkAutoLoad
        // 
        chkAutoLoad.AutoSize = true;
        chkAutoLoad.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        chkAutoLoad.ForeColor = Color.FromArgb(248, 248, 242);
        chkAutoLoad.Location = new Point(15, 771);
        chkAutoLoad.Name = "chkAutoLoad";
        chkAutoLoad.Size = new Size(303, 32);
        chkAutoLoad.TabIndex = 39;
        chkAutoLoad.Text = "Auto Load Profile on Launch";
        chkAutoLoad.UseVisualStyleBackColor = true;
        chkAutoLoad.CheckedChanged += chkAutoLoad_CheckedChanged;
        // 
        // btnLoadConfig
        // 
        btnLoadConfig.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnLoadConfig.FlatAppearance.BorderSize = 2;
        btnLoadConfig.FlatStyle = FlatStyle.Flat;
        btnLoadConfig.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnLoadConfig.ForeColor = Color.FromArgb(248, 248, 242);
        btnLoadConfig.Location = new Point(487, 788);
        btnLoadConfig.Name = "btnLoadConfig";
        btnLoadConfig.Size = new Size(190, 40);
        btnLoadConfig.TabIndex = 29;
        btnLoadConfig.Text = "Load Profile";
        btnLoadConfig.UseVisualStyleBackColor = true;
        btnLoadConfig.Click += btnLoadConfig_Click;
        // 
        // btnSaveConfig
        // 
        btnSaveConfig.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnSaveConfig.FlatAppearance.BorderSize = 2;
        btnSaveConfig.FlatStyle = FlatStyle.Flat;
        btnSaveConfig.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnSaveConfig.ForeColor = Color.FromArgb(248, 248, 242);
        btnSaveConfig.Location = new Point(487, 849);
        btnSaveConfig.Name = "btnSaveConfig";
        btnSaveConfig.Size = new Size(190, 40);
        btnSaveConfig.TabIndex = 30;
        btnSaveConfig.Text = "Save Profile";
        btnSaveConfig.UseVisualStyleBackColor = true;
        btnSaveConfig.Click += btnSaveConfig_Click;
        // 
        // btnSelectContentDir
        // 
        btnSelectContentDir.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnSelectContentDir.FlatAppearance.BorderSize = 2;
        btnSelectContentDir.FlatStyle = FlatStyle.Flat;
        btnSelectContentDir.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnSelectContentDir.ForeColor = Color.FromArgb(248, 248, 242);
        btnSelectContentDir.Location = new Point(15, 16);
        btnSelectContentDir.Name = "btnSelectContentDir";
        btnSelectContentDir.Size = new Size(139, 40);
        btnSelectContentDir.TabIndex = 0;
        btnSelectContentDir.Text = "Content Dir";
        btnSelectContentDir.UseVisualStyleBackColor = true;
        btnSelectContentDir.Click += btnSelectContentDir_Click;
        // 
        // btnOpenAllTypes
        // 
        btnOpenAllTypes.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnOpenAllTypes.FlatAppearance.BorderSize = 2;
        btnOpenAllTypes.FlatStyle = FlatStyle.Flat;
        btnOpenAllTypes.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnOpenAllTypes.ForeColor = Color.FromArgb(248, 248, 242);
        btnOpenAllTypes.Location = new Point(15, 849);
        btnOpenAllTypes.Name = "btnOpenAllTypes";
        btnOpenAllTypes.Size = new Size(183, 40);
        btnOpenAllTypes.TabIndex = 25;
        btnOpenAllTypes.Text = "Open Asset List";
        btnOpenAllTypes.UseVisualStyleBackColor = true;
        btnOpenAllTypes.Click += btnOpenAllTypes_Click;
        // 
        // btnOpenAssetTypes
        // 
        btnOpenAssetTypes.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnOpenAssetTypes.FlatAppearance.BorderSize = 2;
        btnOpenAssetTypes.FlatStyle = FlatStyle.Flat;
        btnOpenAssetTypes.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnOpenAssetTypes.ForeColor = Color.FromArgb(248, 248, 242);
        btnOpenAssetTypes.Location = new Point(225, 849);
        btnOpenAssetTypes.Name = "btnOpenAssetTypes";
        btnOpenAssetTypes.Size = new Size(202, 40);
        btnOpenAssetTypes.TabIndex = 24;
        btnOpenAssetTypes.Text = "Open Asset Types";
        btnOpenAssetTypes.UseVisualStyleBackColor = true;
        btnOpenAssetTypes.Click += btnOpenAssetTypes_Click;
        // 
        // btnOpenLogs
        // 
        btnOpenLogs.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnOpenLogs.FlatAppearance.BorderSize = 2;
        btnOpenLogs.FlatStyle = FlatStyle.Flat;
        btnOpenLogs.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnOpenLogs.ForeColor = Color.FromArgb(248, 248, 242);
        btnOpenLogs.Location = new Point(724, 849);
        btnOpenLogs.Name = "btnOpenLogs";
        btnOpenLogs.Size = new Size(138, 40);
        btnOpenLogs.TabIndex = 26;
        btnOpenLogs.Text = "Open Logs";
        btnOpenLogs.UseVisualStyleBackColor = true;
        btnOpenLogs.Click += btnOpenLogs_Click;
        // 
        // btnSelectJSONDir
        // 
        btnSelectJSONDir.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnSelectJSONDir.FlatAppearance.BorderSize = 2;
        btnSelectJSONDir.FlatStyle = FlatStyle.Flat;
        btnSelectJSONDir.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnSelectJSONDir.ForeColor = Color.FromArgb(248, 248, 242);
        btnSelectJSONDir.Location = new Point(15, 154);
        btnSelectJSONDir.Name = "btnSelectJSONDir";
        btnSelectJSONDir.Size = new Size(139, 40);
        btnSelectJSONDir.TabIndex = 2;
        btnSelectJSONDir.Text = "Result Dir";
        btnSelectJSONDir.UseVisualStyleBackColor = true;
        btnSelectJSONDir.Click += btnSelectJSONDir_Click;
        // 
        // lblProgress
        // 
        lblProgress.Font = new Font("Segoe UI", 16.2F, FontStyle.Bold, GraphicsUnit.Point);
        lblProgress.ForeColor = Color.FromArgb(248, 248, 242);
        lblProgress.Location = new Point(678, 293);
        lblProgress.Name = "lblProgress";
        lblProgress.Size = new Size(283, 40);
        lblProgress.TabIndex = 31;
        lblProgress.Text = "0/0";
        lblProgress.TextAlign = ContentAlignment.MiddleCenter;
        // 
        // btnClearLogs
        // 
        btnClearLogs.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnClearLogs.FlatAppearance.BorderSize = 2;
        btnClearLogs.FlatStyle = FlatStyle.Flat;
        btnClearLogs.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnClearLogs.ForeColor = Color.FromArgb(248, 248, 242);
        btnClearLogs.Location = new Point(890, 849);
        btnClearLogs.Name = "btnClearLogs";
        btnClearLogs.Size = new Size(138, 40);
        btnClearLogs.TabIndex = 28;
        btnClearLogs.Text = "Clear Logs";
        btnClearLogs.UseVisualStyleBackColor = true;
        btnClearLogs.Click += btnClearLogs_Click;
        // 
        // btnSerializeAssets
        // 
        btnSerializeAssets.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnSerializeAssets.FlatAppearance.BorderSize = 2;
        btnSerializeAssets.FlatStyle = FlatStyle.Flat;
        btnSerializeAssets.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnSerializeAssets.ForeColor = Color.FromArgb(248, 248, 242);
        btnSerializeAssets.Location = new Point(698, 246);
        btnSerializeAssets.Name = "btnSerializeAssets";
        btnSerializeAssets.Size = new Size(246, 40);
        btnSerializeAssets.TabIndex = 18;
        btnSerializeAssets.Text = "Serialize Assets";
        btnSerializeAssets.UseVisualStyleBackColor = true;
        btnSerializeAssets.Click += btnSerializeAssets_Click;
        // 
        // btnScanAssets
        // 
        btnScanAssets.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnScanAssets.FlatAppearance.BorderSize = 2;
        btnScanAssets.FlatStyle = FlatStyle.Flat;
        btnScanAssets.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnScanAssets.ForeColor = Color.FromArgb(248, 248, 242);
        btnScanAssets.Location = new Point(403, 246);
        btnScanAssets.Name = "btnScanAssets";
        btnScanAssets.Size = new Size(246, 40);
        btnScanAssets.TabIndex = 16;
        btnScanAssets.Text = "Scan Assets";
        btnScanAssets.UseVisualStyleBackColor = true;
        btnScanAssets.Click += btnScanAssets_Click;
        // 
        // label1
        // 
        label1.AutoSize = true;
        label1.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        label1.ForeColor = Color.FromArgb(248, 248, 242);
        label1.Location = new Point(27, 248);
        label1.Name = "label1";
        label1.Size = new Size(118, 28);
        label1.TabIndex = 6;
        label1.Text = "UE Version:";
        // 
        // chkRefreshAssets
        // 
        chkRefreshAssets.AutoSize = true;
        chkRefreshAssets.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        chkRefreshAssets.ForeColor = Color.FromArgb(248, 248, 242);
        chkRefreshAssets.Location = new Point(177, 301);
        chkRefreshAssets.Name = "chkRefreshAssets";
        chkRefreshAssets.Size = new Size(172, 32);
        chkRefreshAssets.TabIndex = 8;
        chkRefreshAssets.Text = "Refresh Assets";
        chkRefreshAssets.UseVisualStyleBackColor = true;
        // 
        // cbUEVersion
        // 
        cbUEVersion.BackColor = Color.FromArgb(33, 34, 43);
        cbUEVersion.FlatStyle = FlatStyle.Popup;
        cbUEVersion.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        cbUEVersion.ForeColor = Color.FromArgb(248, 248, 242);
        cbUEVersion.FormattingEnabled = true;
        cbUEVersion.Location = new Point(171, 246);
        cbUEVersion.Name = "cbUEVersion";
        cbUEVersion.Size = new Size(178, 36);
        cbUEVersion.TabIndex = 7;
        // 
        // tbSerialSettings
        // 
        tbSerialSettings.BackColor = Color.FromArgb(40, 42, 54);
        tbSerialSettings.Controls.Add(rtxtSimpleAssets);
        tbSerialSettings.Controls.Add(chkDummyWithProps);
        tbSerialSettings.Controls.Add(label9);
        tbSerialSettings.Controls.Add(lbDummyAssets);
        tbSerialSettings.Controls.Add(label3);
        tbSerialSettings.Controls.Add(lbAssetsToSkipSerialization);
        tbSerialSettings.Controls.Add(label5);
        tbSerialSettings.Controls.Add(rtxtCircularDependancy);
        tbSerialSettings.Controls.Add(label6);
        tbSerialSettings.Location = new Point(4, 29);
        tbSerialSettings.Name = "tbSerialSettings";
        tbSerialSettings.Padding = new Padding(3);
        tbSerialSettings.Size = new Size(1038, 905);
        tbSerialSettings.TabIndex = 1;
        tbSerialSettings.Text = "Serialization Settings";
        // 
        // rtxtSimpleAssets
        // 
        rtxtSimpleAssets.BackColor = Color.FromArgb(33, 34, 43);
        rtxtSimpleAssets.BorderStyle = BorderStyle.None;
        rtxtSimpleAssets.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        rtxtSimpleAssets.ForeColor = Color.FromArgb(248, 248, 242);
        rtxtSimpleAssets.Location = new Point(16, 46);
        rtxtSimpleAssets.Name = "rtxtSimpleAssets";
        rtxtSimpleAssets.ScrollBars = RichTextBoxScrollBars.Vertical;
        rtxtSimpleAssets.Size = new Size(513, 392);
        rtxtSimpleAssets.TabIndex = 15;
        rtxtSimpleAssets.Text = resources.GetString("rtxtSimpleAssets.Text");
        rtxtSimpleAssets.WordWrap = false;
        // 
        // chkDummyWithProps
        // 
        chkDummyWithProps.AutoSize = true;
        chkDummyWithProps.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        chkDummyWithProps.ForeColor = Color.FromArgb(248, 248, 242);
        chkDummyWithProps.Location = new Point(673, 852);
        chkDummyWithProps.Name = "chkDummyWithProps";
        chkDummyWithProps.Size = new Size(264, 32);
        chkDummyWithProps.TabIndex = 38;
        chkDummyWithProps.Text = "Dummy With Properties";
        chkDummyWithProps.UseVisualStyleBackColor = true;
        // 
        // label9
        // 
        label9.AutoSize = true;
        label9.Font = new Font("Segoe UI", 16.2F, FontStyle.Bold, GraphicsUnit.Point);
        label9.ForeColor = Color.FromArgb(248, 248, 242);
        label9.Location = new Point(633, 460);
        label9.Name = "label9";
        label9.Size = new Size(330, 38);
        label9.TabIndex = 34;
        label9.Text = "Assets Types to Dummy";
        // 
        // lbDummyAssets
        // 
        lbDummyAssets.BackColor = Color.FromArgb(33, 34, 43);
        lbDummyAssets.BorderStyle = BorderStyle.None;
        lbDummyAssets.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        lbDummyAssets.ForeColor = Color.FromArgb(248, 248, 242);
        lbDummyAssets.FormattingEnabled = true;
        lbDummyAssets.ItemHeight = 28;
        lbDummyAssets.Location = new Point(571, 503);
        lbDummyAssets.Name = "lbDummyAssets";
        lbDummyAssets.SelectionMode = SelectionMode.MultiSimple;
        lbDummyAssets.Size = new Size(442, 336);
        lbDummyAssets.TabIndex = 35;
        // 
        // label3
        // 
        label3.AutoSize = true;
        label3.Font = new Font("Segoe UI", 16.2F, FontStyle.Bold, GraphicsUnit.Point);
        label3.ForeColor = Color.FromArgb(248, 248, 242);
        label3.Location = new Point(587, 0);
        label3.Name = "label3";
        label3.Size = new Size(426, 38);
        label3.TabIndex = 10;
        label3.Text = "Assets Types to Skip Serializing";
        // 
        // lbAssetsToSkipSerialization
        // 
        lbAssetsToSkipSerialization.BackColor = Color.FromArgb(33, 34, 43);
        lbAssetsToSkipSerialization.BorderStyle = BorderStyle.None;
        lbAssetsToSkipSerialization.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        lbAssetsToSkipSerialization.ForeColor = Color.FromArgb(248, 248, 242);
        lbAssetsToSkipSerialization.FormattingEnabled = true;
        lbAssetsToSkipSerialization.ItemHeight = 28;
        lbAssetsToSkipSerialization.Location = new Point(571, 46);
        lbAssetsToSkipSerialization.Name = "lbAssetsToSkipSerialization";
        lbAssetsToSkipSerialization.SelectionMode = SelectionMode.MultiSimple;
        lbAssetsToSkipSerialization.Size = new Size(442, 392);
        lbAssetsToSkipSerialization.TabIndex = 11;
        // 
        // label5
        // 
        label5.AutoSize = true;
        label5.Font = new Font("Segoe UI", 16.2F, FontStyle.Bold, GraphicsUnit.Point);
        label5.ForeColor = Color.FromArgb(248, 248, 242);
        label5.Location = new Point(178, 3);
        label5.Name = "label5";
        label5.Size = new Size(197, 38);
        label5.TabIndex = 14;
        label5.Text = "Simple Assets";
        // 
        // rtxtCircularDependancy
        // 
        rtxtCircularDependancy.BackColor = Color.FromArgb(33, 34, 43);
        rtxtCircularDependancy.BorderStyle = BorderStyle.None;
        rtxtCircularDependancy.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        rtxtCircularDependancy.ForeColor = Color.FromArgb(248, 248, 242);
        rtxtCircularDependancy.Location = new Point(16, 503);
        rtxtCircularDependancy.Name = "rtxtCircularDependancy";
        rtxtCircularDependancy.ScrollBars = RichTextBoxScrollBars.Vertical;
        rtxtCircularDependancy.Size = new Size(513, 381);
        rtxtCircularDependancy.TabIndex = 20;
        rtxtCircularDependancy.Text = "/Script/Engine.SoundClass\n/Script/Engine.SoundSubmix\n/Script/Engine.EndpointSubmix";
        rtxtCircularDependancy.WordWrap = false;
        // 
        // label6
        // 
        label6.AutoSize = true;
        label6.Font = new Font("Segoe UI", 16.2F, FontStyle.Bold, GraphicsUnit.Point);
        label6.ForeColor = Color.FromArgb(248, 248, 242);
        label6.Location = new Point(46, 460);
        label6.Name = "label6";
        label6.Size = new Size(466, 38);
        label6.TabIndex = 19;
        label6.Text = "Assets with a Circular Dependancy";
        // 
        // tabCpyDlt
        // 
        tabCpyDlt.BackColor = Color.FromArgb(40, 42, 54);
        tabCpyDlt.Controls.Add(chkThread);
        tabCpyDlt.Controls.Add(chkForceOneLOD);
        tabCpyDlt.Controls.Add(label2);
        tabCpyDlt.Controls.Add(chkUseAnimActorX);
        tabCpyDlt.Controls.Add(chkUseSKMActorX);
        tabCpyDlt.Controls.Add(chkUseSMActorX);
        tabCpyDlt.Controls.Add(chkAllTypes);
        tabCpyDlt.Controls.Add(lblProgress2);
        tabCpyDlt.Controls.Add(btnCopyAssets);
        tabCpyDlt.Controls.Add(rtxtFromDir);
        tabCpyDlt.Controls.Add(btnFromDir);
        tabCpyDlt.Controls.Add(label7);
        tabCpyDlt.Controls.Add(btnMoveAssets);
        tabCpyDlt.Controls.Add(rtxtToDir);
        tabCpyDlt.Controls.Add(btnToDir);
        tabCpyDlt.Controls.Add(label4);
        tabCpyDlt.Controls.Add(rtxtCookedAssets);
        tabCpyDlt.Location = new Point(4, 29);
        tabCpyDlt.Name = "tabCpyDlt";
        tabCpyDlt.Padding = new Padding(3);
        tabCpyDlt.Size = new Size(1038, 905);
        tabCpyDlt.TabIndex = 4;
        tabCpyDlt.Text = "Asset Utilities";
        // 
        // chkThread
        // 
        chkThread.AutoSize = true;
        chkThread.Checked = true;
        chkThread.CheckState = CheckState.Checked;
        chkThread.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        chkThread.ForeColor = Color.FromArgb(248, 248, 242);
        chkThread.Location = new Point(396, 844);
        chkThread.Name = "chkThread";
        chkThread.Size = new Size(177, 32);
        chkThread.TabIndex = 52;
        chkThread.Text = "Multithreading";
        chkThread.UseVisualStyleBackColor = true;
        // 
        // chkForceOneLOD
        // 
        chkForceOneLOD.AutoSize = true;
        chkForceOneLOD.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        chkForceOneLOD.ForeColor = Color.FromArgb(248, 248, 242);
        chkForceOneLOD.Location = new Point(396, 791);
        chkForceOneLOD.Name = "chkForceOneLOD";
        chkForceOneLOD.Size = new Size(371, 32);
        chkForceOneLOD.TabIndex = 51;
        chkForceOneLOD.Text = "Force mesh JSON to have one LOD?";
        chkForceOneLOD.UseVisualStyleBackColor = true;
        // 
        // label2
        // 
        label2.AutoSize = true;
        label2.Font = new Font("Segoe UI", 16.2F, FontStyle.Bold, GraphicsUnit.Point);
        label2.ForeColor = Color.FromArgb(248, 248, 242);
        label2.Location = new Point(98, 618);
        label2.Name = "label2";
        label2.Size = new Size(174, 38);
        label2.TabIndex = 50;
        label2.Text = "Use ActorX?";
        // 
        // chkUseAnimActorX
        // 
        chkUseAnimActorX.AutoSize = true;
        chkUseAnimActorX.Checked = true;
        chkUseAnimActorX.CheckState = CheckState.Checked;
        chkUseAnimActorX.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        chkUseAnimActorX.ForeColor = Color.FromArgb(248, 248, 242);
        chkUseAnimActorX.Location = new Point(98, 791);
        chkUseAnimActorX.Name = "chkUseAnimActorX";
        chkUseAnimActorX.Size = new Size(133, 32);
        chkUseAnimActorX.TabIndex = 49;
        chkUseAnimActorX.Text = "Animation";
        chkUseAnimActorX.UseVisualStyleBackColor = true;
        // 
        // chkUseSKMActorX
        // 
        chkUseSKMActorX.AutoSize = true;
        chkUseSKMActorX.Checked = true;
        chkUseSKMActorX.CheckState = CheckState.Checked;
        chkUseSKMActorX.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        chkUseSKMActorX.ForeColor = Color.FromArgb(248, 248, 242);
        chkUseSKMActorX.Location = new Point(98, 734);
        chkUseSKMActorX.Name = "chkUseSKMActorX";
        chkUseSKMActorX.Size = new Size(166, 32);
        chkUseSKMActorX.TabIndex = 48;
        chkUseSKMActorX.Text = "Skeletal Mesh";
        chkUseSKMActorX.UseVisualStyleBackColor = true;
        // 
        // chkUseSMActorX
        // 
        chkUseSMActorX.AutoSize = true;
        chkUseSMActorX.Checked = true;
        chkUseSMActorX.CheckState = CheckState.Checked;
        chkUseSMActorX.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        chkUseSMActorX.ForeColor = Color.FromArgb(248, 248, 242);
        chkUseSMActorX.Location = new Point(98, 676);
        chkUseSMActorX.Name = "chkUseSMActorX";
        chkUseSMActorX.Size = new Size(145, 32);
        chkUseSMActorX.TabIndex = 47;
        chkUseSMActorX.Text = "Static Mesh";
        chkUseSMActorX.UseVisualStyleBackColor = true;
        // 
        // chkAllTypes
        // 
        chkAllTypes.AutoSize = true;
        chkAllTypes.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        chkAllTypes.ForeColor = Color.FromArgb(248, 248, 242);
        chkAllTypes.Location = new Point(113, 413);
        chkAllTypes.Name = "chkAllTypes";
        chkAllTypes.Size = new Size(120, 32);
        chkAllTypes.TabIndex = 46;
        chkAllTypes.Text = "All Types";
        chkAllTypes.UseVisualStyleBackColor = true;
        // 
        // lblProgress2
        // 
        lblProgress2.Font = new Font("Segoe UI", 16.2F, FontStyle.Bold, GraphicsUnit.Point);
        lblProgress2.ForeColor = Color.FromArgb(248, 248, 242);
        lblProgress2.Location = new Point(30, 464);
        lblProgress2.Name = "lblProgress2";
        lblProgress2.Size = new Size(283, 40);
        lblProgress2.TabIndex = 45;
        lblProgress2.Text = "0/0";
        lblProgress2.TextAlign = ContentAlignment.MiddleCenter;
        // 
        // btnCopyAssets
        // 
        btnCopyAssets.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnCopyAssets.FlatAppearance.BorderSize = 2;
        btnCopyAssets.FlatStyle = FlatStyle.Flat;
        btnCopyAssets.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnCopyAssets.ForeColor = Color.FromArgb(248, 248, 242);
        btnCopyAssets.Location = new Point(59, 266);
        btnCopyAssets.Name = "btnCopyAssets";
        btnCopyAssets.Size = new Size(226, 40);
        btnCopyAssets.TabIndex = 44;
        btnCopyAssets.Text = "Copy";
        btnCopyAssets.UseVisualStyleBackColor = true;
        btnCopyAssets.Click += btnCopyAssets_Click;
        // 
        // rtxtFromDir
        // 
        rtxtFromDir.BackColor = Color.FromArgb(33, 34, 43);
        rtxtFromDir.BorderStyle = BorderStyle.None;
        rtxtFromDir.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        rtxtFromDir.ForeColor = Color.FromArgb(248, 248, 242);
        rtxtFromDir.Location = new Point(220, 104);
        rtxtFromDir.Multiline = false;
        rtxtFromDir.Name = "rtxtFromDir";
        rtxtFromDir.ScrollBars = RichTextBoxScrollBars.None;
        rtxtFromDir.Size = new Size(760, 40);
        rtxtFromDir.TabIndex = 43;
        rtxtFromDir.Text = "C:\\ExamplePath\\OriginalDir";
        rtxtFromDir.Enter += rtxtFromDir_Enter;
        rtxtFromDir.Leave += rtxtFromDir_Leave;
        // 
        // btnFromDir
        // 
        btnFromDir.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnFromDir.FlatAppearance.BorderSize = 2;
        btnFromDir.FlatStyle = FlatStyle.Flat;
        btnFromDir.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnFromDir.ForeColor = Color.FromArgb(248, 248, 242);
        btnFromDir.Location = new Point(59, 104);
        btnFromDir.Name = "btnFromDir";
        btnFromDir.Size = new Size(139, 40);
        btnFromDir.TabIndex = 42;
        btnFromDir.Text = "From Dir";
        btnFromDir.UseVisualStyleBackColor = true;
        btnFromDir.Click += btnFromDir_Click;
        // 
        // label7
        // 
        label7.AutoSize = true;
        label7.Font = new Font("Segoe UI", 16.2F, FontStyle.Bold, GraphicsUnit.Point);
        label7.ForeColor = Color.FromArgb(248, 248, 242);
        label7.Location = new Point(334, 28);
        label7.Name = "label7";
        label7.Size = new Size(356, 38);
        label7.TabIndex = 39;
        label7.Text = "Copy/Move/Delete Assets";
        // 
        // btnMoveAssets
        // 
        btnMoveAssets.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnMoveAssets.FlatAppearance.BorderSize = 2;
        btnMoveAssets.FlatStyle = FlatStyle.Flat;
        btnMoveAssets.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnMoveAssets.ForeColor = Color.FromArgb(248, 248, 242);
        btnMoveAssets.Location = new Point(59, 341);
        btnMoveAssets.Name = "btnMoveAssets";
        btnMoveAssets.Size = new Size(226, 40);
        btnMoveAssets.TabIndex = 17;
        btnMoveAssets.Text = "Move";
        btnMoveAssets.UseVisualStyleBackColor = true;
        btnMoveAssets.Click += btnMoveAssets_Click;
        // 
        // rtxtToDir
        // 
        rtxtToDir.BackColor = Color.FromArgb(33, 34, 43);
        rtxtToDir.BorderStyle = BorderStyle.None;
        rtxtToDir.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        rtxtToDir.ForeColor = Color.FromArgb(248, 248, 242);
        rtxtToDir.Location = new Point(220, 163);
        rtxtToDir.Multiline = false;
        rtxtToDir.Name = "rtxtToDir";
        rtxtToDir.ScrollBars = RichTextBoxScrollBars.None;
        rtxtToDir.Size = new Size(760, 40);
        rtxtToDir.TabIndex = 5;
        rtxtToDir.Text = "C:\\ExamplePath\\MoveToDir";
        rtxtToDir.Enter += rtxtCookedDir_Enter;
        rtxtToDir.Leave += rtxtCookedDir_Leave;
        // 
        // btnToDir
        // 
        btnToDir.FlatAppearance.BorderColor = Color.FromArgb(33, 34, 43);
        btnToDir.FlatAppearance.BorderSize = 2;
        btnToDir.FlatStyle = FlatStyle.Flat;
        btnToDir.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point);
        btnToDir.ForeColor = Color.FromArgb(248, 248, 242);
        btnToDir.Location = new Point(59, 163);
        btnToDir.Name = "btnToDir";
        btnToDir.Size = new Size(139, 40);
        btnToDir.TabIndex = 4;
        btnToDir.Text = "To Dir";
        btnToDir.UseVisualStyleBackColor = true;
        btnToDir.Click += btnToDir_Click;
        // 
        // label4
        // 
        label4.AutoSize = true;
        label4.Font = new Font("Segoe UI", 16.2F, FontStyle.Bold, GraphicsUnit.Point);
        label4.ForeColor = Color.FromArgb(248, 248, 242);
        label4.Location = new Point(566, 221);
        label4.Name = "label4";
        label4.Size = new Size(169, 38);
        label4.TabIndex = 12;
        label4.Text = "Asset Types";
        // 
        // rtxtCookedAssets
        // 
        rtxtCookedAssets.BackColor = Color.FromArgb(33, 34, 43);
        rtxtCookedAssets.BorderStyle = BorderStyle.None;
        rtxtCookedAssets.Font = new Font("Segoe UI Semibold", 12F, FontStyle.Bold | FontStyle.Italic, GraphicsUnit.Point);
        rtxtCookedAssets.ForeColor = Color.FromArgb(248, 248, 242);
        rtxtCookedAssets.Location = new Point(343, 262);
        rtxtCookedAssets.Name = "rtxtCookedAssets";
        rtxtCookedAssets.Size = new Size(637, 504);
        rtxtCookedAssets.TabIndex = 13;
        rtxtCookedAssets.Text = "\"/Script/Engine.ParticleSystem\",\n\"/Script/Engine.SoundWave\",\n\"/Script/Engine.AimOffsetBlendSpace\",\n\"/Script/Engine.AimOffsetBlendSpace1D\",\n\"/Script/Engine.BlendSpace\",\n\"/Script/Engine.BlendSpace1D\"";
        rtxtCookedAssets.WordWrap = false;
        // 
        // panel4
        // 
        panel4.Controls.Add(treeParseDir);
        panel4.Location = new Point(1061, 4);
        panel4.Margin = new Padding(3, 4, 3, 4);
        panel4.Name = "panel4";
        panel4.Size = new Size(342, 938);
        panel4.TabIndex = 3;
        // 
        // treeParseDir
        // 
        treeParseDir.CheckBoxes = true;
        treeParseDir.ContextMenuStrip = cntxtTreeParse;
        treeParseDir.Location = new Point(3, 29);
        treeParseDir.Margin = new Padding(3, 4, 0, 4);
        treeParseDir.Name = "treeParseDir";
        treeParseDir.ShowNodeToolTips = true;
        treeParseDir.Size = new Size(339, 909);
        treeParseDir.TabIndex = 2;
        treeParseDir.AfterCheck += treeParseDir_AfterCheck;
        treeParseDir.BeforeExpand += treeParseDir_BeforeExpand;
        treeParseDir.KeyDown += treeParseDir_KeyDown;
        treeParseDir.MouseDown += treeParseDir_MouseDown;
        treeParseDir.MouseMove += treeParseDir_MouseMove;
        // 
        // cntxtTreeParse
        // 
        cntxtTreeParse.ImageScalingSize = new Size(20, 20);
        cntxtTreeParse.Items.AddRange(new ToolStripItem[] { openToolStripMenuItem, copyPathToolStripMenuItem, expandAllToolStripMenuItem, collapseAllToolStripMenuItem, refreshAllToolStripMenuItem });
        cntxtTreeParse.Name = "cntxtTreeParse";
        cntxtTreeParse.Size = new Size(147, 124);
        // 
        // openToolStripMenuItem
        // 
        openToolStripMenuItem.Name = "openToolStripMenuItem";
        openToolStripMenuItem.Size = new Size(146, 24);
        openToolStripMenuItem.Text = "&Open";
        openToolStripMenuItem.Click += openToolStripMenuItem_Click;
        // 
        // copyPathToolStripMenuItem
        // 
        copyPathToolStripMenuItem.Name = "copyPathToolStripMenuItem";
        copyPathToolStripMenuItem.Size = new Size(146, 24);
        copyPathToolStripMenuItem.Text = "&Copy path";
        copyPathToolStripMenuItem.Click += copyPathToolStripMenuItem_Click;
        // 
        // expandAllToolStripMenuItem
        // 
        expandAllToolStripMenuItem.Name = "expandAllToolStripMenuItem";
        expandAllToolStripMenuItem.Size = new Size(146, 24);
        expandAllToolStripMenuItem.Text = "&Expand";
        expandAllToolStripMenuItem.Click += expandAllToolStripMenuItem_Click;
        // 
        // collapseAllToolStripMenuItem
        // 
        collapseAllToolStripMenuItem.Name = "collapseAllToolStripMenuItem";
        collapseAllToolStripMenuItem.Size = new Size(146, 24);
        collapseAllToolStripMenuItem.Text = "Collap&se";
        collapseAllToolStripMenuItem.Click += collapseAllToolStripMenuItem_Click;
        // 
        // refreshAllToolStripMenuItem
        // 
        refreshAllToolStripMenuItem.Name = "refreshAllToolStripMenuItem";
        refreshAllToolStripMenuItem.Size = new Size(146, 24);
        refreshAllToolStripMenuItem.Text = "&Refresh";
        refreshAllToolStripMenuItem.Click += refreshToolStripMenuItem_Click;
        // 
        // MainForm
        // 
        AutoScaleDimensions = new SizeF(8F, 20F);
        AutoScaleMode = AutoScaleMode.Font;
        AutoScroll = true;
        AutoSize = true;
        AutoSizeMode = AutoSizeMode.GrowAndShrink;
        BackColor = Color.FromArgb(40, 42, 54);
        ClientSize = new Size(1418, 955);
        Controls.Add(flowLayoutPanel1);
        ForeColor = Color.FromArgb(248, 248, 242);
        KeyPreview = true;
        Name = "MainForm";
        StartPosition = FormStartPosition.CenterScreen;
        Text = "Cooked Asset Serializer";
        FormClosing += MainForm_FormClosing;
        Load += MainForm_Load;
        flowLayoutPanel1.ResumeLayout(false);
        flowLayoutPanel1.PerformLayout();
        cntxtMainStrip.ResumeLayout(false);
        panel2.ResumeLayout(false);
        panel2.PerformLayout();
        tabControl1.ResumeLayout(false);
        tbRun.ResumeLayout(false);
        tbRun.PerformLayout();
        tbSerialSettings.ResumeLayout(false);
        tbSerialSettings.PerformLayout();
        tabCpyDlt.ResumeLayout(false);
        tabCpyDlt.PerformLayout();
        panel4.ResumeLayout(false);
        cntxtTreeParse.ResumeLayout(false);
        ResumeLayout(false);
        PerformLayout();
    }

    #endregion
    private ToolTip tTipTree;
    private FlowLayoutPanel flowLayoutPanel1;
    private ExTreeView treeParseDir;
    private Panel panel2;
    private Label lbAuthors;
    private ContextMenuStrip cntxtTreeParse;
    private ToolStripMenuItem expandAllToolStripMenuItem;
    private ToolStripMenuItem collapseAllToolStripMenuItem;
    private ToolStripMenuItem refreshAllToolStripMenuItem;
    private ContextMenuStrip cntxtMainStrip;
    private ToolStripMenuItem clearAllPathsToolStripMenuItem;
    private ToolStripMenuItem restorePathsToDefaultsToolStripMenuItem;
    private ToolStripMenuItem pauseSerializationToolStripMenuItem;
    private ToolStripMenuItem cancelSerializationToolStripMenuItem;
    private ToolStripMenuItem restoreAllSettingsToDefaultthisTabToolStripMenuItem;
    private ToolStripMenuItem restoreAllSettingsToDefaultallTabsToolStripMenuItem;
    private ToolStripMenuItem copyPathToolStripMenuItem;
    private ToolStripMenuItem openToolStripMenuItem;
    private Panel panel4;
    private TabControl tabControl1;
    private TabPage tbRun;
    private RichTextBox rtxtLogDir;
    private RichTextBox rtxtOutput;
    private RichTextBox rtxtContentDir;
    private RichTextBox rtxtJSONDir;
    private RichTextBox rtxtToDir;
    private CheckBox chkAutoLoad;
    private Button btnLoadConfig;
    private Button btnSaveConfig;
    private Button btnSelectContentDir;
    private Button btnLogDir;
    private Button btnOpenAllTypes;
    private Button btnOpenAssetTypes;
    private Button btnOpenLogs;
    private Button btnSelectJSONDir;
    private Label lblProgress;
    private Button btnClearLogs;
    private Button btnSerializeAssets;
    private Button btnToDir;
    private Button btnMoveAssets;
    private Button btnScanAssets;
    private Label label1;
    private CheckBox chkRefreshAssets;
    private ComboBox cbUEVersion;
    private TabPage tbSerialSettings;
    private CheckBox chkSettDNS;
    private Label label7;
    private CheckBox chkDummyWithProps;
    private Label label9;
    private ListBox lbDummyAssets;
    private Label label3;
    private ListBox lbAssetsToSkipSerialization;
    private Label label5;
    private Label label4;
    private RichTextBox rtxtCookedAssets;
    private RichTextBox rtxtSimpleAssets;
    private RichTextBox rtxtCircularDependancy;
    private Label label6;
    private Button btnSelectDfltGamCnfg;
    private RichTextBox rtxtDfltGamCnfg;
    private TabPage tabCpyDlt;
    private Button btnCopyAssets;
    private RichTextBox rtxtFromDir;
    private Button btnFromDir;
    private RichTextBox rtxtAR;
    private Button btnSelectAR;
    private Button btnSerializeNatives;
    private Label lblProgress2;
    private CheckBox chkAllTypes;
    private Label label2;
    private CheckBox chkUseAnimActorX;
    private CheckBox chkUseSKMActorX;
    private CheckBox chkUseSMActorX;
    private CheckBox chkForceOneLOD;
    private CheckBox chkThread;
}
