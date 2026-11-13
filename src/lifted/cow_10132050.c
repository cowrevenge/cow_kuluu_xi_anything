/* f_0x10132050 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10132050 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10132050(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    CowU8 bVar3;
    CowU16 uVar4;
    int iVar5;
    if ((param_1 != 0) && ((int32_t)rd32((uint32_t)(param_1 + 0x14d4)) != 0)) {
        iVar5 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_10132079), 0u, (const CowU32[]){ 0u }, 273143296u, g->edx, g->eax, 0u);
        bVar3 = rd32(COW_IMG(COW_ADDR_LIFT_10485640));
        if ((iVar5 != 0) && (((rd32(COW_IMG(COW_ADDR_LIFT_10485824)) & 1) != 0 && ((int32_t)rd32((uint32_t)(iVar5 + 0x70)) != 0)))) {
          bVar1 = rd8((uint32_t)((int32_t)rd32((uint32_t)(iVar5 + 0x70)) + 0xef));
          bVar2 = cow_bridge_101cc5d0(g, COW_IMG(COW_ADDR_LIFT_101320AD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if ((rd16((uint32_t)(param_1 + 0x14d8)) != (CowU32)0x0) &&
             ((((rd32((uint32_t)(param_1 + 0x14dc)) != (CowU32)0x0 &&
                (rd16((uint32_t)(param_1 + 0x14d0)) != (CowU32)0x0)) &&
               (((CowU32)rd16((uint32_t)rd32((uint32_t)((param_1 + 0x14d8)))) & 1 << (bVar1 & 0x1f)) != 0)) &&
              (((rd32((uint32_t)rd32((uint32_t)((param_1 + 0x14dc)))) & 1 << (bVar3 & 0x1f)) != 0 &&
               (rd16((uint32_t)rd32((uint32_t)((param_1 + 0x14d0)))) <= (CowU16)bVar2)))))) {
            bVar3 = cow_bridge_101cc600(g, COW_IMG(COW_ADDR_LIFT_10132103), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if ((rd8((uint32_t)(param_1 + 0x14e0)) == (CowU32)0x0) ||
               (rd8((uint32_t)rd32((uint32_t)((param_1 + 0x14e0)))) <= bVar3)) {
              uVar4 = cow_bridge_100fd350(g, COW_IMG(COW_ADDR_LIFT_10132116), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              g->eax = (CowU32)((rd16((uint32_t)rd32((uint32_t)((param_1 + 0x14d4)))) & uVar4) == 0); return;
            }
          }
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10132050(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10132050: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10132051: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10132052: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10132053: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10132054: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10132050(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
