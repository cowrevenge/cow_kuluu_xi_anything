/* f_0x102406d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102406d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102406d0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669078)) + 0x14), 2);
      cow_bridge_1023ffd0(g, COW_IMG(COW_ADDR_LIFT_102406E9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
      cow_bridge_1023dbb0(g, COW_IMG(COW_ADDR_LIFT_102406EE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669050)) + 0x1c), 0);
      if (rd32(COW_IMG(COW_ADDR_LIFT_10669054)) == 1) {
        g->eax = (CowU32)(0); return;
      }
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1024071A), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103886D4), 1, 0 }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1024072C), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103886C0), 1, 0 }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
      iVar3 = 0;
      do {
        iVar1 = cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_10240734), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 4u);
        if (iVar1 < 0) goto L_10240803;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 10);
      cow_bridge_1023e510(g, COW_IMG(COW_ADDR_LIFT_1024074A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
      iVar3 = cow_bridge_1023e4c0(g, COW_IMG(COW_ADDR_LIFT_1024074F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
      while (-1 < iVar3) {
        iVar3 = cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_1024076B), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_10669050)) + 0x1c }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 4u);
        if (iVar3 < 0) goto L_10240803;
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669050)) + 0x18)) != 4) {
          iVar3 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669050)) + 0x18));
          if ((rd32(COW_IMG(COW_ADDR_LIFT_10456AA4)) == 0) && (iVar3 == 1)) {
            cow_bridge_10037a70(g, COW_IMG(COW_ADDR_LIFT_10240846), 1u, (const CowU32[]){ 30u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 4u);
          }
          cow_bridge_1023e570(g, COW_IMG(COW_ADDR_LIFT_10240808), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_102407C9), 1u, (const CowU32[]){ 272139948u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10240817), 1u, (const CowU32[]){ 272139968u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
          g->eax = (CowU32)(iVar3); return;
        }
        wr8((uint32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669050)) + 8)) + 0x5d), 1);
        cow_bridge_1019d8b0(g, COW_IMG(COW_ADDR_LIFT_10240796), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_10662784)), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_102407A8), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103886AC), 1, 0 }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
        cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_102407B7), 1u, (const CowU32[]){ (int)rd32(COW_IMG(COW_ADDR_LIFT_10662784)) + 0x20 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 4u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10240826), 1u, (const CowU32[]){ 272139988u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669050)) + 0x1c), 0);
        wr8((uint32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669050)) + 8)) + 0x5d), 0);
        cow_bridge_1023ffd0(g, COW_IMG(COW_ADDR_LIFT_102407E8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
        iVar3 = cow_bridge_1023e4c0(g, COW_IMG(COW_ADDR_LIFT_102407ED), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
      }
      uVar2 = cow_bridge_1023e4c0(g, COW_IMG(COW_ADDR_LIFT_102407FA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
      cow_bridge_1023e4a0(g, COW_IMG(COW_ADDR_LIFT_10240800), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 4u);
    L_10240803:
      cow_bridge_1023e570(g, COW_IMG(COW_ADDR_LIFT_1024084E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1024085D), 1u, (const CowU32[]){ 272139968u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1024086C), 1u, (const CowU32[]){ 272139988u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10669078)), 0u);
      g->eax = (CowU32)(-2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102406d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10669078));   /* 0x102406d0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102406d5: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102406d6: push esi */
    cow_lift_102406d0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
