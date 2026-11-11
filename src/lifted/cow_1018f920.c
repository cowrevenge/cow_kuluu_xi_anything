/* f_0x1018f920 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018f920 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018f920(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int local_4;
    iVar3 = 0;
      iVar4 = 0;
      local_4 = 0;
      if (0 < param_4) {
        do {
          if ((param_5 <= local_4) || (param_2 <= iVar4)) break;
          bVar1 = rd8((uint32_t)(iVar3 + param_3));
          if (((bVar1 < 0x80) || (0x9f < bVar1)) && ((bVar1 < 0xe0 && (bVar1 != 0x7f)))) {
            if (bVar1 == 6) {
              wr8((uint32_t)(iVar4 + param_1), 6);
            }
            else {
              iVar2 = cow_bridge_1011cec0(g, COW_IMG(COW_ADDR_LIFT_1018F9AD), 1u, (const CowU32[]){ (((uint32_t)((short)((CowU32)local_4 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((short)(char)bVar1) & 0xffffu)) }, g->ecx, g->edx, g->eax, 0u);
              if (param_5 < iVar2 + local_4) break;
              wr8((uint32_t)(iVar4 + param_1), rd8((uint32_t)(iVar3 + param_3)));
              iVar2 = cow_bridge_1011cec0(g, COW_IMG(COW_ADDR_LIFT_1018F9CF), 1u, (const CowU32[]){ (((uint32_t)((short)((CowU32)(iVar2 + local_4) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((short)rd8((uint32_t)(iVar3 + param_3))) & 0xffffu)) }, g->ecx, g->edx, g->eax, 0u);
              local_4 = local_4 + iVar2;
            }
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 1;
          }
          else {
            if (param_5 < local_4 + 0xe) break;
            wr8((uint32_t)(iVar4 + param_1), bVar1);
            iVar2 = iVar3 + 1;
            iVar3 = iVar3 + 2;
            wr8((uint32_t)(iVar4 + 1 + param_1), rd8((uint32_t)(iVar2 + param_3)));
            iVar4 = iVar4 + 2;
            if (rd8((uint32_t)(iVar3 + param_3)) != '\x7f') {
              local_4 = local_4 + 0xe;
            }
          }
        } while (iVar3 < param_4);
      }
      wr8((uint32_t)(iVar4 + param_1), 0);
      g->eax = (CowU32)(iVar4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 20 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 20.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1018f920(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1018f920: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1018f921: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1018f925: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1018f926: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x1018f927: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1018f92b: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1018f92c: push edi */
    g->esi = 0u;   /* 0x1018f92d: the value the entry loaded and the decompiler dropped */
    g->edi = 0u;   /* 0x1018f92f: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x1018f931: the value the entry loaded and the decompiler dropped */
    cow_lift_1018f920(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
