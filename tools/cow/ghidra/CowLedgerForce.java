// CowLedgerForce.java - make Ghidra account for EVERY ledger entry, and report where it won't.
//
// The headless auto-analysis produced 14,177 functions; ledger/functions.csv has 19,190 rows. Counting
// that gap proves nothing - the two numbers answer different questions, and the only way to know whether
// the ledger is wrong, Ghidra is wrong, or both are right about different things is to put a function
// start at every ledger address and record what Ghidra does with each one. So for each row:
//
//   already                    there is a function with that entry point already - nothing to do
//   created                    no function there, and none claimed the address: Ghidra took it
//   created_after_disassemble  the bytes were not yet in the listing; disassembled, then taken
//   inside_other_taken         another function already contains the address, but a function was
//                              created there anyway - so Ghidra's original extent was wrong, and the
//                              record carries the container it had swallowed the address into
//   inside_other_refused       another function contains it and Ghidra would not give it up
//   refused                    createFunction threw, for a reason kept verbatim in "error"
//
// "container_*" is what step 2 asks for: which function had eaten the address.
// "final_*" is Ghidra's own chosen extent for the function it made, so it can be compared against the
// ledger's end - the ledger's end is the recompiler's claim, and this is the second opinion.
//
// Run as a -postScript BEFORE CowLiftDump.java, in the same headless pass, so the forced functions are
// in the program when the decompile pass walks it:
//
//   -postScript CowLedgerForce.java <ledger.csv> <report.jsonl> -postScript CowLiftDump.java <out.jsonl>

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.List;

public class CowLedgerForce extends GhidraScript {

