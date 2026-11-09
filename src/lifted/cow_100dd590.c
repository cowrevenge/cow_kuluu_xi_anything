/* f_0x100dd590 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100dd590 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100dd590(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 puVar5;
    CowU32 puVar6;
    CowU32 puVar7;
    CowU8 local_68[88];
    CowU32 local_10;
    CowU32 local_c;
    CowU32 local_8;
    CowU32 local_4;
    puVar5 = param_1 + 7;
      puVar6 = param_4;
      for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)param_1, rd32((uint32_t)puVar6));
        puVar6 = puVar6 + 1;
        param_1 = param_1 + 1;
      }
      uVar4 = param_5 - 0x1c;
      if ((param_3 == 0) && (uVar4 != 0)) {
        puVar6 = param_4 + 7;
        puVar7 = puVar5;
        for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          wr32((uint32_t)puVar7, rd32((uint32_t)puVar6));
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar2 = uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          wr8((uint32_t)puVar7, rd8((uint32_t)puVar6));
          puVar6 = (CowU32)((int)puVar6 + 1);
          puVar7 = (CowU32)((int)puVar7 + 1);
        }
      }
      else {
        iVar1 = cow_bridge_100df7c0(g, COW_IMG(COW_ADDR_LIFT_100DD5FB), 5u, (const CowU32[]){ param_4 + 7, uVar4, puVar5, param_2 - 0x2c, param_6 }, g->ecx, g->edx, param_4, 0u);
        if (iVar1 < 0) {
          cow_bridge_100df780(g, COW_IMG(COW_ADDR_LIFT_100DD616), 3u, (const CowU32[]){ param_4 + 7, param_5 + -0x1c, param_6 }, g->ecx, g->edx, param_4, 12u);
          g->eax = (CowU32)(-1); return;
        }
        iVar3 = (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
        wr32((uint32_t)(iVar3 + (int)puVar5), iVar1);
        uVar4 = iVar3 + 4;
      }
      if (param_2 < uVar4 + 0x2c) {
        g->eax = (CowU32)(-1); return;
      }
      cow_bridge_100dde90(g, COW_IMG(COW_ADDR_LIFT_100DD65B), 1u, (const CowU32[]){ local_68 }, g->ecx, g->edx, param_4, 0u);
      cow_bridge_100ddec0(g, COW_IMG(COW_ADDR_LIFT_100DD667), 3u, (const CowU32[]){ local_68, puVar5, uVar4 }, g->ecx, g->edx, param_4, 0u);
      cow_bridge_100ddf60(g, COW_IMG(COW_ADDR_LIFT_100DD671), 1u, (const CowU32[]){ local_68 }, g->ecx, g->edx, param_4, 0u);
      puVar6 = (CowU32)(uVar4 + (int)puVar5);
      wr32((uint32_t)puVar6, local_10);
      wr32((uint32_t)(puVar6 + 4u * (uint32_t)(1)), local_c);
      wr32((uint32_t)(puVar6 + 4u * (uint32_t)(2)), local_8);
      wr32((uint32_t)(puVar6 + 4u * (uint32_t)(3)), local_4);
      if (param_3 != 0) {
        cow_bridge_100dca00(g, COW_IMG(COW_ADDR_LIFT_100DD6A8), 3u, (const CowU32[]){ param_3, puVar5, uVar4 + 0x10 }, g->ecx, g->edx, param_4, 12u);
      }
      g->eax = (CowU32)(uVar4 + 0x2c); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100dd590(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    g->eax = param_4;   /* 0x100dd590: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x68u;                      /* 0x100dd594: 104 bytes of locals */
    g->ecx = 7u;   /* 0x100dd597: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100dd59c: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100dd59d: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x74u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x100dd59e: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100dd5a2: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100dd5a3: push edi */
    g->esi = g->eax;   /* 0x100dd5a4: the value the entry loaded and the decompiler dropped */
    g->edi = g->ebp;   /* 0x100dd5a6: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ebp; uint32_t b = (uint32_t)0x1Cu; uint32_t r = (uint32_t)(a + b); g->ebp = (uint32_t)(r); }   /* 0x100dd5a8: register ebp, replayed as the entry ran it */
    cow_lift_100dd590(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
