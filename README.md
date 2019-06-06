AutoTMTDyn is a Matlab based package to automate the derivation of TMT Equation of Motion (EOM) for hybrid rigid-continuum body dynamic systems with constraints and contacts, their linear modal analysis, and nonlinear controller design.

We have recently developed a Matlab software package, called "AutoTMTDyn" to derive TMT EOM of rigid-body mechanisms (Sadati et al. 2015). "AutoTMTDyn" (Available at https://github.com/hadisdt/AutoTMTDyn) was originally developed for deriving the TMT EOM of rigid-body systems and used for analyzing free-fall righting maneuvers of a robot cat (sadati et al. 2017), lumped system modeling of continuum appendage (sadati et al. 2017), and dynamic analysis of a spider web structure (sadati et al. 2018).

Here, we introduce a new version, now called "TMTDyn", which is equipped with:
- new High-Level-Language text-based interface,
- CAD-file import module,
- automatic formation of the system EOM for different modeling and control tasks,
- implementing Matlab C-mex functionality for improved performance,
- modules for static and linear modal analysis of a hybrid system.

In the Samples section, we employed the TMT method to derive EOM of continuum bodies based on discretized and reduced order solutions:
- a continuum appendage with braided pneumatic actuation chambers,
- a fabric sleeve worn on a rigid-link arm.

As a result, a unified software package is provided for deriving EOM, control design, and numerical simulation of hybrid rigid-continuum body systems.

Please see the Wiki page at https://github.com/hadisdt/TMTDyn/wiki for the package documentation.
