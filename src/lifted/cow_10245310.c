/* f_0x10245310 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10245310 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10245310(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    CowU32 puVar4;
    iVar3 = rd32(COW_IMG(COW_ADDR_LIFT_106690A0));
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690A0)) + 0x18), 0);
      wr32((uint32_t)(iVar3 + 0x14), 0);
      puVar4 = (CowU32)(iVar3 + 0x1c);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        wr32((uint32_t)puVar4, 1);
        puVar4 = puVar4 + 4u * (uint32_t)(1);
      }
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690A0)) + 0x20), 1);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690A0)) + 0x14), rd32(COW_IMG(COW_ADDR_LIFT_106690AC)));
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669078)) + 0x14), 2);
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10669078)) + 0x2c), (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690A0)) + 0x14)) + 7);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1024537C), 3u, (const CowU32[]){ 272139248u, 1u, g->ebx }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 0u);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_1024538E), 3u, (const CowU32[]){ 272139988u, 1u, g->ebx }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 0u);
      iVar3 = 0;
      do {
        iVar2 = cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_10245396), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 4u);
        if (iVar2 < 0) goto L_1024542d;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 10);
      cow_bridge_1023e510(g, COW_IMG(COW_ADDR_LIFT_102453AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 0u);
      iVar3 = cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_102453BB), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_106690A0)) + 0x18 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 4u);
      do {
        if (iVar3 < 0) {
    L_1024542d:
          cow_bridge_1023e570(g, COW_IMG(COW_ADDR_LIFT_10245432), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 0u);
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10245441), 1u, (const CowU32[]){ 272139988u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 0u);
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_10245450), 1u, (const CowU32[]){ 272139248u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 0u);
          g->eax = (CowU32)(0xfffffffe); return;
        }
        iVar3 = cow_bridge_1023e4c0(g, COW_IMG(COW_ADDR_LIFT_102453CB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 0u);
        if (iVar3 < 0) {
          uVar1 = cow_bridge_1023e4c0(g, COW_IMG(COW_ADDR_LIFT_10245424), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 0u);
          cow_bridge_1023e4a0(g, COW_IMG(COW_ADDR_LIFT_1024542A), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 4u);
          goto L_1024542d;
        }
        if (((((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690A0)) + 0x14)) != 0) || (param_1 != 0)) || (rd32(COW_IMG(COW_ADDR_LIFT_106690A8)) == 0)) ||
           (iVar2 = cow_bridge_1023b550(g, COW_IMG(COW_ADDR_LIFT_102453F2), 5u, (const CowU32[]){ 1, 1, 0, 0, 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 20u), iVar3 = rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), -1 < iVar2)) {
          cow_bridge_1023e570(g, COW_IMG(COW_ADDR_LIFT_1024545E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 0u);
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1024546D), 1u, (const CowU32[]){ 272139988u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 0u);
          g->eax = (CowU32)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690A0)) + 0x14))); return;
        }
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690A0)) + 0x18), 0);
        wr8((uint32_t)((int32_t)rd32((uint32_t)(iVar3 + 8)) + 0x5d), 0);
        iVar3 = cow_bridge_1023e4d0(g, COW_IMG(COW_ADDR_LIFT_10245416), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_106690A0)) + 0x18 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106690A0)), 4u);
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10245310(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_106690A0));   /* 0x10245310: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10245315: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10245316: push esi */
    g->ebx = 0u;   /* 0x10245317: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10245319: push edi */
    cow_lift_10245310(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
