--TEST--
Check for command hook
--SKIPIF--
<?php 
if (!extension_loaded("openrasp")) print "skip";
?>
--FILE--
<?php
shell_exec('cd');
echo 'shell_exec OK';
?>
--EXPECT--