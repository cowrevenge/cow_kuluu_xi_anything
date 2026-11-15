/* f_0x10157d60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10157d60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10157d60(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this;
    int iVar1;
    char cVar3;
    int iVar4;
    _Bool bVar2;
      
      iVar4 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_10157D6C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((iVar4 != 0) && (this = rd32((uint32_t)(iVar4 + 0x70)), this != (CowU32)0x0)) {
        iVar4 = 0;
        do {
          iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(iVar4)));
          if (iVar1 != 0) {
            if ((rd32((uint32_t)(iVar1 + 0x120)) >> 0xd & 1) == 0) {
              cVar3 = cow_bridge_1008e8d0(g, COW_IMG(COW_ADDR_LIFT_10157DA2), 1u, (const CowU32[]){ iVar1 }, this, g->edx, g->eax, 0u);
              if (cVar3 != '\0') goto L_10157daa;
              bVar2 = 0;
            }
            else {
    L_10157daa:
              bVar2 = 1;
            }
            iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(iVar4)));
            if (((((int32_t)rd32((uint32_t)((int)this + 0x78)) == (int32_t)rd32((uint32_t)(iVar1 + 0x188))) && (bVar2)) &&
                ((rd32((uint32_t)(iVar1 + 0x130)) >> 7 & 1) == 0)) &&
               ((((rd32((uint32_t)(iVar1 + 0x128)) >> 4 & 1) == 0 && ((int32_t)rd32((uint32_t)(iVar1 + 0x170)) != 2)) &&
                (((int32_t)rd32((uint32_t)(iVar1 + 0x170)) != 3 && (((CowU8)(rd32((uint32_t)(iVar1 + 0x120)) >> 9) & 1) == 1)))))
               ) {
              g->eax = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(iVar4)))); return;
            }
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x901);
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10157d60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10157d60: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10157d61: push edi */
    g->ecx = COW_IMG(COW_ADDR_LIFT_1047D600);   /* 0x10157d62: the value the entry loaded and the decompiler dropped */
    cow_lift_10157d60(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
