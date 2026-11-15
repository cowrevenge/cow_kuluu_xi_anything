/* f_0x1024a2c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1024a2c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1024a2c0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    iVar3 = 0;
      iVar2 = 0;
      uVar1 = rd32(COW_IMG(COW_ADDR_LIFT_106690C8));
      do {
        if (((((int32_t)rd32((uint32_t)(uVar1 + 0xc0)) != 0) && ((int32_t)rd32((uint32_t)(uVar1 + 0x48)) != 0)) &&
            ((int32_t)rd32((uint32_t)(uVar1 + 0xd0)) == 0)) &&
           ((((int32_t)((int32_t)rd32((uint32_t)(uVar1 + 0xcc))) <= (int32_t)(param_1)) && (((int32_t)(iVar3) <= (int32_t)((int32_t)rd32((uint32_t)(uVar1 + 0xd4)))))))) {
          iVar2 = (int32_t)rd32((uint32_t)(uVar1 + 0xc0));
          iVar3 = (int32_t)rd32((uint32_t)(uVar1 + 0xd4));
        }
        uVar1 = uVar1 + 0xf4;
      } while (uVar1 < rd32(COW_IMG(COW_ADDR_LIFT_106690C8)) + 0x1310);
      if (iVar2 == 0) {
        g->eax = (CowU32)(0); return;
      }
      uVar1 = rd32(COW_IMG(COW_ADDR_LIFT_106690C8));
      while( 1 ) {
        if ((((int32_t)rd32((uint32_t)(uVar1 + 0xc0)) != 0) && ((int32_t)rd32((uint32_t)(uVar1 + 0x48)) != 0)) &&
           ((int32_t)rd32((uint32_t)(uVar1 + 0xc0)) == iVar2)) break;
        uVar1 = uVar1 + 0xf4;
        if (rd32(COW_IMG(COW_ADDR_LIFT_106690C8)) + 0x1310 <= uVar1) {
    L_1024a347:
          iVar3 = 0;
          if (uVar1 != rd32(COW_IMG(COW_ADDR_LIFT_106690C8)) + 0x1310) {
            iVar3 = iVar2;
          }
          g->eax = (CowU32)(iVar3); return;
        }
      }
      wr32((uint32_t)(uVar1 + 0x48), 0);
      wr32((uint32_t)(uVar1 + 0x6c), 0);
      wr32((uint32_t)(uVar1 + 0x70), 0);
      goto L_1024a347;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1024a2c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_106690C8));   /* 0x1024a2c0: the value the entry loaded and the decompiler dropped */
    g->eax = param_1;   /* 0x1024a2c6: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1024a2ca: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1024a2cb: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1024a2cc: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1024a2cd: push edi */
    g->edi = 0u;   /* 0x1024a2ce: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1024a2d0: the value the entry loaded and the decompiler dropped */
    cow_lift_1024a2c0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
