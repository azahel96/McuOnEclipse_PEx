%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SendBytes)
%;**     Description :
%;**         Sends multiple bytes
%include Common\GeneralParameters.inc(27)
%;**       * data%Pardata %>27 - Array of bytes to add to output stream.
%;**         count%Parcount %>27 - Number of bytes to add to output
%;** %>29 stream. (Valid range 0 - 31)
%;**     Returns     :
%;**         ---%RetVal %>27 - error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine