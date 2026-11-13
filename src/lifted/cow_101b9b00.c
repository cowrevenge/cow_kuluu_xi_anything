/* f_0x101b9b00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101b9b00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101b9b00(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 puVar4;
    CowU32 local_18[6];
    if (((int32_t)rd32((uint32_t)(param_1 + 0x114)) == 0) && ((int32_t)rd32((uint32_t)(param_1 + 0x110)) == 0)) {
        if ((int8_t)rd8((uint32_t)(param_1 + 0x11c)) != '\0') {
          uVar3 = rd32((uint32_t)(param_1 + 0x10c));
          puVar4 = rd32((uint32_t)(param_1 + 0x108));
          for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            wr32((uint32_t)puVar4, 0);
            puVar4 = puVar4 + 4u * (uint32_t)(1);
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            wr8((uint32_t)puVar4, 0);
            puVar4 = (CowU32)((int)puVar4 + 1);
          }
        }
        iVar1 = cow_bridge_101c4790(g, COW_IMG(COW_ADDR_LIFT_101B9B67), 5u, (const CowU32[]){ param_1 + 8, local_18, 0x18, 0, param_3 }, g->ecx, g->edx, g->eax, 0u);
        if ((-1 < iVar1) && (local_18[0] == rd32((uint32_t)(param_1 + 4)))) {
          iVar1 = cow_bridge_101c4790(g, COW_IMG(COW_ADDR_LIFT_101B9B99), 5u, (const CowU32[]){ param_1 + 8, rd32((uint32_t)(param_1 + 0x108)), rd32((uint32_t)(param_1 + 0x10c)), param_2 + 0x18, param_3 }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(-1 < iVar1); return;
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 24 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101b9b00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x18u;                      /* 0x101b9b00: 24 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101b9b03: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101b9b04: push esi */
    g->esi = g->ecx;   /* 0x101b9b05: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101b9b07: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x114u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101b9b08: register eax, replayed as the entry ran it */
    cow_lift_101b9b00(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
