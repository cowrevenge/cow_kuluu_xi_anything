/* f_0x10139cd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10139cd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10139cd0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    CowU32 psVar3;
    int iVar4;
    CowU32 puVar5;
    CowU32 uVar6;
    CowU8 bVar7;
    int iVar8;
    CowU32 local_4;
    _Bool bVar2;
      
      bVar2 = 1;
      iVar4 = 8;
      psVar3 = (CowU32)(param_1 + 0x18);
      do {
        if (((int8_t)rd8((uint32_t)((int)psVar3 + 3)) != '\0') && (rd16((uint32_t)psVar3) != 0)) {
          bVar2 = 0;
        }
        psVar3 = psVar3 + 2u * (uint32_t)(2);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if ((int32_t)rd32((uint32_t)(param_1 + 0x3c)) == 0) {
        if (bVar2) {
          g->eax = (CowU32)(0); return;
        }
      }
      else {
        wr16((uint32_t)(param_1 + 0x14), 0xffff);
        wr8((uint32_t)(param_1 + 0x17), 1);
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 0x44)) == 0) {
        g->eax = (CowU32)(0); return;
      }
      iVar4 = cow_bridge_100fc3c0(g, COW_IMG(COW_ADDR_LIFT_10139D27), 3u, (const CowU32[]){ 54u, 0u, 0u }, g->ecx, g->edx, g->eax, 12u);
      if (iVar4 == 0) {
        g->eax = (CowU32)(0); return;
      }
      bVar7 = 0;
      local_4 = 0;
      puVar5 = (CowU32)(param_1 + 0x16);
      iVar8 = 9;
      do {
        if (rd8((uint32_t)(puVar5 + 1u * (uint32_t)(1))) != '\0') {
          sVar1 = (int16_t)rd16((uint32_t)(puVar5 + -2));
          if (sVar1 != 0) {
            wr8((uint32_t)(local_4 + 0x30 + iVar4), rd8((uint32_t)puVar5));
            if (sVar1 == -1) {
              uVar6 = rd32((uint32_t)(param_1 + 0x3c));
            }
            else {
              uVar6 = (CowU32)(CowU8)rd8((uint32_t)(puVar5 + 1u * (uint32_t)(1)));
            }
            bVar7 = bVar7 + 1;
            wr32((uint32_t)(iVar4 + 8 + local_4 * 4), uVar6);
            local_4 = (CowU32)bVar7;
          }
        }
        puVar5 = puVar5 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      wr16((uint32_t)(iVar4 + 0x3a), rd16((uint32_t)(param_1 + 0x44)));
      wr32((uint32_t)(iVar4 + 4), rd32((uint32_t)(param_1 + 0x48)));
      wr8((uint32_t)(iVar4 + 0x3c), bVar7);
      cow_bridge_100fc4d0(g, COW_IMG(COW_ADDR_LIFT_10139DA0), 3u, (const CowU32[]){ iVar4, 0x40, 0 }, g->ecx, g->edx, g->eax, 12u);
      wr32((uint32_t)(param_1 + 0x44), 0);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebp, edi, ebx, ecx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10139cd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10139cd0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10139cd1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10139cd2: push edi */
    g->edi = g->ecx;   /* 0x10139cd3: the value the entry loaded and the decompiler dropped */
    { g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(0x1u); }   /* 0x10139cd5: register edx, replayed as the entry ran it */
    g->ecx = 8u;   /* 0x10139cd7: the value the entry loaded and the decompiler dropped */
    cow_lift_10139cd0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
