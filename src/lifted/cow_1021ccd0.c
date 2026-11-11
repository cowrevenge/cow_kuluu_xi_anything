/* f_0x1021ccd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1021ccd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1021ccd0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if ((rd32(COW_IMG(COW_ADDR_LIFT_10666E24)) & 1) == 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_10666E24), rd32(COW_IMG(COW_ADDR_LIFT_10666E24)) | 1);
        cow_bridge_1021c010(g, COW_IMG(COW_ADDR_LIFT_1021CCF3), 0u, (const CowU32[]){ 0u }, 275143272u, g->edx, g->eax, 0u);
        cow_bridge_103134c6(g, COW_IMG(COW_ADDR_LIFT_1021CCFD), 1u, (const CowU32[]){ 270651920u }, g->ecx, g->edx, g->eax, 4u);
      }
      if ((rd32(COW_IMG(COW_ADDR_LIFT_10666E24)) & 2) == 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_10666E24), rd32(COW_IMG(COW_ADDR_LIFT_10666E24)) | 2);
        cow_bridge_1021c010(g, COW_IMG(COW_ADDR_LIFT_1021CD1E), 0u, (const CowU32[]){ 0u }, 275138216u, g->edx, g->eax, 0u);
        cow_bridge_103134c6(g, COW_IMG(COW_ADDR_LIFT_1021CD28), 1u, (const CowU32[]){ 270651904u }, g->ecx, g->edx, g->eax, 4u);
      }
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9896), 1);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9894), 10);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9898), 10);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c2), 2);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c0), 0x14);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c4), 0x14);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98ee), 3);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98ec), 0x1e);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98f0), 0x1e);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x991a), 4);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9918), 0x28);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x991c), 0x28);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9946), 5);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9944), 0x32);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9948), 0x32);
      if (rd32(COW_IMG(COW_ADDR_LIFT_10666E78)) == 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_10666E78), 1);
        cow_bridge_1021c070(g, COW_IMG(COW_ADDR_LIFT_1021CE1D), 3u, (const CowU32[]){ 0u, 0u, 0u }, 275143272u, g->edx, g->eax, 0u);
        cow_bridge_1021c070(g, COW_IMG(COW_ADDR_LIFT_1021CE2A), 3u, (const CowU32[]){ 1, 0, 0 }, 275138216u, g->edx, g->eax, 0u);
      }
      cow_bridge_1021c4c0(g, COW_IMG(COW_ADDR_LIFT_1021CE34), 0u, (const CowU32[]){ 0u }, 275143272u, g->edx, g->eax, 0u);
      cow_bridge_1021c4c0(g, COW_IMG(COW_ADDR_LIFT_1021CE3E), 0u, (const CowU32[]){ 0u }, 275138216u, g->edx, g->eax, 0u);
      wr32(COW_IMG(COW_ADDR_LIFT_10666E28), 1);
      if (1 < rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10665A74)) + 0x10665a80))) {
        do {
          cow_bridge_1021cb80(g, COW_IMG(COW_ADDR_LIFT_1021CE5E), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) }, 275143272u, g->edx, g->eax, 0u);
          wr32(COW_IMG(COW_ADDR_LIFT_10666E28), rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) + 1);
        } while (rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) < (int)(CowU32)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10665A74)) + 0x10665a80)));
      }
      cow_bridge_1021ca50(g, COW_IMG(COW_ADDR_LIFT_1021CE89), 2u, (const CowU32[]){ 3u, 2u }, 275143272u, g->edx, g->eax, 0u);
      wr32(COW_IMG(COW_ADDR_LIFT_10666E28), 1);
      if (1 < rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10665A74)) + 0x10665a80))) {
        do {
          cow_bridge_1021cb80(g, COW_IMG(COW_ADDR_LIFT_1021CEA9), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) }, 275143272u, g->edx, g->eax, 0u);
          wr32(COW_IMG(COW_ADDR_LIFT_10666E28), rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) + 1);
        } while (rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) < (int)(CowU32)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10665A74)) + 0x10665a80)));
      }
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9896), 1);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9894), 0);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9898), 0);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c2), 2);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c0), 0x14);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c4), 0x14);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98ee), 3);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98ec), 0);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98f0), 0);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x991a), 4);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9918), 0x28);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x991c), 0x28);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9946), 5);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9944), 0x32);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9948), 0x32);
      cow_bridge_1021c4c0(g, COW_IMG(COW_ADDR_LIFT_1021CF8D), 0u, (const CowU32[]){ 0u }, 275143272u, g->edx, 50u, 0u);
      cow_bridge_1021c4c0(g, COW_IMG(COW_ADDR_LIFT_1021CF97), 0u, (const CowU32[]){ 0u }, 275138216u, g->edx, g->eax, 0u);
      wr32(COW_IMG(COW_ADDR_LIFT_10666E28), 1);
      if (1 < rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10665A74)) + 0x10665a80))) {
        do {
          cow_bridge_1021cb80(g, COW_IMG(COW_ADDR_LIFT_1021CFB7), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) }, 275143272u, g->edx, g->eax, 0u);
          wr32(COW_IMG(COW_ADDR_LIFT_10666E28), rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) + 1);
        } while (rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) < (int)(CowU32)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10665A74)) + 0x10665a80)));
      }
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9896), 1);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9894), 10);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9898), 10);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c2), 2);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c0), 0x14);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c4), 0x14);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98ee), 3);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98ec), 0);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98f0), 0);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x991a), 4);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9918), 0x28);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x991c), 0x28);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9946), 5);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9944), 0);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9948), 0);
      cow_bridge_1021c4c0(g, COW_IMG(COW_ADDR_LIFT_1021D09C), 0u, (const CowU32[]){ 0u }, 275143272u, g->edx, g->eax, 0u);
      cow_bridge_1021c4c0(g, COW_IMG(COW_ADDR_LIFT_1021D0A6), 0u, (const CowU32[]){ 0u }, 275138216u, g->edx, g->eax, 0u);
      wr32(COW_IMG(COW_ADDR_LIFT_10666E28), 1);
      if (1 < rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10665A74)) + 0x10665a80))) {
        do {
          cow_bridge_1021cb80(g, COW_IMG(COW_ADDR_LIFT_1021D0C6), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) }, 275143272u, g->edx, g->eax, 0u);
          wr32(COW_IMG(COW_ADDR_LIFT_10666E28), rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) + 1);
        } while (rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) < (int)(CowU32)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10665A74)) + 0x10665a80)));
      }
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9896), 1);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9894), 10);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9898), 10);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c2), 2);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c0), 0x14);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98c4), 0x14);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98ee), 3);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98ec), 0x21);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x98f0), 0x21);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x991a), 4);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9918), 0x28);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x991c), 0x28);
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9946), 5);
      wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9944), 0);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9948), 0);
      cow_bridge_1021c4c0(g, COW_IMG(COW_ADDR_LIFT_1021D1B0), 0u, (const CowU32[]){ 0u }, 275143272u, g->edx, g->eax, 0u);
      cow_bridge_1021c4c0(g, COW_IMG(COW_ADDR_LIFT_1021D1BA), 0u, (const CowU32[]){ 0u }, 275138216u, g->edx, g->eax, 0u);
      wr32(COW_IMG(COW_ADDR_LIFT_10666E28), 1);
      if (1 < rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10665A74)) + 0x10665a80))) {
        do {
          cow_bridge_1021cb80(g, COW_IMG(COW_ADDR_LIFT_1021D1DD), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) }, 275143272u, g->edx, g->eax, 0u);
          wr32(COW_IMG(COW_ADDR_LIFT_10666E28), rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) + 1);
        } while (rd32(COW_IMG(COW_ADDR_LIFT_10666E28)) < (int)(CowU32)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10665A74)) + 0x10665a80)));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1021ccd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_10666E24) + RD); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1021ccd0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1021ccd5: push ebx */
    g->ebx = 1u;   /* 0x1021ccd6: the value the entry loaded and the decompiler dropped */
    cow_lift_1021ccd0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
