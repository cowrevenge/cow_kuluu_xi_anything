/* f_0x101fdb40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101fdb40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101fdb40(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    char cVar3;
    char cVar4;
    char cVar5;
    char cVar6;
    CowU32 uVar7;
    cVar3 = rd8((uint32_t)(param_1 + 0x34));
      cVar4 = rd8((uint32_t)(param_1 + 0x35));
      iVar2 = (CowU32)(rd8((uint32_t)rd32((uint32_t)((param_1 + 0x38)))) >> 4) * 10;
      uVar1 = cVar3 + param_2;
      param_3 = param_3 + cVar4;
      if ((rd8((uint32_t)(param_1 + 0x36)) & 1) == 0) {
        cVar5 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103850A8) + 4u * (uint32_t)(iVar2)));
        cVar6 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103850A9) + 4u * (uint32_t)(iVar2)));
      }
      else {
        cVar5 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103850A9) + 4u * (uint32_t)(iVar2)));
        cVar6 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103850A8) + 4u * (uint32_t)(iVar2)));
      }
      uVar7 = 5 - (int)cVar5;
      if ((int)uVar1 < 0) {
        wr8((uint32_t)(param_1 + 0x34), 0);
      }
      else {
        if ((int)uVar1 <= (int)uVar7) {
          uVar7 = uVar1 & 0xff;
        }
        wr8((uint32_t)(param_1 + 0x34), (char)uVar7);
      }
      if (param_3 < 0) {
        wr8((uint32_t)(param_1 + 0x35), 0);
      }
      else if (5 - cVar6 < param_3) {
        wr8((uint32_t)(param_1 + 0x35), (char)(5 - cVar6));
      }
      else {
        wr8((uint32_t)(param_1 + 0x35), (char)param_3);
      }
      if (((int)cVar3 != (int)rd8((uint32_t)(param_1 + 0x34))) ||
         ((int)cVar4 != (int)rd8((uint32_t)(param_1 + 0x35)))) {
        cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_101FDBE4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101fdb40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->ecx + 0x38u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101fdb40: register eax, replayed as the entry ran it */
    g->edx = 0u;   /* 0x101fdb43: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101fdb45: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101fdb46: push ebp */
    { uint32_t A = (uint32_t)(g->eax); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101fdb47: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101fdb49: push esi */
    { uint32_t A = (uint32_t)(g->ecx + 0x34u); g->esi = (uint32_t)((uint32_t)(int32_t)((int8_t)rd8(A))); }   /* 0x101fdb4a: register esi, replayed as the entry ran it */
    g->eax = g->edx;   /* 0x101fdb4e: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101fdb50: push edi */
    { { unsigned c = (unsigned)(0x4u) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->eax = (uint32_t)(r); } }; }   /* 0x101fdb51: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x35u); g->edi = (uint32_t)((uint32_t)(int32_t)((int8_t)rd8(A))); }   /* 0x101fdb54: register edi, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x101fdb58: register eax, replayed as the entry ran it */
    { g->edx = (uint32_t)((uint32_t)(g->eax * 2 + COW_IMG(COW_ADDR_LIFT_103850A8) + RD)); }   /* 0x101fdb5b: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101fdb62: register eax, replayed as the entry ran it */
    { g->ebx = (uint32_t)((uint32_t)(g->esi + g->eax)); }   /* 0x101fdb66: register ebx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101fdb69: register eax, replayed as the entry ran it */
    cow_lift_101fdb40(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
