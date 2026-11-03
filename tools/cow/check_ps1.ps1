param([Parameter(Mandatory = $true)][string[]]$Files)
$fail = 0
foreach ($f in $Files) {
    $tokens = $null; $errors = $null
    [System.Management.Automation.Language.Parser]::ParseFile($f, [ref]$tokens, [ref]$errors) | Out-Null
    if ($errors -and $errors.Count) {
        Write-Host "SYNTAX ERRORS in $f"
        $errors | ForEach-Object { Write-Host ('   ' + $_.ToString()) }
        $fail = 1
    }
    else {
        Write-Host "OK  $f"
    }
}
exit $fail
