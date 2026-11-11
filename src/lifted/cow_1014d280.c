/* f_0x1014d280 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014d280 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014d280(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar2;
    CowU32 piVar3;
    int iVar4;
    _Bool bVar1;
      
      bVar1 = 0;
      if (((int32_t)(0) < (int32_t)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x2ca1c))))) {
        iVar4 = 0;
        piVar3 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x2ca24);
        do {
          if (rd32((uint32_t)piVar3) == 0) {
            cVar2 = cow_bridge_100f7da0(g, COW_IMG(COW_ADDR_LIFT_1014D2B6), 3u, (const CowU32[]){ 1, iVar4, 0xffffffff }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 12u);
            if (cVar2 != '\0') {
              wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x5d), 1);
              wr32((uint32_t)(param_1 + 0x18), iVar4);
              wr32((uint32_t)(param_1 + 0x1c), 300);
              wr32((uint32_t)(param_1 + 0x14), 4);
            }
            bVar1 = 1;
            if (cVar2 != '\0') {
              return;
            }
            break;
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 0x12;
        } while (iVar4 < 8);
      }
      wr32((uint32_t)(param_1 + 0x1c), 0xffffffff);
      wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x5d), 0);
      wr32((uint32_t)(param_1 + 0x18), 0xffffffff);
      if (bVar1) {
        wr32((uint32_t)(param_1 + 0x14), 0x13);
        return;
      }
      wr32((uint32_t)(param_1 + 0x14), 5);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014d280(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x1014d280: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014d285: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1014d286: push edi */
    g->edi = g->ecx;   /* 0x1014d287: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x2CA1Cu); g->edx = (uint32_t)(rd32(A)); }   /* 0x1014d289: register edx, replayed as the entry ran it */
    { uint8_t a = (uint8_t)g->ecx; uint8_t b = (uint8_t)(uint8_t)g->ecx; uint8_t r = (uint8_t)(a ^ b); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x1014d28f: register ecx, replayed as the entry ran it */
    cow_lift_1014d280(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
