/* f_0x10024c50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10024c50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10024c50(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    CowU16 uVar4;
    CowU16 uVar5;
    CowU32 puVar6;
    CowU32 puVar7;
    int iVar8;
    CowU32 uVar9;
    CowU32 uVar10;
    CowU32 local_2c;
    int local_28;
    CowU8 local_24[12];
    CowU8 local_18[12];
    CowU8 local_c[12];
    uVar4 = rd16((uint32_t)(param_2 + 2u * (uint32_t)(1)));
      uVar5 = rd16((uint32_t)(param_2 + 2u * (uint32_t)(2)));
      iVar1 = param_3 + (rd16((uint32_t)param_2) & 0x7fff) * 0x3c;
      iVar2 = param_3 + (uVar4 & 0x7fff) * 0x3c;
      cow_bridge_10027120(g, COW_IMG(COW_ADDR_LIFT_10024CA8), 3u, (const CowU32[]){ local_24, iVar2 + 0xc, iVar1 + 0xc }, (g->eax + 12u), g->edx, g->eax, 0u);
      iVar3 = param_3 + (uVar5 & 0x7fff) * 0x3c;
      cow_bridge_10027120(g, COW_IMG(COW_ADDR_LIFT_10024CCB), 3u, (const CowU32[]){ local_18, iVar3 + 0xc, iVar1 + 0xc }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10027550(g, COW_IMG(COW_ADDR_LIFT_10024CDF), 3u, (const CowU32[]){ local_c, local_18, local_24 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10026f20(g, COW_IMG(COW_ADDR_LIFT_10024CF1), 2u, (const CowU32[]){ iVar1 + 0x30, local_c }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10026f20(g, COW_IMG(COW_ADDR_LIFT_10024D03), 2u, (const CowU32[]){ iVar2 + 0x30, local_c }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10026f20(g, COW_IMG(COW_ADDR_LIFT_10024D15), 2u, (const CowU32[]){ iVar3 + 0x30, local_c }, g->ecx, g->edx, g->eax, 0u);
      local_2c = param_2 + 2u * (uint32_t)(5);
      local_28 = 1;
      if (1 < (short)param_1) {
        param_1 = (short)param_1 + -1;
        uVar9 = uVar4 & 0x7fff;
        uVar10 = uVar5 & 0x7fff;
        do {
          uVar4 = rd16((uint32_t)local_2c);
          iVar1 = param_3 + uVar9 * 0x3c;
          iVar8 = iVar1 + 0xc;
          iVar2 = param_3 + uVar10 * 0x3c;
          cow_bridge_10027120(g, COW_IMG(COW_ADDR_LIFT_10024D7A), 3u, (const CowU32[]){ local_24, iVar2 + 0xc, iVar8 }, g->ecx, g->edx, g->eax, 0u);
          iVar3 = param_3 + (uVar4 & 0x7fff) * 0x3c;
          cow_bridge_10027120(g, COW_IMG(COW_ADDR_LIFT_10024D96), 3u, (const CowU32[]){ local_18, iVar3 + 0xc, iVar8 }, g->ecx, g->edx, g->eax, 0u);
          if (local_28 == 0) {
            puVar6 = local_24;
            puVar7 = local_18;
    L_10024db9:
            cow_bridge_10027550(g, COW_IMG(COW_ADDR_LIFT_10024DC5), 3u, (const CowU32[]){ local_c, puVar7, puVar6 }, g->ecx, g->edx, g->eax, 12u);
          }
          else if (local_28 == 1) {
            puVar6 = local_18;
            puVar7 = local_24;
            goto L_10024db9;
          }
          local_28 = 1 - local_28;
          cow_bridge_10026f20(g, COW_IMG(COW_ADDR_LIFT_10024DE5), 2u, (const CowU32[]){ iVar1 + 0x30, local_c }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10026f20(g, COW_IMG(COW_ADDR_LIFT_10024DF7), 2u, (const CowU32[]){ iVar2 + 0x30, local_c }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10026f20(g, COW_IMG(COW_ADDR_LIFT_10024E09), 2u, (const CowU32[]){ iVar3 + 0x30, local_c }, g->ecx, g->edx, g->eax, 0u);
          local_2c = local_2c + 2u * (uint32_t)(1);
          param_1 = param_1 + -1;
          uVar9 = uVar10;
          uVar10 = uVar4 & 0x7fff;
        } while (param_1 != 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 48 locals, pops [edi, esi, ebp, ebx], ret 12.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10024c50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x30u;                      /* 0x10024c50: 48 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10024c53: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10024c54: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x40u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10024c55: register ebp, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x44u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10024c59: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10024c5d: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10024c5e: push edi */
    { uint32_t A = (uint32_t)(g->ebp); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10024c5f: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebp + 0x2u); g->esi = (g->esi & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10024c63: register esi, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x7FFFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x10024c67: register eax, replayed as the entry ran it */
    { uint32_t a = g->esi; uint32_t b = (uint32_t)0x7FFFu; uint32_t r = (uint32_t)(a & b); g->esi = (uint32_t)(r); }   /* 0x10024c6c: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebp + 0x4u); g->edi = (g->edi & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10024c72: register edi, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 2)); }   /* 0x10024c76: register eax, replayed as the entry ran it */
    { uint32_t a = g->edi; uint32_t b = (uint32_t)0x7FFFu; uint32_t r = (uint32_t)(a & b); g->edi = (uint32_t)(r); }   /* 0x10024c79: register edi, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x10024c7f: register eax, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->ebx + g->eax * 4)); }   /* 0x10024c82: register eax, replayed as the entry ran it */
    cow_lift_10024c50(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
