/* f_0x10222c90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10222c90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10222c90(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    CowU8 bVar4;
    CowU32 uVar5;
    int iVar6;
    iVar2 = cow_bridge_10222c10(g, COW_IMG(COW_ADDR_LIFT_10222C9E), 1u, (const CowU32[]){ g->eax }, g->ecx, g->edx, param_1, 4u);
      iVar3 = cow_bridge_10225120(g, COW_IMG(COW_ADDR_LIFT_10222CB2), 3u, (const CowU32[]){ iVar2, 0, 0 }, COW_IMG(COW_ADDR_LIFT_10666EC0), g->edx, param_1, 0u);
      wr32((uint32_t)param_2, 0xffffffff);
      if (iVar3 < 0) {
        g->eax = (CowU32)(iVar3); return;
      }
      if ((rd32(COW_IMG(COW_ADDR_LIFT_10485824)) & 1) == 0) {
        g->eax = (CowU32)(iVar3); return;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_1066714C)) == 0) {
        g->eax = (CowU32)(iVar3); return;
      }
      iVar6 = 0;
      cVar1 = (int8_t)rd8((uint32_t)(iVar2 * 0x30 + 2 + rd32(COW_IMG(COW_ADDR_LIFT_1066714C))));
      if (cVar1 != '\t') {
        if (cVar1 == '\x0f') {
          if (rd32(COW_IMG(COW_ADDR_LIFT_10485640)) == '\x14') {
            uVar5 = 0xf0;
            iVar6 = (int)(rd32(COW_IMG(COW_ADDR_LIFT_10485641)) - 10) / 0x14 + 1;
          }
          else {
            if (rd32(COW_IMG(COW_ADDR_LIFT_10485642)) == '\x14') {
              iVar6 = (int)(rd32(COW_IMG(COW_ADDR_LIFT_10485643)) - 10) / 0x14 + 1;
            }
            uVar5 = 0xf0;
          }
          goto L_10222dc5;
        }
        if (cVar1 != '\x12') {
          g->eax = (CowU32)(iVar3); return;
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_10485640)) == '\t') {
          bVar4 = rd32(COW_IMG(COW_ADDR_LIFT_10485641));
    L_10222d20:
          iVar6 = (-(CowU32)(bVar4 < 0x19) & 0xfffffffd) + 3;
        }
        else if (rd32(COW_IMG(COW_ADDR_LIFT_10485642)) == '\x14') {
          bVar4 = rd32(COW_IMG(COW_ADDR_LIFT_10485643));
          goto L_10222d20;
        }
        uVar5 = 0x5a;
        goto L_10222dc5;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_10485640)) == '\x11') {
        bVar4 = rd32(COW_IMG(COW_ADDR_LIFT_10485641));
    L_10222db5:
        iVar6 = (-(CowU32)(bVar4 < 0x28) & 0xfffffffe) + 2;
      }
      else if (rd32(COW_IMG(COW_ADDR_LIFT_10485642)) == '\x11') {
        bVar4 = rd32(COW_IMG(COW_ADDR_LIFT_10485643));
        goto L_10222db5;
      }
      uVar5 = 0x78;
    L_10222dc5:
      iVar3 = cow_bridge_10225120(g, COW_IMG(COW_ADDR_LIFT_10222DD2), 3u, (const CowU32[]){ iVar2, iVar6, uVar5 }, COW_IMG(COW_ADDR_LIFT_10666EC0), g->edx, param_1, 0u);
      uVar5 = cow_bridge_10225220(g, COW_IMG(COW_ADDR_LIFT_10222DE1), 3u, (const CowU32[]){ iVar2, iVar6, uVar5 }, COW_IMG(COW_ADDR_LIFT_10666EC0), g->edx, param_1, 0u);
      wr32((uint32_t)param_2, uVar5);
      g->eax = (CowU32)(iVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10222c90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_1;   /* 0x10222c90: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10222c94: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10222c95: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10222c96: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10222c97: push edi */
    cow_lift_10222c90(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