    private static String esc(String s) {
        if (s == null) return "";
        StringBuilder b = new StringBuilder(s.length() + 16);
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            switch (c) {
                case '"':  b.append("\\\""); break;
                case '\\': b.append("\\\\"); break;
                case '\n': b.append("\\n");  break;
                case '\r': b.append("\\r");  break;
                case '\t': b.append("\\t");  break;
                default:
                    if (c < 0x20) b.append(String.format("\\u%04x", (int) c));
                    else b.append(c);
            }
        }
        return b.toString();
    }

    private static String hex(Address a) {
        return a == null ? null : "0x" + Long.toString(a.getUnsignedOffset() & 0xFFFFFFFFL, 16);
    }

    /** One CSV record, quote-aware: ledger/functions.csv has a comma-bearing oracle_refs field inside
     *  quotes, so splitting on ',' alone would shift every column after it. */
    private static List<String> csvFields(String line) {
        List<String> out = new ArrayList<String>();
        StringBuilder cur = new StringBuilder();
        boolean q = false;
        for (int i = 0; i < line.length(); i++) {
            char c = line.charAt(i);
            if (q) {
                if (c == '"') {
                    if (i + 1 < line.length() && line.charAt(i + 1) == '"') { cur.append('"'); i++; }
                    else q = false;
                } else cur.append(c);
            } else {
                if (c == '"') q = true;
                else if (c == ',') { out.add(cur.toString()); cur.setLength(0); }
                else cur.append(c);
            }
        }
        out.add(cur.toString());
        return out;
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) throw new Exception("usage: CowLedgerForce.java <ledger.csv> <report.jsonl>");
        String ledgerPath = args[0], outPath = args[1];

        FunctionManager fm = currentProgram.getFunctionManager();
        int already = 0, created = 0, createdDis = 0, insideTaken = 0, insideRefused = 0, refused = 0;
        int rows = 0, badrow = 0;

        try (BufferedReader br = new BufferedReader(new FileReader(ledgerPath));
             BufferedWriter w = new BufferedWriter(new FileWriter(outPath), 1 << 20)) {

            String line = br.readLine();               // the header row
            if (line == null) throw new Exception("empty ledger");
            List<String> hdr = csvFields(line);
            int iEntry = hdr.indexOf("entry"), iEnd = hdr.indexOf("end");
            int iThunk = hdr.indexOf("thunk"), iStatus = hdr.indexOf("status"), iName = hdr.indexOf("name");
            if (iEntry < 0 || iEnd < 0) throw new Exception("ledger has no entry/end columns");

            while ((line = br.readLine()) != null) {
                if (line.trim().isEmpty()) continue;
                List<String> f = csvFields(line);
                if (f.size() <= iEnd) { badrow++; continue; }
                String a = f.get(iEntry).trim().toLowerCase();
                if (!a.startsWith("0x")) { badrow++; continue; }
                rows++;

                Address addr;
                try { addr = toAddr(a); } catch (Exception e) { badrow++; continue; }
                String ledgerEnd = f.get(iEnd).trim().toLowerCase();
                String status = iStatus >= 0 ? f.get(iStatus) : "";
                String lname = iName >= 0 ? f.get(iName) : "";
                String thunk = iThunk >= 0 ? f.get(iThunk) : "";

                Function existing = fm.getFunctionAt(addr);
                Function container = existing == null ? fm.getFunctionContaining(addr) : null;
                String action, error = "";
                Function made = null;

                if (existing != null) {
                    action = "already";
                    already++;
                } else {
                    boolean hadContainer = container != null;
                    if (currentProgram.getListing().getInstructionAt(addr) == null) {
                        try { disassemble(addr); } catch (Exception e) { /* createFunction may still work */ }
                    }
                    try {
                        made = createFunction(addr, null);
                        if (made == null) {
                            // No exception and nothing made: Ghidra could not establish a body here.
                            action = hadContainer ? "inside_other_refused" : "refused";
                            error = "createFunction returned null";
                            if (hadContainer) insideRefused++; else refused++;
                        } else if (hadContainer) {
                            action = "inside_other_taken";
                            insideTaken++;
                        } else {
                            action = (container == null
                                    && currentProgram.getListing().getInstructionAt(addr) != null)
                                    ? "created" : "created_after_disassemble";
                            if ("created".equals(action)) created++; else createdDis++;
                        }
                    } catch (Exception e) {
                        action = hadContainer ? "inside_other_refused" : "refused";
                        error = e.getClass().getSimpleName() + ": " + e.getMessage();
                        if (hadContainer) insideRefused++; else refused++;
                        if (made == null) made = fm.getFunctionAt(addr);   // may exist despite the throw
                    }
                }

                AddressSetView fb = made != null ? made.getBody() : null;
                StringBuilder j = new StringBuilder(512);
                j.append('{');
                j.append("\"addr\":\"").append(hex(addr)).append('"').append(',');
                j.append("\"ledger_end\":\"").append(esc(ledgerEnd)).append('"').append(',');
                j.append("\"ledger_status\":\"").append(esc(status)).append('"').append(',');
                j.append("\"ledger_name\":\"").append(esc(lname)).append('"').append(',');
                j.append("\"ledger_thunk\":\"").append(esc(thunk)).append('"').append(',');
                j.append("\"action\":\"").append(action).append('"').append(',');
                j.append("\"container\":\"").append(container == null ? "" : hex(container.getEntryPoint())).append('"').append(',');
                j.append("\"container_name\":\"").append(container == null ? "" : esc(container.getName())).append('"').append(',');
                j.append("\"container_body_min\":\"").append(container == null ? "" : hex(container.getBody().getMinAddress())).append('"').append(',');
                j.append("\"container_body_max\":\"").append(container == null ? "" : hex(container.getBody().getMaxAddress())).append('"').append(',');
                j.append("\"final_body_min\":\"").append(fb == null ? "" : hex(fb.getMinAddress())).append('"').append(',');
                j.append("\"final_body_max\":\"").append(fb == null ? "" : hex(fb.getMaxAddress())).append('"').append(',');
                j.append("\"final_body_count\":").append(fb == null ? 0 : fb.getNumAddresses()).append(',');
                j.append("\"error\":\"").append(esc(error)).append('"');
                j.append('}');
                w.write(j.toString());
                w.newLine();

                if (rows % 2000 == 0) {
                    println("CowLedgerForce: " + rows + " rows - " + already + " already, " + created
                            + "+" + createdDis + " created, " + insideTaken + " taken from a container, "
                            + insideRefused + " refused inside, " + refused + " refused");
                }
            }
        }

        println("CowLedgerForce DONE: " + rows + " ledger rows (" + badrow + " unparseable) -> " + outPath
                + " | already=" + already + " created=" + created + " created_after_disassemble="
                + createdDis + " inside_other_taken=" + insideTaken + " inside_other_refused="
                + insideRefused + " refused=" + refused
                + " | total functions now " + fm.getFunctionCount());
    }
}
