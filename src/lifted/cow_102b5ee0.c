/* f_0x102b5ee0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b5ee0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b5ee0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    int iVar5;
    CowU32 piVar6;
    int iVar7;
    CowU8 local_30[12];
    CowU8 local_24[12];
    CowU8 local_18[12];
    CowU8 local_c[12];
    iVar2 = param_1;
      if (((int32_t)rd32((uint32_t)(param_1 + 0x34)) == 0) || ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x34)) + 0x14)) == 0)) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B5FE6), 3u, (const CowU32[]){ 272316316u, 272375924u, 173u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102B5FF5), 2u, (const CowU32[]){ 272362148u, 272362184u }, g->ecx, g->edx, g->eax, 20u);
      }
      else {
        iVar4 = (int32_t)rd32((uint32_t)(param_1 + 0x4c));
        if (iVar4 != 0) {
          iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x44));
          if ((int32_t)rd32((uint32_t)(param_1 + 0x50)) == 0) {
            uVar3 = cow_bridge_10275d60(g, COW_IMG(COW_ADDR_LIFT_102B5F2C), 4u, (const CowU32[]){ iVar1, 0xc, COW_IMG(COW_ADDR_LIFT_103C2074), 0xb4 }, g->ecx, g->edx, g->eax, 16u);
            wr32((uint32_t)(param_1 + 0x50), uVar3);
          }
          if ((int32_t)rd32((uint32_t)(param_1 + 0x34)) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x34)) + 0x54));
          }
          if (iVar1 != 0) {
            iVar5 = 0;
            piVar6 = (CowU32)(iVar4 + 8);
            param_1 = iVar1;
            do {
              cow_bridge_10274670(g, COW_IMG(COW_ADDR_LIFT_102B5F69), 2u, (const CowU32[]){ local_30, iVar7 + rd32((uint32_t)(piVar6 + 4u * (uint32_t)(-2))) * 0xc }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10274670(g, COW_IMG(COW_ADDR_LIFT_102B5F7D), 2u, (const CowU32[]){ local_24, iVar7 + rd32((uint32_t)(piVar6 + 4u * (uint32_t)(-1))) * 0xc }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10274670(g, COW_IMG(COW_ADDR_LIFT_102B5F90), 2u, (const CowU32[]){ local_18, iVar7 + rd32((uint32_t)piVar6) * 0xc }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10274670(g, COW_IMG(COW_ADDR_LIFT_102B5FA4), 2u, (const CowU32[]){ local_c, iVar7 + rd32((uint32_t)(piVar6 + 4u * (uint32_t)(1))) * 0xc }, g->ecx, g->edx, g->eax, 0u);
              iVar4 = (int32_t)rd32((uint32_t)(iVar2 + 0x50)) + iVar5;
              iVar5 = iVar5 + 0xc;
              cow_bridge_102b42e0(g, COW_IMG(COW_ADDR_LIFT_102B5FB9), 3u, (const CowU32[]){ iVar4, local_30, 4 }, g->ecx, g->edx, g->eax, 0u);
              piVar6 = piVar6 + 4u * (uint32_t)(4);
              param_1 = param_1 + -1;
            } while (param_1 != 0);
            return;
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 48 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102b5ee0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x30u;                      /* 0x102b5ee0: 48 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102b5ee3: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102b5ee4: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x3Cu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102b5ee5: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b5ee9: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102b5eea: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x34u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102b5eeb: register eax, replayed as the entry ran it */
    cow_lift_102b5ee0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
