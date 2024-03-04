% generate_twinCAT_driver.m
% Define names
driverName = "Tc3_BoolCounter";   % Name of TC driver
Namemod1 = "count_and_invert_booleans";         % Name of module 1 in driver

% Directory setup
buildDir = fullfile(pwd, '_BuildDir'); % Place source files here
cppDir = fullfile(buildDir, Namemod1); % C++ directory for the first function
mkdir(buildDir);
mkdir(cppDir);

% MATLAB Coder Configuration (common for both functions)
cfg = coder.config('lib', 'ecoder', false);
cfg.GenCodeOnly = true;
cfg.GenerateExampleMain = 'GenerateCodeOnly';
cfg.GenerateMakefile = true;
cfg.MultiInstanceCode = false;
cfg.PreserveArrayDimensions = true;
cfg.Verbose = true;
cfg.TargetLang = 'C++';
cfg.DataTypeReplacement = 'CBuiltIn'; % optional
cfg.MATLABSourceComments = true;      % optional
cfg.DynamicMemoryAllocation = 'AllVariableSizeArrays';

% Prepare the model
addpath(fullfile(pwd, 'M'));

% Generate Code for functions
codegen('count_and_invert_booleans', "-config", cfg, "-args", {coder.typeof(true, [Inf, Inf]), coder.typeof(double(0), [Inf,Inf])}, "-d", cppDir);

% TE1401 and TwinCAT Module Generator Configuration
TwinCAT.ModuleGenerator.Settings.Change('ConfigurationLevel', 'Advanced');
exportConfig = TwinCAT.ModuleGenerator.ProjectExportConfig('FullPath', fullfile(buildDir, driverName));

% Add module configurations for both MATLAB functions
exportConfig.AddClassExportConfig(TwinCAT.ModuleGenerator.Matlab.FunctionExportConfig('MFile', Namemod1, 'BuildDir', cppDir));


% Adapt export configurations (common for both)
exportConfig.Project.PublishTcRTx86 = true; % build x86 driver
exportConfig.Project.PublishTcRTx64 = true; % build x64 driver
exportConfig.Project.PublishTcOSx64 = true; % build TwinCAT/BSD x64 driver
exportConfig.Project.GeneratePlcLibrary = true;  % generate a PLC Lib true/false
exportConfig.Project.InstallPlcLibrary  = true;  % install the PLC lib on local system true/false
exportConfig.Project.PublishConfiguration = "Debug";

exportConfig.ClassExportCfg{1}.TcCom.Generate = true; % for each module in driver: generate TMC file
exportConfig.ClassExportCfg{1}.PlcFb.Generate = true; % and/or FunctionBlock


% Display configurations

disp(exportConfig.Project);


% Generate Code for TwinCAT
projExporter = TwinCAT.ModuleGenerator.ProjectExporter(exportConfig);
