/* f_0x100f8400 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f8400 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f8400(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU8 uVar3;
    uVar3 = 0;
      if ((int8_t)rd8((uint32_t)(param_2 + 0xc)) == '\x01') {
        iVar1 = (int)(int8_t)rd8((uint32_t)(param_2 + 0xf));
        if ((int8_t)rd8((uint32_t)(param_2 + 0xe)) == -1) {
          if (iVar1 == -1) goto L_100f8458;
          wr32((uint32_t)(param_1 + 0x2ca18), iVar1);
          uVar2 = rd32((uint32_t)(param_1 + 0x2c7d0)) | 0x1000000;
        }
        else {
          if (iVar1 != -1) goto L_100f8458;
          wr32((uint32_t)(param_1 + 0x2ca1c), (int)(int8_t)rd8((uint32_t)(param_2 + 0xe)));
          uVar2 = rd32((uint32_t)(param_1 + 0x2c7d0)) | 0x2000000;
        }
        wr32((uint32_t)(param_1 + 0x2c7d0), uVar2);
        uVar3 = 1;
      }
    L_100f8458:
      cow_bridge_100f8240(g, COW_IMG(COW_ADDR_LIFT_100F8469), 3u, (const CowU32[]){ param_1, rd8((uint32_t)(param_2 + 4)), (int)(int8_t)rd8((uint32_t)(param_2 + 0xc)) }, g->ecx, g->edx, g->eax, 12u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar3) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f8400(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->edx = param_2;   /* 0x100f8400: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100f8404: push ebx */
    { uint8_t a = (uint8_t)g->ebx; uint8_t b = (uint8_t)(uint8_t)g->ebx; uint8_t r = (uint8_t)(a ^ b); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x100f8405: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f8407: push esi */
    { uint32_t A = (uint32_t)(g->edx + 0xCu); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100f8408: register eax, replayed as the entry ran it */
    cow_lift_100f8400(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
