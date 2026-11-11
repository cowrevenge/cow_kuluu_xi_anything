/* f_0x1014e300 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014e300 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014e300(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    short local_8[4];
    iVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if ((((((int8_t)(-1) < (int8_t)(rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18))))) || ((iVar1 != 2 && (iVar1 != 3)))) && (1 < iVar1)) &&
         (((iVar1 < 4 && (rd32(COW_IMG(COW_ADDR_LIFT_1062193C)) != 0)) && (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1062193C)) + 8)) != 0)))) {
        local_8[0] = 0;
        local_8[1] = 0;
        local_8[2] = 0;
        local_8[3] = 0;
        cow_bridge_10118f70(g, COW_IMG(COW_ADDR_LIFT_1014E368), 1u, (const CowU32[]){ local_8 }, g->ecx, g->edx, g->eax, 0u);
        iVar1 = (int)local_8[2] - (int)local_8[0];
        if (0x200 < iVar1) {
          iVar1 = 0x200;
        }
        iVar2 = rd16((uint32_t)(param_1 + 0x34)) + 8;
        if (iVar1 < iVar2) {
          iVar1 = iVar2;
        }
        cow_bridge_1011a5a0(g, COW_IMG(COW_ADDR_LIFT_1014E3B6), 7u, (const CowU32[]){ (((uint32_t)((short)((CowU32)iVar1 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0x540))) & 0xffffu)), (((uint32_t)((short)((CowU32)iVar2 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0x542))) & 0xffffu)), iVar1, (((uint32_t)(local_8[0] >> 0xf) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0x546)) - rd16((uint32_t)(param_1 + 0x542))) & 0xffffu)), 1, 1, 0 }, g->ecx, g->edx, g->eax, 0u);
      }
      iVar1 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x88));
      if (iVar1 != 0) {
        wr32((uint32_t)(iVar1 + 0x10), rd32((uint32_t)(param_1 + 0x24)));
        wr32((uint32_t)(iVar1 + 0x14), (int)rd16((uint32_t)(param_1 + 0x32)));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 8 locals, pops [edi, esi], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014e300(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x8u;                      /* 0x1014e300: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014e303: push esi */
    g->esi = g->ecx;   /* 0x1014e304: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10456A28));   /* 0x1014e306: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1014e30c: push edi */
    g->edi = 0u;   /* 0x1014e30d: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + 0x18u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1014e30f: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1014e312: register eax, replayed as the entry ran it */
    cow_lift_1014e300(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
