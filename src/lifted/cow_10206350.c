/* f_0x10206350 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10206350 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10206350(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    char cVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 pcVar5;
    CowU8 auStack_80[128];
    iVar4 = -1;
      pcVar1 = (CowU32)(param_1 + 0x14);
      pcVar5 = pcVar1;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar2 = rd8((uint32_t)pcVar5);
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if ((iVar4 != -2) && (rd8((uint32_t)(param_1 + 0x24)) == '\0')) {
        if (rd32(COW_IMG(COW_ADDR_LIFT_106643A7)) == '\0') {
          uVar3 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_10206385), 2u, (const CowU32[]){ 10u, 0u }, g->ecx, g->edx, 0u, 8u);
        }
        else {
          uVar3 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_10206399), 2u, (const CowU32[]){ 10u, 1u }, g->ecx, g->edx, 0u, 8u);
        }
        cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_102063A7), 2u, (const CowU32[]){ auStack_80, uVar3 }, g->ecx, g->edx, 0u, 0u);
        cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_102063BC), 2u, (const CowU32[]){ auStack_80, 1 }, g->ecx, g->edx, 0u, 0u);
        wr8((uint32_t)(param_1 + 0x24), 1);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 128 locals, pops [-], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10206350(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x80u;                      /* 0x10206350: 128 bytes of locals */
    g->eax = 0u;   /* 0x10206356: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10206358: push esi */
    g->esi = g->ecx;   /* 0x10206359: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1020635b: push edi */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->ecx = (uint32_t)(r); }   /* 0x1020635c: register ecx, replayed as the entry ran it */
    { g->edx = (uint32_t)((uint32_t)(g->esi + 0x14u)); }   /* 0x1020635f: register edx, replayed as the entry ran it */
    g->edi = g->edx;   /* 0x10206362: the value the entry loaded and the decompiler dropped */
    cow_lift_10206350(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
